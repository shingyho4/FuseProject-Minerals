#include "GLHelper.h"
#include <Xli.h>

int GLHelper::_swapInterval;
EGLConfig GLHelper::_eglConfig;
EGLDisplay GLHelper::_eglDisplay;
EGLContext GLHelper::_eglContext = EGL_NO_CONTEXT;
EGLSurface GLHelper::_eglPBufferSurface = EGL_NO_SURFACE;

void GLHelper::DeInitGL()
{
    LOGD("----DEINITGL----");
    eglMakeCurrent(_eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);

    if (_eglContext != EGL_NO_CONTEXT)
        eglDestroyContext(_eglDisplay, _eglContext);

    if (_eglPBufferSurface != EGL_NO_SURFACE)
        eglDestroySurface(_eglDisplay, _eglPBufferSurface);

    if (_eglDisplay != EGL_NO_DISPLAY)
        eglTerminate(_eglDisplay);

    GLHelper::_eglConfig = 0;
    GLHelper::_eglDisplay = 0;
    GLHelper::_eglContext = EGL_NO_CONTEXT;
    GLHelper::_eglPBufferSurface = EGL_NO_SURFACE;
    LOGD("---~DEINITGL~---");
}

void GLHelper::InitGL()
{
    LOGD("----INITGL----");
    const Xli::Vector4i& colorBits = Xli::Vector4i(8, 8, 8, 8);
    int depthBits = 24;
    int stencilBits = 8;
    int samples = 4;
    const Xli::Vector4i& accumBits = Xli::Vector4i(0, 0, 0, 0);
    int buffers = 2;
    bool stereo = false;

    _swapInterval = -1;
    _eglContext = EGL_NO_CONTEXT;

    _eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    eglInitialize(_eglDisplay, 0, 0);

    const EGLint iattribs[] =
        {
            EGL_RED_SIZE, 5,
            EGL_GREEN_SIZE, 6,
            EGL_BLUE_SIZE, 5,
            EGL_ALPHA_SIZE, 0,
            EGL_DEPTH_SIZE, 16,
            EGL_STENCIL_SIZE, 0,
            EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
            EGL_BIND_TO_TEXTURE_RGBA, EGL_TRUE,
            EGL_SURFACE_TYPE, EGL_PBUFFER_BIT | EGL_WINDOW_BIT,
            EGL_NONE
        };
    const EGLint iattribsFallback[] =
        {
            EGL_RED_SIZE, 5,
            EGL_GREEN_SIZE, 6,
            EGL_BLUE_SIZE, 5,
            EGL_ALPHA_SIZE, 0,
            EGL_DEPTH_SIZE, 16,
            EGL_STENCIL_SIZE, 0,
            EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
            EGL_SURFACE_TYPE, EGL_PBUFFER_BIT | EGL_WINDOW_BIT,
            EGL_NONE
        };

    EGLint numConfigs;
    EGLConfig configs[128];

    if (!eglChooseConfig(_eglDisplay, iattribs, configs, 128, &numConfigs) || numConfigs == 0)
    {
        if (!eglChooseConfig(_eglDisplay, iattribsFallback, configs, 128, &numConfigs) || numConfigs == 0)
        {
            XLI_THROW("Unable to choose EGL config");
        }
    }

    EGLint cs = 0, cd = 0, cb = 0;
    int cc = 0;

    for (int i = 0; i < numConfigs; i++)
    {
        EGLint samples, depth, stencil, buffer, r, g, b, a, render;
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_RED_SIZE, &r);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_GREEN_SIZE, &g);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_BLUE_SIZE, &b);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_ALPHA_SIZE, &a);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_BUFFER_SIZE, &buffer);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_DEPTH_SIZE, &depth);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_STENCIL_SIZE, &stencil);
        eglGetConfigAttrib(_eglDisplay, configs[i], EGL_SAMPLES, &samples);

