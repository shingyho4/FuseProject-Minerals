// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>

namespace app {
namespace Fuse {
namespace Triggers {

WhileDisabled__uType* WhileDisabled__typeof()
{
    static WhileDisabled__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WhileDisabled__uType*)::uAllocClassType(sizeof(WhileDisabled__uType), "Fuse.Triggers.WhileDisabled", ::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
        type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileDisabled__get_IsActive;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WhileDisabled__get_IsActive(WhileDisabled* __this)
{
    return (__this->Node() != NULL) ? !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : false;
}

void WhileDisabled___ObjInit_3(WhileDisabled* __this)
{
    ::app::Fuse::Triggers::WhileEnabledDisabledTrigger___ObjInit_2(__this);
}

WhileDisabled* WhileDisabled__New_1(::uStatic* __this)
{
    WhileDisabled* inst = (::app::Fuse::Triggers::WhileDisabled*)::uAllocObject(sizeof(::app::Fuse::Triggers::WhileDisabled), ::app::Fuse::Triggers::WhileDisabled__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
