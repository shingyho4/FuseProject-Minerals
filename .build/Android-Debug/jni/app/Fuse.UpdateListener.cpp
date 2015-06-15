// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.UpdateListener.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

UpdateListener__uType* UpdateListener__typeof()
{
    static UpdateListener__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UpdateListener__uType*)::uAllocClassType(sizeof(UpdateListener__uType), "Fuse.UpdateListener", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(UpdateListener, action);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "action";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void UpdateListener__Invoke(UpdateListener* __this)
{
    if (__this->removed)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->action, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->action)->InvokeVoid();
    }
}

void UpdateListener___ObjInit(UpdateListener* __this)
{
}

UpdateListener* UpdateListener__New_1(::uStatic* __this)
{
    UpdateListener* inst = (::app::Fuse::UpdateListener*)::uAllocObject(sizeof(::app::Fuse::UpdateListener), ::app::Fuse::UpdateListener__typeof());
    inst->_ObjInit();
    return inst;
}

}}
