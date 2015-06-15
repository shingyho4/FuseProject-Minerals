// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.KeyEventArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static KeyEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Fuse.Input.KeyEventArgs", ::app::Fuse::Input::InputEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsMetaKeyPressed;
}

void KeyEventArgs__set_IsMetaKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsMetaKeyPressed = value;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsControlKeyPressed;
}

void KeyEventArgs__set_IsControlKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsControlKeyPressed = value;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsShiftKeyPressed;
}

void KeyEventArgs__set_IsShiftKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsShiftKeyPressed = value;
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsAltKeyPressed;
}

void KeyEventArgs__set_IsAltKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsAltKeyPressed = value;
}

void KeyEventArgs___ObjInit_2(KeyEventArgs* __this, int key, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::InputEventArgs___ObjInit_1(__this, node);
    __this->Key(key);
}

}}}
