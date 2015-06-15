// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerPressed.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerPressed__uType* PointerPressed__typeof()
{
    static PointerPressed__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerPressed__uType*)::uAllocClassType(sizeof(PointerPressed__uType), "Fuse.Input.PointerPressed", ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerPressedArgs*))PointerPressed__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerPressed__Invoke(PointerPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerPressedArgs*>(sender, args);
}

void PointerPressed___ObjInit_1(PointerPressed* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(__this);
}

PointerPressed* PointerPressed__New_1(::uStatic* __this)
{
    PointerPressed* inst = (::app::Fuse::Input::PointerPressed*)::uAllocObject(sizeof(::app::Fuse::Input::PointerPressed), ::app::Fuse::Input::PointerPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
