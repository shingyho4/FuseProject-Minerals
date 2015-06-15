// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_WINDOW_H__
#define __APP_UNO_PLATFORM_WINDOW_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Int2; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Platform {

struct Window;

struct Window__uType : ::uClassType
{
};

Window__uType* Window__typeof();

::app::Uno::Int2 Window__get_ClientSize(Window* __this);
void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value);
void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnKeyboardResized(Window* __this);
void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args);
void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppLowMemory(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppTerminating(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppEnteringBackground(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppEnteringForeground(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppEnteredBackground(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnAppEnteredForeground(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window___ObjInit(Window* __this);
Window* Window__New_1(::uStatic* __this);
void Window__add_PointerPressed(Window* __this, ::uDelegate* value);
void Window__add_PointerReleased(Window* __this, ::uDelegate* value);
void Window__add_PointerMoved(Window* __this, ::uDelegate* value);
void Window__add_PointerWheelChanged(Window* __this, ::uDelegate* value);
void Window__add_PointerLeft(Window* __this, ::uDelegate* value);
void Window__add_KeyPressed(Window* __this, ::uDelegate* value);
void Window__add_KeyReleased(Window* __this, ::uDelegate* value);
void Window__add_TextInput(Window* __this, ::uDelegate* value);
void Window__add_Resized(Window* __this, ::uDelegate* value);
void Window__add_AppEnteredForeground(Window* __this, ::uDelegate* value);
void Window__add_GotFocus(Window* __this, ::uDelegate* value);
void Window__add_LostFocus(Window* __this, ::uDelegate* value);

struct Window : ::uObject
{
    ::Xli::Window* _handle;
    bool _hasPointerEntered;
    ::uStrong< ::uDelegate*> Closed;
    ::uStrong< ::uDelegate*> PointerPressed;
    ::uStrong< ::uDelegate*> PointerReleased;
    ::uStrong< ::uDelegate*> PointerMoved;
    ::uStrong< ::uDelegate*> PointerWheelChanged;
    ::uStrong< ::uDelegate*> PointerLeft;
    ::uStrong< ::uDelegate*> PointerEntered;
    ::uStrong< ::uDelegate*> KeyPressed;
    ::uStrong< ::uDelegate*> KeyReleased;
    ::uStrong< ::uDelegate*> TextInput;
    ::uStrong< ::uDelegate*> KeyboardResized;
    ::uStrong< ::uDelegate*> Resized;
    ::uStrong< ::uDelegate*> Updating;
    ::uStrong< ::uDelegate*> AppLowMemory;
    ::uStrong< ::uDelegate*> AppTerminating;
    ::uStrong< ::uDelegate*> AppEnteringBackground;
    ::uStrong< ::uDelegate*> AppEnteredBackground;
    ::uStrong< ::uDelegate*> AppEnteringForeground;
    ::uStrong< ::uDelegate*> AppEnteredForeground;
    ::uStrong< ::uDelegate*> GotFocus;
    ::uStrong< ::uDelegate*> LostFocus;

    void OnPointerPressed(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerPressed(this, args); }
    void OnPointerReleased(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerReleased(this, args); }
    void OnPointerMoved(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerMoved(this, args); }
    void OnPointerEntered(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerEntered(this, args); }
    void OnPointerWheelChanged(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerWheelChanged(this, args); }
    void OnKeyboardResized() { Window__OnKeyboardResized(this); }
    void OnKeyPressed(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyPressed(this, args); }
    void OnKeyReleased(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyReleased(this, args); }
    void OnTextInput(::app::Uno::Platform::TextInputEventArgs* args) { Window__OnTextInput(this, args); }
    void OnResized(::app::Uno::EventArgs* args) { Window__OnResized(this, args); }
    void OnClosed(::app::Uno::EventArgs* args) { Window__OnClosed(this, args); }
    void OnUpdating(::app::Uno::EventArgs* args) { Window__OnUpdating(this, args); }
    void OnAppLowMemory(::app::Uno::EventArgs* args) { Window__OnAppLowMemory(this, args); }
    void OnAppTerminating(::app::Uno::EventArgs* args) { Window__OnAppTerminating(this, args); }
    void OnAppEnteringBackground(::app::Uno::EventArgs* args) { Window__OnAppEnteringBackground(this, args); }
    void OnAppEnteringForeground(::app::Uno::EventArgs* args) { Window__OnAppEnteringForeground(this, args); }
    void OnAppEnteredBackground(::app::Uno::EventArgs* args) { Window__OnAppEnteredBackground(this, args); }
    void OnAppEnteredForeground(::app::Uno::EventArgs* args) { Window__OnAppEnteredForeground(this, args); }
    void OnGotFocus(::app::Uno::EventArgs* args) { Window__OnGotFocus(this, args); }
    void OnLostFocus(::app::Uno::EventArgs* args) { Window__OnLostFocus(this, args); }
    void _ObjInit() { Window___ObjInit(this); }
    void add_PointerPressed(::uDelegate* value) { Window__add_PointerPressed(this, value); }
    void add_PointerReleased(::uDelegate* value) { Window__add_PointerReleased(this, value); }
    void add_PointerMoved(::uDelegate* value) { Window__add_PointerMoved(this, value); }
    void add_PointerWheelChanged(::uDelegate* value) { Window__add_PointerWheelChanged(this, value); }
    void add_PointerLeft(::uDelegate* value) { Window__add_PointerLeft(this, value); }
    void add_KeyPressed(::uDelegate* value) { Window__add_KeyPressed(this, value); }
    void add_KeyReleased(::uDelegate* value) { Window__add_KeyReleased(this, value); }
    void add_TextInput(::uDelegate* value) { Window__add_TextInput(this, value); }
    void add_Resized(::uDelegate* value) { Window__add_Resized(this, value); }
    void add_AppEnteredForeground(::uDelegate* value) { Window__add_AppEnteredForeground(this, value); }
    void add_GotFocus(::uDelegate* value) { Window__add_GotFocus(this, value); }
    void add_LostFocus(::uDelegate* value) { Window__add_LostFocus(this, value); }
    ::app::Uno::Int2 ClientSize();
    void ClientSize(::app::Uno::Int2 value);
};

}}}

#include <app/Uno.Int2.h>

namespace app {
namespace Uno {
namespace Platform {

inline ::app::Uno::Int2 Window::ClientSize() { return Window__get_ClientSize(this); }
inline void Window::ClientSize(::app::Uno::Int2 value) { Window__set_ClientSize(this, value); }

}}}


#endif
