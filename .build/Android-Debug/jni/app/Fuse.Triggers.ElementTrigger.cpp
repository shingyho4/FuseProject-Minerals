// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.ElementTrigger.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {

ElementTrigger__uType* ElementTrigger__typeof()
{
    static ElementTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ElementTrigger__uType*)::uAllocClassType(sizeof(ElementTrigger__uType), "Fuse.Triggers.ElementTrigger", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ElementTrigger__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ElementTrigger__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ElementTrigger__OnRooted(ElementTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    if (::uIs(elm, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->OnRooted_1(::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof()));
    }
}

void ElementTrigger__OnUnrooted(ElementTrigger* __this, ::app::Fuse::Node* elm)
{
    if (::uIs(elm, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->OnUnrooted_1(::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof()));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void ElementTrigger___ObjInit_2(ElementTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

}}}
