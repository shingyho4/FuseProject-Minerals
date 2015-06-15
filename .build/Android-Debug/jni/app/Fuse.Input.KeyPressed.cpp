// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.KeyPressed.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

KeyPressed__uType* KeyPressed__typeof()
{
    static KeyPressed__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyPressed__uType*)::uAllocClassType(sizeof(KeyPressed__uType), "Fuse.Input.KeyPressed", ::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyPressedArgs*))KeyPressed__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void KeyPressed__Invoke(KeyPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyPressedArgs*>(sender, args);
}

void KeyPressed___ObjInit_1(KeyPressed* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(__this);
}

KeyPressed* KeyPressed__New_1(::uStatic* __this)
{
    KeyPressed* inst = (::app::Fuse::Input::KeyPressed*)::uAllocObject(sizeof(::app::Fuse::Input::KeyPressed), ::app::Fuse::Input::KeyPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
