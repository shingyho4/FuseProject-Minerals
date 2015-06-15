#include "AApplication.h"

#include <Xli.h>
#include <Xli/Time.h>
#include "XliPlatform.h"
#include "XliPlatform/PlatformSpecific/Android.h"
#include "ACrossThread.h"
#include <Uno/Platform2.h>
#include <app/Uno.Platform2.TouchEventArgs.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Platform2.GraphicsView.h>
#include <app/Uno.Platform2.TextInputView.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.TimerEventArgs.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform2.DefaultSetup.h>

void uStartApp();

bool AApplication::_seperateCoreThread;
bool AApplication::_seperateThreadRunning;
bool AApplication::_emitTicks;
int AApplication::_bottomFrameSize;

::app::Uno::Platform2::Display* AApplication::_rootDisplay;
Xli::MutexQueue<CTAction*> AApplication::_crossThreadEventQueue;

void AApplication::cppOnCreate(bool seperateCoreThread)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Start(NULL);
}

void AApplication::cppOnDestroy()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Terminate(NULL);
    // Free backend state
    if (_seperateCoreThread) {
        AApplication::_seperateThreadRunning = false;
    }
    AApplication::_bottomFrameSize = 0;
    AApplication::_emitTicks = false;
    while ((_crossThreadEventQueue.Count() > 0))
    {
        CTAction* action = _crossThreadEventQueue.Dequeue();
        delete action;
    }
    GLHelper::DeInitGL();
}

void AApplication::cppOnPause()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__ExitInteractive(NULL);
}

void AApplication::cppOnResume()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterForeground(NULL);
}

void AApplication::cppOnRestart()
{
    if (!AApplication::_seperateCoreThread) {
        GLHelper::SwapBackToPBufferSurface();
    }
}

void AApplication::cppOnStart()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnStop()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterBackground(NULL);
}

void AApplication::cppOnSaveInstanceState()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnConfigChanged()
{
    uAutoReleasePool pool;
    if (_rootDisplay) {
        _rootDisplay->_private.ResetGeometry(_rootDisplay);
    }
}

void AApplication::cppOnLowMemory()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnReceivedLowMemoryWarning(NULL);
}

void AApplication::cppOnWindowFocusChanged(bool hasFocus)
{
    uAutoReleasePool pool;
    if (hasFocus)
    {
        ::app::Uno::Platform2::Application__EnterInteractive(NULL);
    } else {
        ::app::Uno::Platform2::Application__ExitInteractive(NULL);
    }
}

void AApplication::cppJavaThrowError (Xli::String message)
{
    XLI_THROW(message.Ptr());
}

void AApplication::cppUnoViewReady (void* uView, jobject view)
{
    uAutoReleasePool pool;

    ::app::Uno::Platform2::View* unoView = (::app::Uno::Platform2::View*)uView;
    unoView->Handle(view);
}

void AApplication::cppUnoSurfaceCreated (void* uView, jobject surface)
{
    uAutoReleasePool pool;

    ::app::Uno::Platform2::GraphicsView* unoGraphicsView = (::app::Uno::Platform2::GraphicsView*)uView;
    unoGraphicsView->_private_1.SurfaceCreated(unoGraphicsView, surface);
}

void AApplication::cppUnoSurfaceDestroyed(void* unoView)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::GraphicsView* unoGraphicsView = (::app::Uno::Platform2::GraphicsView*)unoView;
    unoGraphicsView->_private_1.SurfaceDestroyed(unoGraphicsView);
}

void AApplication::cppViewVisibilityChanged (void* unoViewPtr, bool visibility)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::View* unoView = (::app::Uno::Platform2::View*)unoViewPtr;
    unoView->IsVisible(visibility);
}

void AApplication::cppOnSurfaceTouch(void* unoView, int pointerID, int x, int y, int type)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::GraphicsView* unoGraphicsView = (::app::Uno::Platform2::GraphicsView*)unoView;
    ::app::Uno::Platform2::TouchEventArgs* args;
    double time = Xli::GetSeconds();
    ::app::Uno::Float2 pos = ::app::Uno::Float2__New_2(NULL, (float)x, (float)y);
    bool primary = pointerID==0;
    ::uUInt tapCount = 1;
    args = ::app::Uno::Platform2::TouchEventArgs__New_2(NULL, time, pos, primary, tapCount, pointerID);

    switch (type)
    {
    case 0:
        //MOVE
        unoGraphicsView->OnTouchMove(args);
        break;
    case 1:
        //DOWN
        unoGraphicsView->OnTouchDown(args);
        break;
    case 2:
        //UP
        unoGraphicsView->OnTouchUp(args);
        break;
    }
}


void AApplication::cppTimerCallback (int timerID)
{
    // uAutoReleasePool pool;
}

::app::Uno::Float2 AApplication::_GetRootDisplaySize()
{
    jclass shim = JniHelper::GetShim();
    WITH_STATIC_JAVA_METHOD(getRealDisplayWidth, shim, "GetRealDisplayWidth", "()I");
    WITH_STATIC_JAVA_METHOD_USEJNI(getRealDisplayHeight, shim, "GetRealDisplayHeight", "()I");
    float w = (int)__jni->CallStaticIntMethod(shim, getRealDisplayWidth);
    float h = (int)__jni->CallStaticIntMethod(shim, getRealDisplayHeight);
    return  ::app::Uno::Float2__New_2(NULL, w, h);
}

