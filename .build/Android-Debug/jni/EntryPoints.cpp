#include "EntryPoints.h"
#include "AApplication.h"
#include "JNIHelper.h"
#include "GLHelper.h"

// Java native methods call here
// If we are not running on the android UI thread we need
// to dispatch the event to the uno thread. If we need the
// java thread to wait until the uno thread has processed
// the event then we use the WAIT_ON_UNO_* and RUN_ON_UNO_*
// commands

//--------------------------------------------------
// state for WAIT_ON_UNO & RUN_ON_UNO commands

int EntryPoints::key = 0;
pthread_cond_t EntryPoints::cond;
pthread_mutex_t EntryPoints::mutex;

//--------------------------------------------------

class CTError : public CTAction
{
public:
    Xli::String _message;
    CTError(Xli::String message)
    {
        _message = message;
    }
    virtual void Execute()
    {
        AApplication::cppJavaThrowError(_message);
    }
};

extern "C"
{
    void JNICALL shimJavaThrowError (JNIEnv* env , jobject obj, jint errorCode, jstring errorMessage)
    {
        char const* cerrorMessage = env->GetStringUTFChars(errorMessage, NULL);
        Xli::String message = "XLiError (" + Xli::String(errorCode) + ") - JavaThrown:" + Xli::String(cerrorMessage);
        env->ReleaseStringUTFChars(errorMessage, cerrorMessage);

        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppJavaThrowError(message);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTError(message));
        }
    }
}
//--------------------------------------------------

class CTViewReady : public CTAction
{
    void *_unoView;
    jobject _view;
public:
    CTViewReady(void *unoView, jobject view)
    {
        _unoView = unoView;
        _view = view;
    }
    virtual void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppUnoViewReady(_unoView, _view);
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL shimUnoViewReady (JNIEnv* env, jobject obj, jlong unoView, jobject view)
    {
        view = JniHelper::EnsureGlobalRef(view);
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppUnoViewReady((void *)unoView, view);
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTViewReady((void *)unoView, view));
            WAIT_ON_UNO_END();
        }
    }
}

//--------------------------------------------------

class CTSurfaceCreated : public CTAction
{
    void *_unoView;
    jobject _surface;
public:
    CTSurfaceCreated(void *unoView, jobject surface)
    {
        _unoView = unoView;
        _surface = surface;
    }
    virtual void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppUnoSurfaceCreated(_unoView, _surface);
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL shimUnoSurfaceCreated (JNIEnv* env, jobject obj, jlong unoView, jobject surface)
    {
        surface = JniHelper::EnsureGlobalRef(surface);
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppUnoSurfaceCreated((void *)unoView, surface);
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTSurfaceCreated((void *)unoView, surface));
            WAIT_ON_UNO_END();
        }
    }
}

//--------------------------------------------------

class CTSurfaceDestroyed : public CTAction
{
    void *_unoView;
public:
    CTSurfaceDestroyed(void *unoView) { _unoView = unoView; }
    virtual void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppUnoSurfaceDestroyed(_unoView);
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL shimUnoSurfaceDestroyed (JNIEnv* env, jobject obj, jlong unoView)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppUnoSurfaceDestroyed((void *)unoView);
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTSurfaceDestroyed((void *)unoView));
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTViewVisibilityChanged : public CTAction
{
    void* _ptr;
    bool _visibility;
public:
    CTViewVisibilityChanged(void* ptr, bool visibility)
    {
        _ptr = ptr;
        _visibility = visibility;
    }
    virtual void Execute()
    {
        AApplication::cppViewVisibilityChanged(_ptr, _visibility);
    }
};

extern "C"
{
    void JNICALL shimUnoViewVisibilityChanged (JNIEnv* env, jobject obj, jlong ptr, jboolean visibility)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppViewVisibilityChanged((void*)ptr, visibility);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTViewVisibilityChanged((void*)ptr, visibility));
        }
    }
}
//--------------------------------------------------

