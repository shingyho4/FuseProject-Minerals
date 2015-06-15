// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WINDOW_VIEWPORT_H__
#define __APP_FUSE_INTERNAL_WINDOW_VIEWPORT_H__

#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.IWindow.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { namespace Internal { struct WindowCamera; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct WindowViewport;

struct WindowViewport__uType : ::uClassType
{
    ::app::Fuse::INodeParent __interface_0;
    ::app::Fuse::IWindow __interface_1;
    ::app::Fuse::IResourceParent __interface_2;
};

WindowViewport__uType* WindowViewport__typeof();

bool WindowViewport__Fuse_INodeParent_get_IsRooted(WindowViewport* __this);
::uObject* WindowViewport__Fuse_INodeParent_get_Window(WindowViewport* __this);
::app::Fuse::Node* WindowViewport__get_RootNode(WindowViewport* __this);
void WindowViewport__set_RootNode(WindowViewport* __this, ::app::Fuse::Node* value);
float WindowViewport__get_Density(WindowViewport* __this);
float WindowViewport__get_PPIZoomMultiplier(WindowViewport* __this);
::app::Uno::Float2 WindowViewport__Fuse_IWindow_get_Size(WindowViewport* __this);
bool WindowViewport__get_IsOnscreenKeyboardVisible(WindowViewport* __this);
::app::Uno::Float2 WindowViewport__get_OnscreenKeyboardSize(WindowViewport* __this);
::uObject* WindowViewport__Fuse_IResourceParent_GetResource(WindowViewport* __this, ::uString* key, ::uDelegate* acceptor);
void WindowViewport__Fuse_IResourceParent_ApplyStyle(WindowViewport* __this, ::uObject* target);
::app::Uno::Float2 WindowViewport__Fuse_INodeParent_WindowToLocal(WindowViewport* __this, ::app::Uno::Float2 windowCoord);
::app::Fuse::Input::PointerEventData* WindowViewport__TranslatePointerEvent(WindowViewport* __this, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnPointerPressed(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnPointerReleased(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnPointerMoved(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnPointerWheelChanged(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnPointerLeft(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args);
void WindowViewport__OnKeyPressed(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void WindowViewport__OnKeyReleased(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void WindowViewport__OnTextInput(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::TextInputEventArgs* args);
void WindowViewport__OnGotFocus(WindowViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WindowViewport__OnLostFocus(WindowViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WindowViewport__Draw(WindowViewport* __this, ::app::Fuse::DrawContext* dc);
void WindowViewport___ObjInit(WindowViewport* __this, ::uObject* parent, ::app::Uno::Platform::Window* window);
WindowViewport* WindowViewport__New_1(::uStatic* __this, ::uObject* parent, ::app::Uno::Platform::Window* window);

struct WindowViewport : ::uObject
{
    ::uStrong< ::uObject*> Parent;
    ::uStrong< ::app::Uno::Platform::Window*> Window;
    ::uStrong< ::app::Fuse::Internal::WindowCamera*> _camera;
    ::uStrong< ::app::Fuse::Node*> _root;
    float _windowDensity;
    float _windowPPIZoomMultiplier;

    ::app::Fuse::Input::PointerEventData* TranslatePointerEvent(::app::Uno::Platform::PointerEventArgs* args) { return WindowViewport__TranslatePointerEvent(this, args); }
    void OnPointerPressed(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { WindowViewport__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { WindowViewport__OnPointerReleased(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { WindowViewport__OnPointerMoved(this, sender, args); }
    void OnPointerWheelChanged(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { WindowViewport__OnPointerWheelChanged(this, sender, args); }
    void OnPointerLeft(::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args) { WindowViewport__OnPointerLeft(this, sender, args); }
    void OnKeyPressed(::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args) { WindowViewport__OnKeyPressed(this, sender, args); }
    void OnKeyReleased(::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args) { WindowViewport__OnKeyReleased(this, sender, args); }
    void OnTextInput(::uObject* sender, ::app::Uno::Platform::TextInputEventArgs* args) { WindowViewport__OnTextInput(this, sender, args); }
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WindowViewport__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { WindowViewport__OnLostFocus(this, sender, args); }
    void Draw(::app::Fuse::DrawContext* dc) { WindowViewport__Draw(this, dc); }
    void _ObjInit(::uObject* parent, ::app::Uno::Platform::Window* window) { WindowViewport___ObjInit(this, parent, window); }
    ::app::Fuse::Node* RootNode() { return WindowViewport__get_RootNode(this); }
    void RootNode(::app::Fuse::Node* value) { WindowViewport__set_RootNode(this, value); }
    float Density() { return WindowViewport__get_Density(this); }
    float PPIZoomMultiplier() { return WindowViewport__get_PPIZoomMultiplier(this); }
    bool IsOnscreenKeyboardVisible() { return WindowViewport__get_IsOnscreenKeyboardVisible(this); }
    ::app::Uno::Float2 OnscreenKeyboardSize();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 WindowViewport::OnscreenKeyboardSize() { return WindowViewport__get_OnscreenKeyboardSize(this); }

}}}


#endif
