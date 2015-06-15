// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.CanGoBack.h>
#include <app/Fuse.Navigation.INavigationContext.h>
#include <app/Fuse.Navigation.NavigatedArgs.h>
#include <app/Fuse.Navigation.NavigatedHandler.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

CanGoBack__uType* CanGoBack__typeof()
{
    static CanGoBack__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CanGoBack__uType*)::uAllocClassType(sizeof(CanGoBack__uType), "Fuse.Navigation.CanGoBack", ::app::Fuse::Triggers::ElementTrigger__typeof(), 0, 1);
        type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))CanGoBack__OnRooted_1;
        type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))CanGoBack__OnUnrooted_1;

        type->StrongRefOffsets[0] = offsetof(CanGoBack, _context);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_context";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* CanGoBack__get_Context(CanGoBack* __this)
{
    return __this->_context;
}

void CanGoBack__set_Context(CanGoBack* __this, ::uObject* value)
{
    if (__this->_context != NULL)
    {
        ::app::Fuse::Navigation::INavigationContext::remove_Navigated(::uPtr< ::uObject*>(__this->_context), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigatedHandler__typeof(), (const void*)::app::Fuse::Navigation::CanGoBack__OnNavigated, __this));
    }

    __this->_context = value;

    if (__this->_context != NULL)
    {
        ::app::Fuse::Navigation::INavigationContext::add_Navigated(::uPtr< ::uObject*>(__this->_context), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigatedHandler__typeof(), (const void*)::app::Fuse::Navigation::CanGoBack__OnNavigated, __this));
    }
}

void CanGoBack__OnRooted_1(CanGoBack* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->Context() == NULL)
    {
        __this->Context((::uObject*)::app::Fuse::Navigation::Navigation__TryFind(NULL, (::app::Fuse::Node*)elm));
    }

    __this->BypassActivate();
}

void CanGoBack__OnUnrooted_1(CanGoBack* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->Context(NULL);
}

void CanGoBack__OnNavigated(CanGoBack* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigatedArgs* args)
{
    if (::app::Fuse::Navigation::INavigationContext::CanGoBack(::uPtr< ::uObject*>(__this->Context())))
    {
        __this->Deactivate();
    }
    else
    {
        __this->Activate(NULL);
    }
}

}}}
