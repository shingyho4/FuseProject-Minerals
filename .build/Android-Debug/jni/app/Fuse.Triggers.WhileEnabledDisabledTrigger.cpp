// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Triggers {

WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof()
{
    static WhileEnabledDisabledTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WhileEnabledDisabledTrigger__uType*)::uAllocClassType(sizeof(WhileEnabledDisabledTrigger__uType), "Fuse.Triggers.WhileEnabledDisabledTrigger", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void WhileEnabledDisabledTrigger__OnRooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Node*>(elm)->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));

    if (__this->IsActive())
    {
        __this->BypassActivate();
    }
}

void WhileEnabledDisabledTrigger__OnUnrooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Node*>(elm)->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void WhileEnabledDisabledTrigger__OnIsEnabledChanged(WhileEnabledDisabledTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (__this->IsActive())
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->Deactivate();
    }
}

void WhileEnabledDisabledTrigger___ObjInit_2(WhileEnabledDisabledTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

}}}
