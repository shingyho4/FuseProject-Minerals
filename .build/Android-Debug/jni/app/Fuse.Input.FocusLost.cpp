// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusLost.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

FocusLost__uType* FocusLost__typeof()
{
    static FocusLost__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FocusLost__uType*)::uAllocClassType(sizeof(FocusLost__uType), "Fuse.Input.FocusLost", ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusLostArgs*))FocusLost__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FocusLost__Invoke(FocusLost* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusLostArgs*>(sender, args);
}

void FocusLost___ObjInit_1(FocusLost* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(__this);
}

FocusLost* FocusLost__New_1(::uStatic* __this)
{
    FocusLost* inst = (::app::Fuse::Input::FocusLost*)::uAllocObject(sizeof(::app::Fuse::Input::FocusLost), ::app::Fuse::Input::FocusLost__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
