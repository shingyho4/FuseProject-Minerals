// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerLeft.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerLeft__uType* PointerLeft__typeof()
{
    static PointerLeft__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerLeft__uType*)::uAllocClassType(sizeof(PointerLeft__uType), "Fuse.Input.PointerLeft", ::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerLeftArgs*))PointerLeft__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerLeft__Invoke(PointerLeft* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerLeftArgs*>(sender, args);
}

void PointerLeft___ObjInit_1(PointerLeft* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(__this);
}

PointerLeft* PointerLeft__New_1(::uStatic* __this)
{
    PointerLeft* inst = (::app::Fuse::Input::PointerLeft*)::uAllocObject(sizeof(::app::Fuse::Input::PointerLeft), ::app::Fuse::Input::PointerLeft__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
