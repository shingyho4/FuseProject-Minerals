// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEntered.h>
#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerEntered__uType* PointerEntered__typeof()
{
    static PointerEntered__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerEntered__uType*)::uAllocClassType(sizeof(PointerEntered__uType), "Fuse.Input.PointerEntered", ::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*))PointerEntered__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerEntered__Invoke(PointerEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*>(sender, args);
}

void PointerEntered___ObjInit_1(PointerEntered* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(__this);
}

PointerEntered* PointerEntered__New_1(::uStatic* __this)
{
    PointerEntered* inst = (::app::Fuse::Input::PointerEntered*)::uAllocObject(sizeof(::app::Fuse::Input::PointerEntered), ::app::Fuse::Input::PointerEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
