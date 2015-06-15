// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationHandler.h>
#include <app/Fuse.Navigation.NavigationTrigger.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigationTrigger__uType* NavigationTrigger__typeof()
{
    static NavigationTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationTrigger__uType*)::uAllocClassType(sizeof(NavigationTrigger__uType), "Fuse.Navigation.NavigationTrigger", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NavigationTrigger__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NavigationTrigger__OnUnrooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* NavigationTrigger__get_PageContext(NavigationTrigger* __this)
{
    ::app::Fuse::Node* n = ::app::Fuse::Navigation::Navigation__TryFindPage(NULL, __this->Node());

    if (n == NULL)
    {
        return __this->Node();
    }

    return n;
}

void NavigationTrigger__OnRooted(NavigationTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::app::Fuse::Navigation::Navigation__AddHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(::app::Fuse::Navigation::NavigationTrigger__uType, __fp_OnNavigationStateChanged)));
    __this->ForceUpdate();
}

void NavigationTrigger__OnUnrooted(NavigationTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Navigation::Navigation__RemoveHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(::app::Fuse::Navigation::NavigationTrigger__uType, __fp_OnNavigationStateChanged)));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void NavigationTrigger___ObjInit_2(NavigationTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

}}}
