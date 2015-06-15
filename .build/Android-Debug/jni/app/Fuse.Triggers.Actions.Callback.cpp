// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Callback.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

Callback__uType* Callback__typeof()
{
    static Callback__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Callback__uType*)::uAllocClassType(sizeof(Callback__uType), "Fuse.Triggers.Actions.Callback", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Callback__Perform;

        type->StrongRefOffsets[0] = offsetof(Callback, _Action);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Action";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uDelegate* Callback__get_Action(Callback* __this)
{
    return __this->_Action;
}

void Callback__set_Action(Callback* __this, ::uDelegate* value)
{
    __this->_Action = value;
}

void Callback__Perform(Callback* __this, ::app::Fuse::Node* target)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Action(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Action())->InvokeVoid();
    }
}

}}}}
