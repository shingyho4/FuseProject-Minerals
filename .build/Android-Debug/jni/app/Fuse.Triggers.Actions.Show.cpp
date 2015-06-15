// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.Actions.Show.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

Show__uType* Show__typeof()
{
    static Show__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Show__uType*)::uAllocClassType(sizeof(Show__uType), "Fuse.Triggers.Actions.Show", ::app::Fuse::Triggers::Actions::TriggerAction__typeof());
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Show__Perform;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Show__Perform(Show* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::IShow__typeof()))
    {
        ::app::Fuse::Triggers::Actions::IShow::Show(::uPtr< ::uObject*>((::uObject*)target));
    }
}

}}}}
