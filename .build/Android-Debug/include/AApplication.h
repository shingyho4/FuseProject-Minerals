#include "AndroidCommon.h"
#include "ACrossThread.h"
#include <Xli/Mutex.h>
#include <Xli/MutexQueue.h>
#include <app/Uno.Platform2.Display.h>

class CTAction
{
public:
    virtual void Execute() = 0;
};

class AApplication
{
private:

public:
    static bool _emitTicks;
    static bool _seperateCoreThread;
    static bool _seperateThreadRunning;
    static int _bottomFrameSize;
    static ::app::Uno::Platform2::Display* _rootDisplay;
    static Xli::MutexQueue<CTAction*> _crossThreadEventQueue;

    static ::app::Uno::Float2 _GetRootDisplaySize();
    static int GetBottomFrameHeight();

    static void cppOnCreate(bool _seperateCoreThread);
    static void cppOnDestroy();
    static void cppOnPause();
    static void cppOnResume();
    static void cppOnRestart();
    static void cppOnStart();
    static void cppOnStop();
    static void cppOnSaveInstanceState();
    static void cppOnConfigChanged();
    static void cppOnLowMemory();
    static void cppOnWindowFocusChanged(bool hasFocus);
    static void cppForceRedraw();
    static double Tick();

    static void cppJavaThrowError (Xli::String errorMessage);
    static void cppUnoViewReady (void* unoView, jobject view);
    static void cppViewVisibilityChanged(void* unoView, bool visibility);
    static void cppOnSurfaceTouch(void* unoView, int pointerID, int x, int y, int type);
    static void cppTimerCallback (int timerID);
    static void cppOnKeyboardResized (int height);
    static void cppOnTextViewTextChanged (void* unoViewPtr, jstring text);
    static void cppOnTextViewInputFinished (void* unoViewPtr);
    static void cppOnKeyUp (int key);
    static void cppOnKeyDown (int key);
    static void cppUnoSurfaceCreated (void* unoView, jobject surface);
    static void cppUnoSurfaceDestroyed(void* unoView);

    static void processCrossThreadMessages();
    static void Init();
    static void mainLoop(bool _seperateCoreThread, bool _cppMainLoop);

};
