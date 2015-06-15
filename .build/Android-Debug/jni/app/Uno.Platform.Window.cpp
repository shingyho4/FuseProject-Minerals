// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>

namespace app {
namespace Uno {
namespace Platform {

Window__uType* Window__typeof()
{
    static Window__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Window__uType*)::uAllocClassType(sizeof(Window__uType), "Uno.Platform.Window", ::uObject__typeof(), 0, 21);
        type->StrongRefOffsets[0] = offsetof(Window, Closed);
        type->StrongRefOffsets[1] = offsetof(Window, PointerPressed);
        type->StrongRefOffsets[2] = offsetof(Window, PointerReleased);
        type->StrongRefOffsets[3] = offsetof(Window, PointerMoved);
        type->StrongRefOffsets[4] = offsetof(Window, PointerWheelChanged);
        type->StrongRefOffsets[5] = offsetof(Window, PointerLeft);
        type->StrongRefOffsets[6] = offsetof(Window, PointerEntered);
        type->StrongRefOffsets[7] = offsetof(Window, KeyPressed);
        type->StrongRefOffsets[8] = offsetof(Window, KeyReleased);
        type->StrongRefOffsets[9] = offsetof(Window, TextInput);
        type->StrongRefOffsets[10] = offsetof(Window, KeyboardResized);
        type->StrongRefOffsets[11] = offsetof(Window, Resized);
        type->StrongRefOffsets[12] = offsetof(Window, Updating);
        type->StrongRefOffsets[13] = offsetof(Window, AppLowMemory);
        type->StrongRefOffsets[14] = offsetof(Window, AppTerminating);
        type->StrongRefOffsets[15] = offsetof(Window, AppEnteringBackground);
        type->StrongRefOffsets[16] = offsetof(Window, AppEnteredBackground);
        type->StrongRefOffsets[17] = offsetof(Window, AppEnteringForeground);
        type->StrongRefOffsets[18] = offsetof(Window, AppEnteredForeground);
        type->StrongRefOffsets[19] = offsetof(Window, GotFocus);
        type->StrongRefOffsets[20] = offsetof(Window, LostFocus);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Closed";
        type->StrongRefNames[1] = "PointerPressed";
        type->StrongRefNames[2] = "PointerReleased";
        type->StrongRefNames[3] = "PointerMoved";
        type->StrongRefNames[4] = "PointerWheelChanged";
        type->StrongRefNames[5] = "PointerLeft";
        type->StrongRefNames[6] = "PointerEntered";
        type->StrongRefNames[7] = "KeyPressed";
        type->StrongRefNames[8] = "KeyReleased";
        type->StrongRefNames[9] = "TextInput";
        type->StrongRefNames[10] = "KeyboardResized";
        type->StrongRefNames[11] = "Resized";
        type->StrongRefNames[12] = "Updating";
        type->StrongRefNames[13] = "AppLowMemory";
        type->StrongRefNames[14] = "AppTerminating";
        type->StrongRefNames[15] = "AppEnteringBackground";
        type->StrongRefNames[16] = "AppEnteredBackground";
        type->StrongRefNames[17] = "AppEnteringForeground";
        type->StrongRefNames[18] = "AppEnteredForeground";
        type->StrongRefNames[19] = "GotFocus";
        type->StrongRefNames[20] = "LostFocus";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 Window__get_ClientSize(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetClientSize(NULL, __this->_handle);
}

void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetClientSize(NULL, __this->_handle, value);
}

void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (!__this->_hasPointerEntered)
    {
        __this->OnPointerEntered(args);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerMoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerMoved)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    __this->_hasPointerEntered = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerEntered, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerEntered)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerWheelChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerWheelChanged)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyboardResized(Window* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyboardResized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyboardResized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextInput, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextInput)->InvokeVoid< ::uObject*, ::app::Uno::Platform::TextInputEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Resized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Resized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Closed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Closed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Updating, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Updating)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppLowMemory(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppLowMemory, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppLowMemory)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppTerminating(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppTerminating, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppTerminating)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppEnteringBackground(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppEnteringBackground, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppEnteringBackground)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppEnteringForeground(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppEnteringForeground, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppEnteringForeground)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppEnteredBackground(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppEnteredBackground, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppEnteredBackground)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnAppEnteredForeground(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->AppEnteredForeground, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->AppEnteredForeground)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->GotFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->GotFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LostFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->LostFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window___ObjInit(Window* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetInstance(NULL);
}

Window* Window__New_1(::uStatic* __this)
{
    Window* inst = (::app::Uno::Platform::Window*)::uAllocObject(sizeof(::app::Uno::Platform::Window), ::app::Uno::Platform::Window__typeof());
    inst->_ObjInit();
    return inst;
}

void Window__add_PointerPressed(Window* __this, ::uDelegate* value)
{
    __this->PointerPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerReleased(Window* __this, ::uDelegate* value)
{
    __this->PointerReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerMoved(Window* __this, ::uDelegate* value)
{
    __this->PointerMoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerMoved, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerWheelChanged(Window* __this, ::uDelegate* value)
{
    __this->PointerWheelChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerWheelChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_PointerLeft(Window* __this, ::uDelegate* value)
{
    __this->PointerLeft = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PointerLeft, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof());
}

void Window__add_KeyPressed(Window* __this, ::uDelegate* value)
{
    __this->KeyPressed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->KeyPressed, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__add_KeyReleased(Window* __this, ::uDelegate* value)
{
    __this->KeyReleased = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->KeyReleased, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Window__add_TextInput(Window* __this, ::uDelegate* value)
{
    __this->TextInput = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextInput, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof());
}

void Window__add_Resized(Window* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_AppEnteredForeground(Window* __this, ::uDelegate* value)
{
    __this->AppEnteredForeground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->AppEnteredForeground, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_GotFocus(Window* __this, ::uDelegate* value)
{
    __this->GotFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->GotFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_LostFocus(Window* __this, ::uDelegate* value)
{
    __this->LostFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->LostFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
