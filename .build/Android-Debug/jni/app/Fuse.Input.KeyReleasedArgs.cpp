// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

KeyReleasedArgs__uType* KeyReleasedArgs__typeof()
{
    static KeyReleasedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyReleasedArgs__uType*)::uAllocClassType(sizeof(KeyReleasedArgs__uType), "Fuse.Input.KeyReleasedArgs", ::app::Fuse::Input::KeyEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void KeyReleasedArgs___ObjInit_3(KeyReleasedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyReleasedArgs* KeyReleasedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyReleasedArgs* inst = (::app::Fuse::Input::KeyReleasedArgs*)::uAllocObject(sizeof(::app::Fuse::Input::KeyReleasedArgs), ::app::Fuse::Input::KeyReleasedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

}}}
