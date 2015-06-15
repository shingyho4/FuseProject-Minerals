// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigationTriggerAction__uType* NavigationTriggerAction__typeof()
{
    static NavigationTriggerAction__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationTriggerAction__uType*)::uAllocClassType(sizeof(NavigationTriggerAction__uType), "Fuse.Navigation.NavigationTriggerAction", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))NavigationTriggerAction__Perform;

        type->StrongRefOffsets[0] = offsetof(NavigationTriggerAction, _context);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_context";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* NavigationTriggerAction__get_Context(NavigationTriggerAction* __this)
{
    return __this->_context;
}

void NavigationTriggerAction__set_Context(NavigationTriggerAction* __this, ::uObject* value)
{
    __this->_context = value;
}

void NavigationTriggerAction__Perform(NavigationTriggerAction* __this, ::app::Fuse::Node* n)
{
    ::uObject* ind_123 = __this->Context();
    ::uObject* ctx = (ind_123 != NULL) ? ind_123 : (::uObject*)::app::Fuse::Navigation::Navigation__TryFind(NULL, n);

    if (ctx == NULL)
    {
        return;
    }

    __this->Perform_1(ctx, n);
}

}}}
