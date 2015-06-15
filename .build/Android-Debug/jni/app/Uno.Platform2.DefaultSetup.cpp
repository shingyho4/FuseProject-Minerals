// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform2_TimerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform2_TouchEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Platform2.DefaultSetup.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.GraphicsView.h>
#include <app/Uno.Platform2.TimerEventArgs.h>
#include <app/Uno.Platform2.TouchEventArgs.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Platform2.ViewNativeHandle.h>
#include <app/Uno.Rect.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace Platform2 {

bool DefaultSetup___forceDrawNextFrame;
::uStaticStrong< ::app::Uno::Platform2::GraphicsView*> DefaultSetup___RootView;

DefaultSetup__uType* DefaultSetup__typeof()
{
    static DefaultSetup__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultSetup__uType*)::uAllocClassType(sizeof(DefaultSetup__uType), "Uno.Platform2.DefaultSetup");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Platform2::GraphicsView* DefaultSetup__get_RootView(::uStatic* __this)
{
    return DefaultSetup___RootView;
}

void DefaultSetup__set_RootView(::uStatic* __this, ::app::Uno::Platform2::GraphicsView* value)
{
    DefaultSetup___RootView = value;
}

void DefaultSetup__OnStarted(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Load();
}

void DefaultSetup__OnTerminating(::uStatic* __this, int state)
{
    ::app::Uno::Platform2::Application__remove_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnStarted));
    ::app::Uno::Platform2::Application__remove_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterForeground));
    ::app::Uno::Platform2::Application__remove_EnteringInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterInteractive));
    ::app::Uno::Platform2::Application__remove_ExitedInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnExitInteractive));
    ::app::Uno::Platform2::Application__remove_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterBackground));
    ::app::Uno::Platform2::Application__remove_Terminating(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnTerminating));
    ::app::Uno::Platform2::Application__remove_KeyDown(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnKeyDown));
    ::app::Uno::Platform2::Application__remove_KeyUp(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnKeyUp));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->remove_HandleReady(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnViewHandleReady));
    DefaultSetup__set_RootView(NULL, NULL);
}

void DefaultSetup__OnEnterForeground(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(20u);
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->ResumeRendering();
    DefaultSetup___forceDrawNextFrame = true;
}

void DefaultSetup__OnEnterInteractive(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(60u);
}

void DefaultSetup__OnExitInteractive(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(20u);
}

void DefaultSetup__OnEnterBackground(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->PauseRendering();
}

void DefaultSetup__OnViewHandleReady(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Uno::Platform2::Application__set_RootView(NULL, ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->Handle());
    ::app::Uno::Platform2::Display* mainDisplay = ::app::Uno::Platform2::Display__get_MainDisplay(NULL);
    ::uPtr< ::app::Uno::Platform2::Display*>(mainDisplay)->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnDisplayFrameChanged));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->Frame(mainDisplay->Frame());
}

void DefaultSetup__OnDisplayFrameChanged(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->Frame(::uPtr< ::app::Uno::Platform2::Display*>(::uAs< ::app::Uno::Platform2::Display*>(sender, ::app::Uno::Platform2::Display__typeof()))->Frame());
    DefaultSetup___forceDrawNextFrame = true;
}

void DefaultSetup__OnViewFrameChanged(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(app)->GraphicsContext())->UpdateBackbuffer();
    ::uPtr< ::app::Uno::Platform::Window*>(app->Window())->OnResized(::app::Uno::EventArgs__Empty);
    DefaultSetup___forceDrawNextFrame = true;
}

void DefaultSetup__OnUpdate(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Application*>(app)->FrameTime(::uPtr< ::app::Uno::Platform2::TimerEventArgs*>(args)->LastTickTimestamp() + ::uPtr< ::app::Uno::Platform2::TimerEventArgs*>(args)->TickDuration());
    app->FrameInterval(args->TickDuration());
    app->Update();

    if (app->DrawNextFrame() || DefaultSetup___forceDrawNextFrame)
    {
        ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_Draw(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnDraw));
        DefaultSetup___forceDrawNextFrame = false;
    }
}

void DefaultSetup__OnDraw(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Graphics::GraphicsContext* gc = ::uPtr< ::app::Uno::Application*>(app)->GraphicsContext();
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->SetRenderTarget(::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->Backbuffer());
    gc->Clear(app->ClearColor(), app->ClearDepth());
    app->Draw();
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->remove_Draw(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnDraw));
}

void DefaultSetup__OnTouchDown(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Platform::PointerEventArgs* pointerArgs = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, 0, ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->IsPrimary(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->Position(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->PointerID(), 0, ::uDefault< ::app::Uno::Float2>(), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(pointerArgs);
}

void DefaultSetup__OnTouchMove(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Platform::PointerEventArgs* pointerArgs = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, 0, ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->IsPrimary(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->Position(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->PointerID(), 0, ::uDefault< ::app::Uno::Float2>(), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(pointerArgs);
}

void DefaultSetup__OnTouchUp(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Platform::PointerEventArgs* pointerArgs = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, 0, ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->IsPrimary(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->Position(), ::uPtr< ::app::Uno::Platform2::TouchEventArgs*>(args)->PointerID(), 0, ::uDefault< ::app::Uno::Float2>(), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(pointerArgs);
}

void DefaultSetup__OnKeyDown(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyPressed(args);
}

void DefaultSetup__OnKeyUp(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyReleased(args);
}

void DefaultSetup___TypeInit(::uStatic* __this)
{
    ::app::Uno::Platform2::Application__add_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnStarted));
    ::app::Uno::Platform2::Application__add_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterForeground));
    ::app::Uno::Platform2::Application__add_EnteringInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterInteractive));
    ::app::Uno::Platform2::Application__add_ExitedInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnExitInteractive));
    ::app::Uno::Platform2::Application__add_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnEnterBackground));
    ::app::Uno::Platform2::Application__add_Terminating(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnTerminating));
    ::app::Uno::Platform2::Application__add_KeyDown(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnKeyDown));
    ::app::Uno::Platform2::Application__add_KeyUp(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnKeyUp));
    DefaultSetup__set_RootView(NULL, ::app::Uno::Platform2::GraphicsView__New_2(NULL));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_HandleReady(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnViewHandleReady));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnViewFrameChanged));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnUpdate));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_TouchDown(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnTouchDown));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_TouchMove(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnTouchMove));
    ::uPtr< ::app::Uno::Platform2::GraphicsView*>(DefaultSetup__get_RootView(NULL))->add_TouchUp(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof(), (const void*)::app::Uno::Platform2::DefaultSetup__OnTouchUp));
}

}}}
