// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Rect; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

extern bool PlatformWindowImpl__keyboardVisible;
extern ::app::Uno::Rect PlatformWindowImpl__keyboardFrame;

struct PlatformWindowImpl__uType : ::uClassType
{
};

PlatformWindowImpl__uType* PlatformWindowImpl__typeof();

::Xli::Window* PlatformWindowImpl__GetInstance(::uStatic* __this);
::app::Uno::Int2 PlatformWindowImpl__GetClientSize(::uStatic* __this, ::Xli::Window* handle);
void PlatformWindowImpl__SetClientSize(::uStatic* __this, ::Xli::Window* __handle, ::app::Uno::Int2 __clientSize);
bool PlatformWindowImpl__GetMouseButtonState(::uStatic* __this, ::Xli::Window* __handle, int __button);
bool PlatformWindowImpl__GetKeyState(::uStatic* __this, ::Xli::Window* __handle, int __key);
void PlatformWindowImpl__OnSoftKeyboardWillResize(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args);
bool PlatformWindowImpl__HasOnscreenKeyboardSupport(::uStatic* __this, ::Xli::Window* handle);
bool PlatformWindowImpl__IsOnscreenKeyboardVisible(::uStatic* __this, ::Xli::Window* handle);
::app::Uno::Int2 PlatformWindowImpl__GetOnscreenKeyboardSize(::uStatic* __this, ::Xli::Window* handle);
float PlatformWindowImpl__GetDensity(::uStatic* __this, ::Xli::Window* handle);
void PlatformWindowImpl___TypeInit(::uStatic* __this);

}}}}


#endif
