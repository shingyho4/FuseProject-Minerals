// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerMoved.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerMoved__uType* PointerMoved__typeof()
{
    static PointerMoved__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerMoved__uType*)::uAllocClassType(sizeof(PointerMoved__uType), "Fuse.Input.PointerMoved", ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerMovedArgs*))PointerMoved__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerMoved__Invoke(PointerMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerMovedArgs*>(sender, args);
}

void PointerMoved___ObjInit_1(PointerMoved* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(__this);
}

PointerMoved* PointerMoved__New_1(::uStatic* __this)
{
    PointerMoved* inst = (::app::Fuse::Input::PointerMoved*)::uAllocObject(sizeof(::app::Fuse::Input::PointerMoved), ::app::Fuse::Input::PointerMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
