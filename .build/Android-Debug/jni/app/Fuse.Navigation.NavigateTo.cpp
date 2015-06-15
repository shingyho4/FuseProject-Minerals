// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.NavigateTo.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigateTo__uType* NavigateTo__typeof()
{
    static NavigateTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigateTo__uType*)::uAllocClassType(sizeof(NavigateTo__uType), "Fuse.Navigation.NavigateTo", ::app::Fuse::Navigation::NavigationTriggerAction__typeof(), 0, 1);
        type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))NavigateTo__Perform_1;

        type->StrongRefOffsets[0] = offsetof(NavigateTo, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* NavigateTo__get_Target(NavigateTo* __this)
{
    return __this->_Target;
}

void NavigateTo__set_Target(NavigateTo* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

void NavigateTo__Perform_1(NavigateTo* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    if (__this->Target() != NULL)
    {
        ::app::Fuse::Navigation::INavigationContext::Goto(::uPtr< ::uObject*>(ctx), __this->Target());
    }
}

}}}
