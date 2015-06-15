// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.KeyReleased.h>
#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

KeyReleased__uType* KeyReleased__typeof()
{
    static KeyReleased__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyReleased__uType*)::uAllocClassType(sizeof(KeyReleased__uType), "Fuse.Input.KeyReleased", ::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*))KeyReleased__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void KeyReleased__Invoke(KeyReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*>(sender, args);
}

void KeyReleased___ObjInit_1(KeyReleased* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(__this);
}

KeyReleased* KeyReleased__New_1(::uStatic* __this)
{
    KeyReleased* inst = (::app::Fuse::Input::KeyReleased*)::uAllocObject(sizeof(::app::Fuse::Input::KeyReleased), ::app::Fuse::Input::KeyReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
