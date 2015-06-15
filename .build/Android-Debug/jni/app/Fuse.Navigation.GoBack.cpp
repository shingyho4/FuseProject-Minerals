// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.GoBack.h>
#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

GoBack__uType* GoBack__typeof()
{
    static GoBack__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GoBack__uType*)::uAllocClassType(sizeof(GoBack__uType), "Fuse.Navigation.GoBack", ::app::Fuse::Navigation::NavigationTriggerAction__typeof());
        type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))GoBack__Perform_1;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GoBack__Perform_1(GoBack* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    if (::app::Fuse::Navigation::INavigationContext::CanGoBack(::uPtr< ::uObject*>(ctx)))
    {
        ::app::Fuse::Navigation::INavigationContext::GoBack(::uPtr< ::uObject*>(ctx));
    }
}

}}}
