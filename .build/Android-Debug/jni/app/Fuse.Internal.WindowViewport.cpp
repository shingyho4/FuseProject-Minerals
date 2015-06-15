// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.WindowCamera.h>
#include <app/Fuse.Internal.WindowViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Application.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

WindowViewport__uType* WindowViewport__typeof()
{
    static WindowViewport__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WindowViewport__uType*)::uAllocClassType(sizeof(WindowViewport__uType), "Fuse.Internal.WindowViewport", ::uObject__typeof(), 3, 4);
        type->__interface_2.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))WindowViewport__Fuse_IResourceParent_GetResource;
        type->__interface_2.__fp_ApplyStyle = (void(*)(void*, ::uObject*))WindowViewport__Fuse_IResourceParent_ApplyStyle;
        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))WindowViewport__Fuse_INodeParent_WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))WindowViewport__Fuse_INodeParent_get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))WindowViewport__Fuse_INodeParent_get_Window;
        type->__interface_1.__fp_get_Size = (::app::Uno::Float2(*)(void*))WindowViewport__Fuse_IWindow_get_Size;
        type->__interface_1.__fp_get_Density = (float(*)(void*))WindowViewport__get_Density;
        type->__interface_1.__fp_get_PPIZoomMultiplier = (float(*)(void*))WindowViewport__get_PPIZoomMultiplier;
        type->__interface_1.__fp_get_IsOnscreenKeyboardVisible = (bool(*)(void*))WindowViewport__get_IsOnscreenKeyboardVisible;
        type->__interface_1.__fp_get_OnscreenKeyboardSize = (::app::Uno::Float2(*)(void*))WindowViewport__get_OnscreenKeyboardSize;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IWindow__typeof();
        type->Implements[2] = ::app::Fuse::IResourceParent__typeof();

        type->InterfaceOffsets[0] = offsetof(WindowViewport__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(WindowViewport__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(WindowViewport__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(WindowViewport, Parent);
        type->StrongRefOffsets[1] = offsetof(WindowViewport, Window);
        type->StrongRefOffsets[2] = offsetof(WindowViewport, _camera);
        type->StrongRefOffsets[3] = offsetof(WindowViewport, _root);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Parent";
        type->StrongRefNames[1] = "Window";
        type->StrongRefNames[2] = "_camera";
        type->StrongRefNames[3] = "_root";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WindowViewport__Fuse_INodeParent_get_IsRooted(WindowViewport* __this)
{
    return true;
}

::uObject* WindowViewport__Fuse_INodeParent_get_Window(WindowViewport* __this)
{
    return (::uObject*)__this;
}

::app::Fuse::Node* WindowViewport__get_RootNode(WindowViewport* __this)
{
    return __this->_root;
}

void WindowViewport__set_RootNode(WindowViewport* __this, ::app::Fuse::Node* value)
{
    if (__this->_root != value)
    {
        if (__this->_root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_root)->OnRemoved((::uObject*)__this);
        }

        __this->_root = value;

        if (__this->_root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_root)->OnAdded((::uObject*)__this);
        }
    }
}

float WindowViewport__get_Density(WindowViewport* __this)
{
    return __this->_windowDensity;
}

float WindowViewport__get_PPIZoomMultiplier(WindowViewport* __this)
{
    return __this->_windowDensity * __this->_windowPPIZoomMultiplier;
}

::app::Uno::Float2 WindowViewport__Fuse_IWindow_get_Size(WindowViewport* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->ClientSize().X, (float)::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->ClientSize().Y), __this->PPIZoomMultiplier());
}

bool WindowViewport__get_IsOnscreenKeyboardVisible(WindowViewport* __this)
{
    ::Xli::Window* wnd = ::app::Uno::Runtime::Implementation::Internal::WindowHelpers__GetPlatformWindowHandle(NULL, ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window());
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__HasOnscreenKeyboardSupport(NULL, wnd) && ::app::Uno::Runtime::Implementation::PlatformWindowImpl__IsOnscreenKeyboardVisible(NULL, wnd);
}

::app::Uno::Float2 WindowViewport__get_OnscreenKeyboardSize(WindowViewport* __this)
{
    ::Xli::Window* wnd = ::app::Uno::Runtime::Implementation::Internal::WindowHelpers__GetPlatformWindowHandle(NULL, ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window());

    if (::app::Uno::Runtime::Implementation::PlatformWindowImpl__HasOnscreenKeyboardSupport(NULL, wnd) && ::app::Uno::Runtime::Implementation::PlatformWindowImpl__IsOnscreenKeyboardVisible(NULL, wnd))
    {
        ::app::Uno::Int2 pixels = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetOnscreenKeyboardSize(NULL, wnd);
        return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixels.X, (float)pixels.Y), __this->PPIZoomMultiplier());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::uObject* WindowViewport__Fuse_IResourceParent_GetResource(WindowViewport* __this, ::uString* key, ::uDelegate* acceptor)
{
    return ::app::Fuse::IResourceParent::GetResource(::uPtr< ::uObject*>(__this->Parent), key, acceptor);
}

