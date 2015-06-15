#pragma once
#include "AndroidCommon.h"
#include <android/native_activity.h>
#include "android/native_window.h"
#include "android/native_window_jni.h"
#include <EGL/egl.h>
#include <Xli/Vector2.h>
#include "jni.h"

class GLHelper
{
public:
    static int _swapInterval;

    static EGLDisplay _eglDisplay;
    static EGLContext _eglContext;
    static EGLConfig _eglConfig;
    static EGLSurface _eglPBufferSurface;

    static void InitGL();
    static void DeInitGL();
    static void MakeCurrent(EGLSurface surface);
    static EGLSurface CreateNewSurfaceAndMakeCurrent(ANativeWindow* nativeWindow);
    static void SwapBackToPBufferSurface();
};