int AApplication::GetBottomFrameHeight()
{
    return _bottomFrameSize;
}

void AApplication::cppOnKeyboardResized (int height) //{TODO} rename to cppOnBottomFrameChanged(int height)
{
    uAutoReleasePool pool;
    int resizeReason;

    ::app::Uno::Float2 size = _GetRootDisplaySize();

    ::app::Uno::Float2 start_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - _bottomFrameSize);
    ::app::Uno::Float2 start_size = ::app::Uno::Float2__New_2(NULL, size.X, _bottomFrameSize);

    ::app::Uno::Float2 end_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - height);
    ::app::Uno::Float2 end_size = ::app::Uno::Float2__New_2(NULL, size.X, height);

    ::app::Uno::Rect startFrame = ::app::Uno::Rect__New_2(NULL, start_pos, start_size);
    ::app::Uno::Rect endFrame = ::app::Uno::Rect__New_2(NULL, end_pos, end_size);

    if (_bottomFrameSize==0 && height>0) {
        resizeReason = 0;
    } else if (_bottomFrameSize>0 && height==0) {
        resizeReason = 2;
    } else if (_bottomFrameSize>0 && height > 0 && height != _bottomFrameSize) {
        resizeReason = 1;
    }
    _bottomFrameSize = height;

    // make the event args
    ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args = ::app::Uno::Platform2::SystemUIWillResizeEventArgs__New_2(NULL, 1, resizeReason, endFrame, startFrame, 1, 0);

    //Make the call
    ::app::Uno::Platform2::SystemUI__OnWillResize(NULL, args);
}

void AApplication::cppOnTextViewTextChanged (void* unoViewPtr, jstring text)
{
    uAutoReleasePool pool;

    ::app::Uno::Platform2::TextInputView* unoTextInputView = (::app::Uno::Platform2::TextInputView*) unoViewPtr;
    ::uString* unoText = JniHelper::JavaToUnoString(text);
    JniHelper jni;
    jni->DeleteGlobalRef(text);
    unoTextInputView->SetTextFromNativeEvent(unoText);

}

void AApplication::cppOnTextViewInputFinished (void* unoViewPtr)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::TextInputView* unoTextInputView = (::app::Uno::Platform2::TextInputView*) unoViewPtr;
    unoTextInputView->OnReturnPressed();
}

void AApplication::cppOnKeyUp (int key)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnKeyUp(NULL, key, 0);
}


void AApplication::cppOnKeyDown (int key)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnKeyDown(NULL, key, 0);
}

void AApplication::cppForceRedraw ()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::DefaultSetup___forceDrawNextFrame = true;
}

//--------------------------------------------------

static double lastTimeStamp;

// This is used only when dictated by the java activity.
// It is possible on later versions of android (v >= 4.2) to use the choreographer
void AApplication::mainLoop(bool seperateCoreThread, bool cppMainLoop)
{
    _seperateCoreThread = seperateCoreThread;
    _seperateThreadRunning = true;
    GLHelper::InitGL();
    if (!cppMainLoop) return;
    try
    {
        double startTime = Xli::GetSeconds();
        while (_seperateThreadRunning)
        {
            double msTimeout = AApplication::Tick();
            if (msTimeout > 0)
            {
                Xli::Sleep(msTimeout);
            }
        }
    }
    catch (const Xli::Exception& e)
    {
        Xli::CoreLib::OnUnhandledException(e, "main");
    }
    catch (...)
    {
        Xli::Exception e("Unhandled c++ error in Main Loop");
        Xli::CoreLib::OnUnhandledException(e, "main");
    }
}

double AApplication::Tick()
{
    // time
    double last = lastTimeStamp;
    double startTime = Xli::GetSeconds();
    double milliseconds = startTime-last;
    lastTimeStamp = startTime;

    // process messages
    processCrossThreadMessages();

    // tick
    if (_emitTicks) {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::TimerEventArgs* args = ::app::Uno::Platform2::TimerEventArgs__New_2(NULL, lastTimeStamp, milliseconds);
        _rootDisplay->OnTick(args);
    }

    // calc timeout
    double fps = (double)_rootDisplay->FramesPerSecond();
    if (fps == 0) fps = 1; // {TODO} TEMP HACK
    double targetTime = 1.0 / fps;
    double renderTime = Xli::GetSeconds() - startTime;
    int msTimeout = (int)((targetTime - renderTime) * 1000.0 + 0.5);
    if (msTimeout<0) msTimeout = 0;

    return msTimeout;
}

void AApplication::processCrossThreadMessages()
{
    while ((_crossThreadEventQueue.Count() > 0))
    {
        CTAction* action = _crossThreadEventQueue.Dequeue();
        action->Execute();
        delete action;
    }
}

void AApplication::Init()
{
    Xli::PlatformSpecific::Android::SetLogTag("MyMineral");
    _seperateCoreThread = true; // {TODO} why set this here? is set in mainLoop
    _emitTicks = false;
}
