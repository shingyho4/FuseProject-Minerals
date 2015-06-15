// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusGained.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

FocusGained__uType* FocusGained__typeof()
{
    static FocusGained__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FocusGained__uType*)::uAllocClassType(sizeof(FocusGained__uType), "Fuse.Input.FocusGained", ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*))FocusGained__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FocusGained__Invoke(FocusGained* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusGainedArgs*>(sender, args);
}

void FocusGained___ObjInit_1(FocusGained* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(__this);
}

FocusGained* FocusGained__New_1(::uStatic* __this)
{
    FocusGained* inst = (::app::Fuse::Input::FocusGained*)::uAllocObject(sizeof(::app::Fuse::Input::FocusGained), ::app::Fuse::Input::FocusGained__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
