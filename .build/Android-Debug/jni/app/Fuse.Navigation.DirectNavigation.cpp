// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uStaticStrong< ::app::Fuse::PropertyHandle*> DirectNavigation___indexProperty;

DirectNavigation__uType* DirectNavigation__typeof()
{
    static DirectNavigation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DirectNavigation__uType*)::uAllocClassType(sizeof(DirectNavigation__uType), "Fuse.Navigation.DirectNavigation", ::app::Fuse::Navigation::Navigation__typeof(), 1, 2);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DirectNavigation__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DirectNavigation__OnUnrooted;
        type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*))DirectNavigation__Goto;

        type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*))DirectNavigation__Goto;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationContext__typeof();

        type->InterfaceOffsets[0] = offsetof(DirectNavigation__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(DirectNavigation, _panel);
        type->StrongRefOffsets[1] = offsetof(DirectNavigation, _active);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_panel";
        type->StrongRefNames[1] = "_active";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DirectNavigation__OnRooted(DirectNavigation* __this, ::app::Fuse::Node* node)
{
    __this->_panel = ::uAs< ::uObject*>(node, ::app::Fuse::Navigation::INavigationPanel__typeof());

    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::add_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::DirectNavigation__OnChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::DirectNavigation__OnChildRemoved, __this));
        __this->UpdateState(true);
    }
}

void DirectNavigation__OnUnrooted(DirectNavigation* __this, ::app::Fuse::Node* node)
{
    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::DirectNavigation__OnChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::DirectNavigation__OnChildRemoved, __this));
        __this->_panel = NULL;
    }
}

void DirectNavigation__OnChildAdded(DirectNavigation* __this, ::app::Fuse::Node* child)
{
    ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, -1.0, -1.0, 1);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, child, state);
    DirectNavigation__SetIndex(NULL, child, -1);
}

void DirectNavigation__OnChildRemoved(DirectNavigation* __this, ::app::Fuse::Node* child)
{
    DirectNavigation__ResetIndex(NULL, child);
    ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 0.0, 0.0, 1);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, child, state);

    if (__this->_active == child)
    {
        __this->Goto(NULL);
    }
}

void DirectNavigation__Goto(DirectNavigation* __this, ::app::Fuse::Node* node)
{
    __this->TransitionTo(node, false);
}

void DirectNavigation__TransitionTo(DirectNavigation* __this, ::app::Fuse::Node* node, bool bypass)
{
    __this->_active = node;

    if (__this->_panel == NULL)
    {
        return;
    }

    __this->UpdateState(bypass);
}

void DirectNavigation__UpdateState(DirectNavigation* __this, bool bypass)
{
    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)); i++)
    {
        ::app::Fuse::Node* c = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), i);
        int oldIndex = DirectNavigation__GetIndex(NULL, c);
        bool active = __this->_active == c;
        int newIndex = active ? 0 : -1;

        if (bypass)
        {
            ::app::Fuse::Navigation::NavigationArgs* jump = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, (double)newIndex, (double)newIndex, 1);
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, jump);
            DirectNavigation__SetIndex(NULL, c, newIndex);
            continue;
        }

        if (oldIndex == newIndex)
        {
            continue;
        }

        ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, (double)newIndex, (double)oldIndex, 0);
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, state);
        DirectNavigation__SetIndex(NULL, c, newIndex);
    }
}

int DirectNavigation__GetIndex(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* val;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(DirectNavigation___indexProperty, &val))
    {
        return ::uUnbox< int>(val);
    }

    return 0;
}

void DirectNavigation__SetIndex(::uStatic* __this, ::app::Fuse::Node* elm, int index)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(DirectNavigation___indexProperty, ::uBox< int>(::app::Uno::Int__typeof(), index));
}

void DirectNavigation__ResetIndex(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(DirectNavigation___indexProperty);
}

void DirectNavigation___TypeInit_1(::uStatic* __this)
{
    DirectNavigation___indexProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

}}}
