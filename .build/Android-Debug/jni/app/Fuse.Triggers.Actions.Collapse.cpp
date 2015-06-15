// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Collapse.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

Collapse__uType* Collapse__typeof()
{
    static Collapse__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Collapse__uType*)::uAllocClassType(sizeof(Collapse__uType), "Fuse.Triggers.Actions.Collapse", ::app::Fuse::Triggers::Actions::TriggerAction__typeof());
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Collapse__Perform;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Collapse__Perform(Collapse* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::ICollapse__typeof()))
    {
        ::app::Fuse::Triggers::Actions::ICollapse::Collapse(::uPtr< ::uObject*>((::uObject*)target));
    }
}

}}}}
