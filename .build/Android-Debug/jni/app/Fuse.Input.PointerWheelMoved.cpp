// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerWheelMoved.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerWheelMoved__uType* PointerWheelMoved__typeof()
{
    static PointerWheelMoved__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerWheelMoved__uType*)::uAllocClassType(sizeof(PointerWheelMoved__uType), "Fuse.Input.PointerWheelMoved", ::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*))PointerWheelMoved__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PointerWheelMoved__Invoke(PointerWheelMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerWheelMovedArgs*>(sender, args);
}

void PointerWheelMoved___ObjInit_1(PointerWheelMoved* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(__this);
}

PointerWheelMoved* PointerWheelMoved__New_1(::uStatic* __this)
{
    PointerWheelMoved* inst = (::app::Fuse::Input::PointerWheelMoved*)::uAllocObject(sizeof(::app::Fuse::Input::PointerWheelMoved), ::app::Fuse::Input::PointerWheelMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
