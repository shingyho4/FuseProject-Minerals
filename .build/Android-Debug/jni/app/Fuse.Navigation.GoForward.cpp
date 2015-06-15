// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.GoForward.h>
#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

GoForward__uType* GoForward__typeof()
{
    static GoForward__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GoForward__uType*)::uAllocClassType(sizeof(GoForward__uType), "Fuse.Navigation.GoForward", ::app::Fuse::Navigation::NavigationTriggerAction__typeof());
        type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))GoForward__Perform_1;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GoForward__Perform_1(GoForward* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    if (::app::Fuse::Navigation::INavigationContext::CanGoForward(::uPtr< ::uObject*>(ctx)))
    {
        ::app::Fuse::Navigation::INavigationContext::GoForward(::uPtr< ::uObject*>(ctx));
    }
}

}}}
