// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Platform.KeyEventArgs.h>

namespace app {
namespace Uno {
namespace Platform {

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static KeyEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Uno.Platform.KeyEventArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool KeyEventArgs__get_Handled(KeyEventArgs* __this)
{
    return __this->_Handled;
}

void KeyEventArgs__set_Handled(KeyEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

int KeyEventArgs__get_Modifiers(KeyEventArgs* __this)
{
    return __this->_Modifiers;
}

void KeyEventArgs__set_Modifiers(KeyEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 1) == 1;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 2) == 2;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 4) == 4;
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 8) == 8;
}

void KeyEventArgs___ObjInit_1(KeyEventArgs* __this, int key, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Key(key);
    __this->Modifiers(modifiers);
}

KeyEventArgs* KeyEventArgs__New_2(::uStatic* __this, int key, int modifiers)
{
    KeyEventArgs* inst = (::app::Uno::Platform::KeyEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform::KeyEventArgs), ::app::Uno::Platform::KeyEventArgs__typeof());
    inst->_ObjInit_1(key, modifiers);
    return inst;
}

}}}
