// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileEnabled.h>

namespace app {
namespace Fuse {
namespace Triggers {

WhileEnabled__uType* WhileEnabled__typeof()
{
    static WhileEnabled__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WhileEnabled__uType*)::uAllocClassType(sizeof(WhileEnabled__uType), "Fuse.Triggers.WhileEnabled", ::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
        type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileEnabled__get_IsActive;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WhileEnabled__get_IsActive(WhileEnabled* __this)
{
    return (__this->Node() != NULL) ? ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : true;
}

}}}