void WindowViewport__Fuse_IResourceParent_ApplyStyle(WindowViewport* __this, ::uObject* target)
{
    ::app::Fuse::IResourceParent::ApplyStyle(::uPtr< ::uObject*>(__this->Parent), target);
}

::app::Uno::Float2 WindowViewport__Fuse_INodeParent_WindowToLocal(WindowViewport* __this, ::app::Uno::Float2 windowCoord)
{
    return windowCoord;
}

::app::Fuse::Input::PointerEventData* WindowViewport__TranslatePointerEvent(WindowViewport* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    ::app::Fuse::Input::PointerEventData* collection_124;
    collection_124 = ::app::Fuse::Input::PointerEventData__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_124)->PointIndex = ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->FingerId();
    collection_124->WindowPoint = ::app::Uno::Float2__op_Division_1(NULL, args->Position(), __this->PPIZoomMultiplier());
    collection_124->WheelDelta = args->WheelDelta();
    collection_124->WheelDeltaMode = args->WheelDeltaMode();
    collection_124->IsPrimary = args->IsPrimary();
    collection_124->PointerType = args->PointerType();
    return collection_124;
}

void WindowViewport__OnPointerPressed(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::app::Fuse::Input::Pointer__RaisePressed(NULL, __this->RootNode(), __this->TranslatePointerEvent(args)));
    }
}

void WindowViewport__OnPointerReleased(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::app::Fuse::Input::Pointer__RaiseReleased(NULL, __this->RootNode(), __this->TranslatePointerEvent(args)));
    }
}

void WindowViewport__OnPointerMoved(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::app::Fuse::Input::Pointer__RaiseMoved(NULL, __this->RootNode(), __this->TranslatePointerEvent(args)));
    }
}

void WindowViewport__OnPointerWheelChanged(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::app::Fuse::Input::Pointer__RaiseWheelMoved(NULL, __this->RootNode(), __this->TranslatePointerEvent(args)));
    }
}

void WindowViewport__OnPointerLeft(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::app::Fuse::Input::Pointer__RaiseLeft(NULL, __this->RootNode(), __this->TranslatePointerEvent(args));
    }
}

void WindowViewport__OnKeyPressed(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (!::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled() && (::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key() == 9))
    {
        ::app::Fuse::Input::Focus__Move(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed() ? 0 : 1);
    }

    if (__this->RootNode() != NULL)
    {
        ::app::Fuse::Input::Keyboard__RaiseKeyPressed(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsMetaKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsControlKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsAltKeyPressed());
    }
}

void WindowViewport__OnKeyReleased(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (__this->RootNode() != NULL)
    {
        ::app::Fuse::Input::Keyboard__RaiseKeyReleased(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsMetaKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsControlKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsAltKeyPressed());
    }
}

void WindowViewport__OnTextInput(WindowViewport* __this, ::uObject* sender, ::app::Uno::Platform::TextInputEventArgs* args)
{
    ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Handled(::app::Fuse::Input::TextService__RaiseTextEntered(NULL, ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Text()));
}

void WindowViewport__OnGotFocus(WindowViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Input::Focus__OnWindowGotFocus(NULL, sender, args);
}

void WindowViewport__OnLostFocus(WindowViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Input::Focus__OnWindowLostFocus(NULL, sender, args);
}

void WindowViewport__Draw(WindowViewport* __this, ::app::Fuse::DrawContext* dc)
{
    ::uObject* oc = ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushCamera((::uObject*)__this->_camera);

    if (__this->_root != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_root)->Draw(dc);
    }

    dc->PopCamera(oc);
}

void WindowViewport___ObjInit(WindowViewport* __this, ::uObject* parent, ::app::Uno::Platform::Window* window)
{
    __this->_windowPPIZoomMultiplier = 1.0f;
    __this->Parent = parent;
    __this->Window = window;
    __this->_camera = ::app::Fuse::Internal::WindowCamera__New_1(NULL);
    ::uPtr< ::app::Fuse::Internal::WindowCamera*>(__this->_camera)->Window = (::uObject*)__this;
    ::Xli::Window* wnd = ::app::Uno::Runtime::Implementation::Internal::WindowHelpers__GetPlatformWindowHandle(NULL, ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window());
    __this->_windowDensity = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetDensity(NULL, wnd);
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerPressed(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnPointerPressed, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerReleased(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnPointerReleased, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerMoved(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnPointerMoved, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerWheelChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnPointerWheelChanged, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_KeyPressed(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnKeyPressed, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_KeyReleased(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnKeyReleased, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_TextInput(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnTextInput, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerLeft(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnPointerLeft, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_GotFocus(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnGotFocus, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_LostFocus(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Internal::WindowViewport__OnLostFocus, __this));
}

WindowViewport* WindowViewport__New_1(::uStatic* __this, ::uObject* parent, ::app::Uno::Platform::Window* window)
{
    WindowViewport* inst = (::app::Fuse::Internal::WindowViewport*)::uAllocObject(sizeof(::app::Fuse::Internal::WindowViewport), ::app::Fuse::Internal::WindowViewport__typeof());
    inst->_ObjInit(parent, window);
    return inst;
}

}}}
