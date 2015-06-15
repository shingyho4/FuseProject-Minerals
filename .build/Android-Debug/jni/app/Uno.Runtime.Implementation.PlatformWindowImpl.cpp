// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno/XliInterop.h>
#include <XliPlatform/Display.h>
extern ::Xli::Window* uStatic__Window;

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

bool PlatformWindowImpl__keyboardVisible;
::app::Uno::Rect PlatformWindowImpl__keyboardFrame;

PlatformWindowImpl__uType* PlatformWindowImpl__typeof()
{
    static PlatformWindowImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PlatformWindowImpl__uType*)::uAllocClassType(sizeof(PlatformWindowImpl__uType), "Uno.Runtime.Implementation.PlatformWindowImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::Xli::Window* PlatformWindowImpl__GetInstance(::uStatic* __this)
{
    return uStatic__Window;
}

::app::Uno::Int2 PlatformWindowImpl__GetClientSize(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Float2 size = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Frame().Size();
    return ::app::Uno::Int2__New_2(NULL, (int)size.X, (int)size.Y);
}

void PlatformWindowImpl__SetClientSize(::uStatic* __this, ::Xli::Window* __handle, ::app::Uno::Int2 __clientSize)
{
    __handle->SetClientSize(::uInt2ToXliVector2i(__clientSize));
}

bool PlatformWindowImpl__GetMouseButtonState(::uStatic* __this, ::Xli::Window* __handle, int __button)
{
    return __handle->GetMouseButtonState((Xli::MouseButton)__button);
}

bool PlatformWindowImpl__GetKeyState(::uStatic* __this, ::Xli::Window* __handle, int __key)
{
    return __handle->GetKeyState((Xli::Key)__key);
}

void PlatformWindowImpl__OnSoftKeyboardWillResize(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl__keyboardVisible = ::uPtr< ::app::Uno::Platform2::SystemUIWillResizeEventArgs*>(args)->ResizeReason() != 2;
    PlatformWindowImpl__keyboardFrame = args->EndFrame();
}

bool PlatformWindowImpl__HasOnscreenKeyboardSupport(::uStatic* __this, ::Xli::Window* handle)
{
    return true;
}

bool PlatformWindowImpl__IsOnscreenKeyboardVisible(::uStatic* __this, ::Xli::Window* handle)
{
    {
        return PlatformWindowImpl__keyboardFrame.Size().Y > 0.0f;
    }

    return false;
}

::app::Uno::Int2 PlatformWindowImpl__GetOnscreenKeyboardSize(::uStatic* __this, ::Xli::Window* handle)
{
    {
        return ::app::Uno::Int2__New_2(NULL, (int)PlatformWindowImpl__keyboardFrame.Size().X, (int)PlatformWindowImpl__keyboardFrame.Size().Y);
    }

    return ::app::Uno::Int2__New_2(NULL, 0, 0);
}

float PlatformWindowImpl__GetDensity(::uStatic* __this, ::Xli::Window* handle)
{
    return ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Density();
}

void PlatformWindowImpl___TypeInit(::uStatic* __this)
{
    ::app::Uno::Platform2::SystemUI__add_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof(), (const void*)::app::Uno::Runtime::Implementation::PlatformWindowImpl__OnSoftKeyboardWillResize));
}

}}}}
