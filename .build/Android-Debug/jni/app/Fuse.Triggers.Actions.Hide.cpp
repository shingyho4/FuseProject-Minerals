// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Hide.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

Hide__uType* Hide__typeof()
{
    static Hide__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Hide__uType*)::uAllocClassType(sizeof(Hide__uType), "Fuse.Triggers.Actions.Hide", ::app::Fuse::Triggers::Actions::TriggerAction__typeof());
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Hide__Perform;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Hide__Perform(Hide* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::IHide__typeof()))
    {
        ::app::Fuse::Triggers::Actions::IHide::Hide(::uPtr< ::uObject*>((::uObject*)target));
    }
}

}}}}
