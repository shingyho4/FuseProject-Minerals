// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

int Bootstrapper___lastMouseX;
int Bootstrapper___lastMouseY;
int Bootstrapper___lastPrimaryFingerId;
int Bootstrapper___fingerCount;
double Bootstrapper___startTime;
double Bootstrapper___lastTime;

Bootstrapper__uType* Bootstrapper__typeof()
{
    static Bootstrapper__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Bootstrapper__uType*)::uAllocClassType(sizeof(Bootstrapper__uType), "Uno.Runtime.Implementation.Internal.Bootstrapper");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Bootstrapper__IsPrimaryFinger(::uStatic* __this, ::Xli::Window* handle, int fingerId)
{
    return (Bootstrapper___lastPrimaryFingerId == fingerId) && true;
}

int Bootstrapper__GetEventModifiers(::uStatic* __this, ::Xli::Window* handle)
{
    return ((((((::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 17) ? 2 : 0) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 16) ? 4 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 18) ? 8 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 203) ? 1 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 1) ? 16 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 2) ? 32 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 3) ? 64 : 0);
}

::app::Uno::Float2 Bootstrapper__GetPointerScale(::uStatic* __this)
{
    {
        return ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    }
}

void Bootstrapper__OnLoad(::uStatic* __this)
{
    Bootstrapper___lastPrimaryFingerId = -1;
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Application*>(app)->Load();
    double currentTime = ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
    Bootstrapper___startTime = currentTime;
    Bootstrapper___lastTime = currentTime;
}

void Bootstrapper__OnUpdate(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    double currentTime = ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
    double frameTime = currentTime - Bootstrapper___startTime;
    double frameInterval = currentTime - Bootstrapper___lastTime;
    Bootstrapper___lastTime = currentTime;
    ::uPtr< ::app::Uno::Application*>(app)->FrameInterval(frameInterval);
    app->FrameTime(frameTime);
    ::uPtr< ::app::Uno::Platform::Window*>(app->Window())->OnUpdating(::app::Uno::EventArgs__Empty);
    app->Update();
}

void Bootstrapper__OnDraw(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Graphics::GraphicsContext* gc = ::uPtr< ::app::Uno::Application*>(app)->GraphicsContext();
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->SetRenderTarget(::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->Backbuffer());
    gc->Clear(app->ClearColor(), app->ClearDepth());
    app->Draw();
}

bool Bootstrapper__OnKeyDown(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyPressed(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnKeyboardResized(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyboardResized();
    return true;
}

bool Bootstrapper__OnKeyUp(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyReleased(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTextInput(::uStatic* __this, ::Xli::Window* handle, ::uString* text)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::TextInputEventArgs* args = ::app::Uno::Platform::TextInputEventArgs__New_2(NULL, text, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnTextInput(args);
    return ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseDown(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseUp(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseMove(::uStatic* __this, ::Xli::Window* handle, int x, int y)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    int modifiers = Bootstrapper__GetEventModifiers(NULL, handle);
    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, modifiers, (modifiers & 16) == 16, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    Bootstrapper___lastMouseX = x;
    Bootstrapper___lastMouseY = y;
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseWheel(::uStatic* __this, ::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), false, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)Bootstrapper___lastMouseX, (float)Bootstrapper___lastMouseY), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, dHori, dVert), wheelDeltaMode);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerWheelChanged(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchDown(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount++;

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchMove(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchUp(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount--;

    if (Bootstrapper___lastPrimaryFingerId == id)
    {
        Bootstrapper___lastPrimaryFingerId = -1;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

void Bootstrapper__OnWindowSizeChanged(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(app)->GraphicsContext())->UpdateBackbuffer();
        ::uPtr< ::app::Uno::Platform::Window*>(app->Window())->OnResized(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnWindowClosed(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnClosed(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppLowMemory(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppLowMemory(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppWillEnterBackground(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppEnteringBackground(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppWillEnterForeground(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppEnteringForeground(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppDidEnterBackground(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppEnteredBackground(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppDidEnterForeground(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppEnteredForeground(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnAppTerminating(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnAppTerminating(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnGotFocus(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnGotFocus(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnLostFocus(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnLostFocus(::app::Uno::EventArgs__Empty);
    }
}

}}}}}
