// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\Main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

/**
    \defgroup XliBootstrapper Bootstrapping
    \brief Application bootstrapping
    \ingroup Xli
*/

#include <Xli.h>
#include <XliGL.h>
#include <XliPlatform.h>
#ifdef XLI_PLATFORM_ANDROID
# include <XliPlatform/PlatformSpecific/Android.h>
#endif
#include <Uno/XliInterop.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Application.h>

/**
    \addtogroup XliBootstrapper
    @{
*/

Xli::Window* uStatic__Window;
Xli::GLContext* uStatic__GLContext;

void uStartApp();

class uApplication : public Xli::Application
{
    Xli::Managed<Xli::GLContext> _gl;

public:
    virtual Xli::String GetInitTitle()
    {
        return "MyMineral";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef XLI_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif

        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        uStatic__Window = wnd;
        uStatic__GLContext = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        uStartApp();
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnLoad(NULL);
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnUpdate(NULL);
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::app::Uno::Application__get_Current(NULL) && ::app::Uno::Application__get_Current(NULL)->DrawNextFrame())
            {
                ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnDraw(NULL);
                _gl->SwapBuffers();
            }
        }

#if U_DEBUG_MEM >= 3
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyDown(NULL, wnd, key))
            return true;

#ifdef XLI_PLATFORM_WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyboardResized(NULL, wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyUp(NULL, wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const Xli::String& text)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTextInput(NULL, wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseDown(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseUp(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, Xli::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseMove(NULL, wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, Xli::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseWheel(NULL, wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchDown(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchMove(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchUp(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowSizeChanged(NULL, wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO

        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowClosed(NULL, wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppLowMemory(NULL, wnd);
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppTerminating(NULL, wnd);
    }

    virtual void OnAppWillEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppWillEnterForeground(NULL, wnd);
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppDidEnterForeground(NULL, wnd);
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnGotFocus(NULL, wnd);
    }

    virtual void OnAppWillEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnLostFocus(NULL, wnd);
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppWillEnterBackground(NULL, wnd);
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnAppDidEnterBackground(NULL, wnd);
    }
};

int Main(const Xli::Array<Xli::String>& args)
{
    uRuntime uno;
    int flags = Xli::WindowFlagsResizeable;



    flags |= Xli::WindowFlagsDisablePowerSaver;







# ifdef XLI_PLATFORM_ANDROID
    Xli::PlatformSpecific::Android::SetLogTag("MyMineral");
# endif


    try
    {
        uApplication app;
        Xli::Application::Run(&app, flags);
    }
    catch (const uThrowable& t)
    {
        Xli::String str = "(null)";

        if (t.Exception && t.Exception->Message())
            str = uStringToXliString(t.Exception->Message());

        Xli::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;

        throw x;
    }

    return 0;
}

// Workaround to avoid that these methods get stripped on android
#ifdef XLI_PLATFORM_ANDROID
struct android_app;
extern "C" void android_main(struct android_app* app);
extern "C" int main(int argc, char* argv[]);
extern "C" void android_dummy() { android_main(NULL); main(0, NULL); }
#endif

/** @} */