class CTTouchEvent : public CTAction
{
    void* _ptr;
    int _pointerID;
    int _x;
    int _y;
    int _type;
public:
    CTTouchEvent(void* ptr, int pointerID, int x, int y, int type)
    {
        _ptr = ptr;
        _pointerID = pointerID;
        _x = x;
        _y = y;
        _type = type;
    }
    virtual void Execute()
    {
        AApplication::cppOnSurfaceTouch(_ptr, _pointerID, _x, _y, _type);
    }
};

extern "C"
{
    void JNICALL shimOnSurfaceTouch(JNIEnv* env, jobject obj, jlong ptr, jint pointerID, jint x, jint y, jint type)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnSurfaceTouch((void*)ptr, pointerID, x, y, type);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTTouchEvent((void*)ptr, pointerID, x, y, type));
        }
    }
}
//--------------------------------------------------

extern "C"
{
    void JNICALL shimTimerCallback (JNIEnv* env, jobject obj, jint timerID)
    {
        AApplication::cppTimerCallback(timerID);
        // if (AApplication::_seperateCoreThread)
        // {
        // }
    }
}
//--------------------------------------------------

class CTKeyboardResize : public CTAction
{
    int _height;
public:
    CTKeyboardResize(int height)
    {
        _height = height;
    }
    void Execute()
    {
        AApplication::cppOnKeyboardResized(_height);
    }
};

extern "C"
{
    void JNICALL shimOnKeyboardResized (JNIEnv* env, jobject obj, jint height)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnKeyboardResized(height);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTKeyboardResize(height));
        }
    }
}
//--------------------------------------------------

class CTTextChanged : public CTAction
{
    void* _ptr;
    jstring _text;
public:
    CTTextChanged(void* ptr, jstring text) { _ptr = ptr; _text = text; }
    void Execute()
    {
        AApplication::cppOnTextViewTextChanged(_ptr, _text);
    }
};

extern "C"
{
    void JNICALL shimOnTextViewTextChanged (JNIEnv* env, jobject obj, jlong ptr, jstring text)
    {
        text = (jstring)JniHelper::EnsureGlobalRef(text);
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnTextViewTextChanged((void*)ptr, text);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTTextChanged((void*)ptr, text));
        }
    }
}

//--------------------------------------------------

class CTKeyUp : public CTAction
{
    int _key;
public:
    CTKeyUp(int key) { _key = key; }
    void Execute() { AApplication::cppOnKeyUp(_key); }
};

extern "C"
{
    void JNICALL shimOnKeyUp (JNIEnv* env, jobject obj, jint key)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnKeyUp(key);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTKeyUp(key));
        }
    }
}

//--------------------------------------------------

class CTKeyDown : public CTAction
{
    int _key;
public:
    CTKeyDown(int key) { _key = key; }
    void Execute() { AApplication::cppOnKeyDown(_key); }
};

extern "C"
{
    void JNICALL shimOnKeyDown (JNIEnv* env, jobject obj, jint key)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnKeyDown(key);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTKeyDown(key));
        }
    }
}

//--------------------------------------------------


class CTTextInputFinished : public CTAction
{
    void* _ptr;
public:
    CTTextInputFinished(void* ptr) { _ptr = ptr; }
    void Execute()
    {
        AApplication::cppOnTextViewInputFinished(_ptr);
    }
};

extern "C"
{
    void JNICALL shimOnTextViewInputFinished (JNIEnv* env, jobject obj, jlong ptr)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnTextViewInputFinished((void*)ptr);
        } else {
            AApplication::_crossThreadEventQueue.Enqueue(new CTTextInputFinished((void*)ptr));
        }
    }
}

//--------------------------------------------------

class CTOnCreate : public CTAction
{
    bool _seperateCoreThread;
public:
    CTOnCreate(bool seperateCoreThread) { _seperateCoreThread = seperateCoreThread; }
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnCreate(_seperateCoreThread);
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnCreate(JNIEnv *env , jobject obj, jboolean _seperateCoreThread)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnCreate((bool)_seperateCoreThread);
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnCreate((bool)_seperateCoreThread));
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnDestroy : public CTAction
{
public:
    CTOnDestroy() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnDestroy();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnDestroy(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnDestroy();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnDestroy());
            WAIT_ON_UNO_END();
        }
    }

}
//--------------------------------------------------

