// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform.PointerEventArgs.h>

namespace app {
namespace Uno {
namespace Platform {

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static PointerEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Uno.Platform.PointerEventArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool PointerEventArgs__get_Handled(PointerEventArgs* __this)
{
    return __this->_Handled;
}

void PointerEventArgs__set_Handled(PointerEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return __this->_PointerType;
}

void PointerEventArgs__set_PointerType(PointerEventArgs* __this, int value)
{
    __this->_PointerType = value;
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return __this->_IsPrimary;
}

void PointerEventArgs__set_IsPrimary(PointerEventArgs* __this, bool value)
{
    __this->_IsPrimary = value;
}

::app::Uno::Float2 PointerEventArgs__get_Position(PointerEventArgs* __this)
{
    return __this->_Position;
}

void PointerEventArgs__set_Position(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

int PointerEventArgs__get_FingerId(PointerEventArgs* __this)
{
    return __this->_FingerId;
}

void PointerEventArgs__set_FingerId(PointerEventArgs* __this, int value)
{
    __this->_FingerId = value;
}

int PointerEventArgs__get_MouseButton(PointerEventArgs* __this)
{
    return __this->_MouseButton;
}

void PointerEventArgs__set_MouseButton(PointerEventArgs* __this, int value)
{
    __this->_MouseButton = value;
}

::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this)
{
    return __this->_WheelDelta;
}

void PointerEventArgs__set_WheelDelta(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_WheelDelta = value;
}

int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this)
{
    return __this->_WheelDeltaMode;
}

void PointerEventArgs__set_WheelDeltaMode(PointerEventArgs* __this, int value)
{
    __this->_WheelDeltaMode = value;
}

int PointerEventArgs__get_Modifiers(PointerEventArgs* __this)
{
    return __this->_Modifiers;
}

void PointerEventArgs__set_Modifiers(PointerEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void PointerEventArgs___ObjInit_1(PointerEventArgs* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->PointerType(type);
    __this->Modifiers(modifiers);
    __this->IsPrimary(primary);
    __this->Position(position);
    __this->FingerId(fingerId);
    __this->MouseButton(mouseButton);
    __this->WheelDelta(wheelDelta);
    __this->WheelDeltaMode(wheelDeltaMode);
}

PointerEventArgs* PointerEventArgs__New_2(::uStatic* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    PointerEventArgs* inst = (::app::Uno::Platform::PointerEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform::PointerEventArgs), ::app::Uno::Platform::PointerEventArgs__typeof());
    inst->_ObjInit_1(type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode);
    return inst;
}

}}}
