// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

KeyPressedArgs__uType* KeyPressedArgs__typeof()
{
    static KeyPressedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyPressedArgs__uType*)::uAllocClassType(sizeof(KeyPressedArgs__uType), "Fuse.Input.KeyPressedArgs", ::app::Fuse::Input::KeyEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void KeyPressedArgs___ObjInit_3(KeyPressedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyPressedArgs* KeyPressedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyPressedArgs* inst = (::app::Fuse::Input::KeyPressedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::KeyPressedArgs), ::app::Fuse::Input::KeyPressedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

}}}
