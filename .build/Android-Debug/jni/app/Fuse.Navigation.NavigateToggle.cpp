// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.NavigateToggle.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigateToggle__uType* NavigateToggle__typeof()
{
    static NavigateToggle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigateToggle__uType*)::uAllocClassType(sizeof(NavigateToggle__uType), "Fuse.Navigation.NavigateToggle", ::app::Fuse::Navigation::NavigationTriggerAction__typeof(), 0, 1);
        type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))NavigateToggle__Perform_1;

        type->StrongRefOffsets[0] = offsetof(NavigateToggle, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* NavigateToggle__get_Target(NavigateToggle* __this)
{
    return __this->_Target;
}

void NavigateToggle__set_Target(NavigateToggle* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void NavigateToggle__Perform_1(NavigateToggle* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* ind_123;
    ::app::Fuse::Node* page = ::app::Fuse::Navigation::Navigation__TryFindPage(NULL, (ind_123 = __this->Target(), (ind_123 != NULL) ? ind_123 : n));

    if (page != NULL)
    {
        ::app::Fuse::Navigation::INavigationContext::Toggle(::uPtr< ::uObject*>(ctx), page);
    }
}

}}}