#ifdef XLI_DEBUG
        Xli::Error->WriteLine(Xli::String::Format("DEBUG: EGLConfig[%d]:  M %d  D %d  S %d  B %d  R %d  G %d  B %d  A %d", i, samples, depth, stencil, buffer, r, g, b, a));
#endif

        if (samples >= cs && depth >= cd && buffer >= cb &&
            samples <= samples && r <= colorBits.R && g <= colorBits.G && b <= colorBits.B && a <= colorBits.A)
        {
            cs = samples;
            cd = depth;
            cb = buffer;
            cc = i;
        }
    }

    _eglConfig = configs[cc];

#ifdef XLI_DEBUG
    Xli::Error->WriteLine((Xli::String)"DEBUG: Selected EGLConfig[" + (int)cc + "]");
#endif


    const EGLint context_attribs[] =
        {
            EGL_CONTEXT_CLIENT_VERSION, 2,
            EGL_NONE
        };

    _eglContext = eglCreateContext(_eglDisplay, _eglConfig, EGL_NO_CONTEXT, context_attribs);

    if (_eglContext == EGL_NO_CONTEXT)
    {
        XLI_THROW("Unable to create EGL Context");
    }

    // create pbuffer surface, this allows us to upload resources and then switch to an
    // eglwindowsurface when the java Surface is ready
    EGLint pbufferAttribs[] =
        {
            EGL_WIDTH, 1,
            EGL_HEIGHT, 1,
            // EGL_MIPMAP_TEXTURE, EGL_TRUE,
            // EGL_TEXTURE_TARGET, EGL_TEXTURE_2D,
            // EGL_TEXTURE_FORMAT, EGL_TEXTURE_RGBA,
            EGL_NONE,
        };

    _eglPBufferSurface = eglCreatePbufferSurface(_eglDisplay, _eglConfig, pbufferAttribs);
    if (_eglPBufferSurface == EGL_FALSE)
    {
        Xli::Error->WriteLine((Xli::String)"Unable to make EGL pbuffer surface");
        XLI_THROW("Unable to make EGL pbuffer surface");
    }
    if (eglMakeCurrent(_eglDisplay, _eglPBufferSurface, _eglPBufferSurface, _eglContext) == EGL_FALSE)
    {
        Xli::Error->WriteLine((Xli::String)"Unable to make EGL context current");
        XLI_THROW("Unable to make EGL context current");
    }
    LOGD("---~INITGL~---");
}

void GLHelper::MakeCurrent(EGLSurface surface)
{
    //LOGD("----EGL MAKE CURRENT----");
    if (eglMakeCurrent(GLHelper::_eglDisplay, surface, surface, GLHelper::_eglContext) == EGL_FALSE)
    {
        XLI_THROW("Unable to make EGL context current");
    }
    //LOGD("---~EGL MAKE CURRENT~---");
}

void GLHelper::SwapBackToPBufferSurface()
{
    LOGD("----SWAP BACK TO PBUFFER----");
    if (!_eglPBufferSurface) {
        LOGD("PBuffer has somehow been destoryed (or was not created)");
    }
    MakeCurrent(_eglPBufferSurface);
    LOGD("---~SWAP BACK TO PBUFFER~---");
}

EGLSurface GLHelper::CreateNewSurfaceAndMakeCurrent(ANativeWindow* nativeWindow)
{
    LOGD("----NEW SURFACE AND MAKE CURRENT----");
    EGLint format;
    eglGetConfigAttrib(GLHelper::_eglDisplay, GLHelper::_eglConfig, EGL_NATIVE_VISUAL_ID, &format);
    ANativeWindow_setBuffersGeometry(nativeWindow, 0, 0, format);

    EGLSurface eglSurface = eglCreateWindowSurface(GLHelper::_eglDisplay, GLHelper::_eglConfig, nativeWindow, NULL);

    if (eglSurface == EGL_NO_SURFACE)
    {
        XLI_THROW("Unable to create EGL Surface");
    }

    MakeCurrent(eglSurface);

    LOGD("---~NEW SURFACE AND MAKE CURRENT~---");
    return eglSurface;
}
