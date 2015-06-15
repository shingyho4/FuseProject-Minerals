// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerReleased.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerReleased__uType* PointerReleased__typeof()
{
    static PointerReleased__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerReleased__uType*)::uAllocClassType(sizeof(PointerReleased__uType), "Fuse.Input.PointerReleased", ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*))PointerReleased__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerReleased__Invoke(PointerReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*>(sender, args);
}

void PointerReleased___ObjInit_1(PointerReleased* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(__this);
}

PointerReleased* PointerReleased__New_1(::uStatic* __this)
{
    PointerReleased* inst = (::app::Fuse::Input::PointerReleased*)::uAllocObject(sizeof(::app::Fuse::Input::PointerReleased), ::app::Fuse::Input::PointerReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