class CTOnPause : public CTAction
{
public:
    CTOnPause() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnPause();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnPause(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnPause();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnPause());
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnResume : public CTAction
{
public:
    CTOnResume() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnResume();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnResume(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnResume();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnResume());
            WAIT_ON_UNO_END();
        }
    }
}

//--------------------------------------------------

class CTOnRestart : public CTAction
{
public:
    CTOnRestart() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnRestart();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnRestart(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnRestart();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnRestart());
            WAIT_ON_UNO_END();
        }
    }
}

//--------------------------------------------------

class CTOnStart : public CTAction
{
public:
    CTOnStart() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnStart();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnStart(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnStart();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnStart());
            WAIT_ON_UNO_END();
        }
    }
}

//--------------------------------------------------

class CTOnStop : public CTAction
{
public:
    CTOnStop() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnStop();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnStop(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnStop();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnStop());
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnSaveInstanceState : public CTAction
{
public:
    CTOnSaveInstanceState() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnSaveInstanceState();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnSaveInstanceState(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnSaveInstanceState();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnSaveInstanceState());
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnConfigChanged : public CTAction
{
public:
    CTOnConfigChanged() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnConfigChanged();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnConfigChanged(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnConfigChanged();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnConfigChanged());
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnLowMemory : public CTAction
{
public:
    CTOnLowMemory() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnLowMemory();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnLowMemory(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnLowMemory();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnLowMemory());
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

class CTOnWindowFocusChanged : public CTAction
{
    bool _hasFocus;
public:
    CTOnWindowFocusChanged(bool hasFocus) { _hasFocus = hasFocus; }
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppOnWindowFocusChanged(_hasFocus);
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppOnWindowFocusChanged(JNIEnv *env , jobject obj, jboolean hasFocus)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppOnWindowFocusChanged((bool)hasFocus);
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTOnWindowFocusChanged((bool)hasFocus));
            WAIT_ON_UNO_END();
        }
    }
}
//--------------------------------------------------

extern "C"
{
    void JNICALL cppTick (JNIEnv* env, jobject obj)
    {
        AApplication::Tick();
    }
}

//--------------------------------------------------

class CTForceRedraw : public CTAction
{
public:
    CTForceRedraw() {}
    void Execute()
    {
        RUN_ON_UNO_BEGIN();
        AApplication::cppForceRedraw();
        RUN_ON_UNO_END();
    }
};
extern "C"
{
    void JNICALL cppForceRedraw(JNIEnv *env , jobject obj)
    {
        if (!AApplication::_seperateCoreThread)
        {
            AApplication::cppForceRedraw();
        } else {
            WAIT_ON_UNO_BEGIN();
            AApplication::_crossThreadEventQueue.Enqueue(new CTForceRedraw());
            WAIT_ON_UNO_END();
        }
    }
}
extern "C"
{
    void JNICALL cppForceRedrawUnsafe(JNIEnv *env , jobject obj)
    {
        AApplication::cppForceRedraw();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnStartMainLoop (JNIEnv* env, jobject obj, jboolean _seperateCoreThread, jboolean _cppMainLoop)
    {
        AApplication::mainLoop((bool)_seperateCoreThread, (bool)_cppMainLoop);
    }
}

void AttachNativeCallbacks(JNIEnv* jni, jclass shimClass)
{
    LOGD("Registering native functions");
    static JNINativeMethod native_funcs[] = {
        {(char* const)"shimJavaThrowError", (char* const)"(ILjava/lang/String;)V", (void *)&shimJavaThrowError},
        {(char* const)"shimUnoViewReady", (char* const)"(JLjava/lang/Object;)V", (void *)&shimUnoViewReady},
        {(char* const)"shimUnoViewVisibilityChanged", (char* const)"(JZ)V", (void *)&shimUnoViewVisibilityChanged},

        {(char* const)"shimOnSurfaceTouch", (char* const)"(JIIII)V", (void *)&shimOnSurfaceTouch},
        {(char* const)"shimTimerCallback", (char* const)"(I)V", (void *)&shimTimerCallback},
        {(char* const)"shimOnKeyboardResized", (char* const)"(I)V", (void *)&shimOnKeyboardResized},
        {(char* const)"shimOnTextViewTextChanged", (char* const)"(JLjava/lang/String;)V", (void *)&shimOnTextViewTextChanged},
        {(char* const)"shimOnKeyUp", (char* const)"(I)V", (void *)&shimOnKeyUp},
        {(char* const)"shimOnKeyDown", (char* const)"(I)V", (void *)&shimOnKeyDown},

        {(char* const)"shimOnTextViewInputFinished", (char* const)"(J)V", (void *)&shimOnTextViewInputFinished},
        {(char* const)"shimUnoSurfaceCreated", (char* const)"(JLjava/lang/Object;)V", (void *)&shimUnoSurfaceCreated},
        {(char* const)"shimUnoSurfaceDestroyed", (char* const)"(J)V", (void *)&shimUnoSurfaceDestroyed},

        {(char* const)"cppOnCreate", (char* const)"(Z)V", (void *)&cppOnCreate},
        {(char* const)"cppOnDestroy", (char* const)"()V", (void *)&cppOnDestroy},
        {(char* const)"cppOnPause", (char* const)"()V", (void *)&cppOnPause},
        {(char* const)"cppOnResume", (char* const)"()V", (void *)&cppOnResume},
        {(char* const)"cppOnRestart", (char* const)"()V", (void *)&cppOnRestart},
        {(char* const)"cppOnStart", (char* const)"()V", (void *)&cppOnStart},
        {(char* const)"cppOnStop", (char* const)"()V", (void *)&cppOnStop},
        {(char* const)"cppOnSaveInstanceState", (char* const)"(Landroid/os/Bundle;)V", (void *)&cppOnSaveInstanceState},
        {(char* const)"cppOnConfigChanged", (char* const)"()V", (void *)&cppOnConfigChanged},
        {(char* const)"cppOnLowMemory", (char* const)"()V", (void *)&cppOnLowMemory},
        {(char* const)"cppOnWindowFocusChanged", (char* const)"(Z)V", (void *)&cppOnWindowFocusChanged},
        {(char* const)"cppTick", (char* const)"()V", (void *)&cppTick},
        {(char* const)"cppOnStartMainLoop", (char* const)"(ZZ)V", (void *)&cppOnStartMainLoop},
        {(char* const)"cppForceRedraw", (char* const)"()V", (void *)&cppForceRedraw},
        {(char* const)"cppForceRedrawUnsafe", (char* const)"()V", (void *)&cppForceRedrawUnsafe},
    };
    // the last argument is the number of native functions
    jint attached = jni->RegisterNatives(shimClass, native_funcs, 27);
    if (attached < 0) {
        LOGD("COULD NOT REGISTER NATIVE FUNCTIONS");
        XLI_THROW("COULD NOT REGISTER NATIVE FUNCTIONS");
    } else {
        LOGD("Native functions registered");
    }
}

static void uInitRuntime()
{
    static uRuntime runtime;
}

// This is the first point we have in the app lifecycle when we are in control
// At this point Xli has been loaded by the Activity.java file and, as specified by
// the JNI spec, when a library is loaded, if there is a JNI_OnLoad method, it will
// be called.
// We use this point to grab the shim class and attach all the lifecycle callbacks
jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    LOGD ("----------");
    LOGD ("Jni_OnLoad");

    // vm & shim
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        LOGD ("&&&&&&& GetEnv failed &&&&&&");
        return -1;
    }
    jclass shimClass = env->FindClass("com/Shim/XliJ");

    // systems
    Xli::CoreLib::Init();
    AApplication::Init();
    JniHelper::Init(vm, env, shimClass);

    // threading
    pthread_mutex_init(&EntryPoints::mutex, NULL);
    pthread_cond_init(&EntryPoints::cond, NULL);

    // java callbacks
    AttachNativeCallbacks(env, shimClass);

    // uno
    uInitRuntime();

    LOGD ("----------");
    return JNI_VERSION_1_6;
}
