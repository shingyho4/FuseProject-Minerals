// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__object__double.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Navigation_NavigationEdge__Fus-2449c6a3.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Navigation_Navigat-6506eb04.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Navigation_NavigationEdge__F-7ed44d5.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uStaticStrong< ::app::Fuse::PropertyHandle*> EdgeNavigation___edgeHandle;

EdgeNavigation__uType* EdgeNavigation__typeof()
{
    static EdgeNavigation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeNavigation__uType*)::uAllocClassType(sizeof(EdgeNavigation__uType), "Fuse.Navigation.EdgeNavigation", ::app::Fuse::Navigation::Navigation__typeof(), 1, 5);
        type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*))EdgeNavigation__Goto;
        type->__fp_Toggle = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*))EdgeNavigation__Toggle;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeNavigation__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeNavigation__OnUnrooted;

        type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*))EdgeNavigation__Goto;
        type->__interface_0.__fp_Toggle = (void(*)(void*, ::app::Fuse::Node*))EdgeNavigation__Toggle;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationContext__typeof();

        type->InterfaceOffsets[0] = offsetof(EdgeNavigation__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(EdgeNavigation, _active);
        type->StrongRefOffsets[1] = offsetof(EdgeNavigation, _panel);
        type->StrongRefOffsets[2] = offsetof(EdgeNavigation, _element);
        type->StrongRefOffsets[3] = offsetof(EdgeNavigation, _swipers);
        type->StrongRefOffsets[4] = offsetof(EdgeNavigation, _mains);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_active";
        type->StrongRefNames[1] = "_panel";
        type->StrongRefNames[2] = "_element";
        type->StrongRefNames[3] = "_swipers";
        type->StrongRefNames[4] = "_mains";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* EdgeNavigation__get_Active(EdgeNavigation* __this)
{
    return __this->_active;
}

void EdgeNavigation__set_Active(EdgeNavigation* __this, ::app::Fuse::Node* value)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_123.Current();

        if (::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Target() == value)
        {
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Enable();
        }
        else
        {
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Disable();
        }
    }

    __this->_active = value;
}

int EdgeNavigation__GetEdge(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(EdgeNavigation___edgeHandle, &res))
    {
        return ::uUnbox< int>(res);
    }

    return 4;
}

void EdgeNavigation__Goto(EdgeNavigation* __this, ::app::Fuse::Node* element)
{
    __this->Active(element);
}

void EdgeNavigation__Toggle(EdgeNavigation* __this, ::app::Fuse::Node* page)
{
    if (__this->Active() == page)
    {
        __this->Active(NULL);
    }
    else
    {
        __this->Active(page);
    }
}

void EdgeNavigation__OnRooted(EdgeNavigation* __this, ::app::Fuse::Node* node)
{
    __this->_element = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());
    __this->_panel = ::uAs< ::uObject*>(node, ::app::Fuse::Navigation::INavigationPanel__typeof());

    if ((__this->_element == NULL) || (__this->_panel == NULL))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("EdgeNavigation must be rooted in an Element")));
    }

    ::app::Fuse::Navigation::INavigationPanel::add_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnChildAdded, __this));
    ::app::Fuse::Navigation::INavigationPanel::add_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnChildRemoved, __this));
    __this->CheckChildren();
}

void EdgeNavigation__OnUnrooted(EdgeNavigation* __this, ::app::Fuse::Node* node)
{
    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::add_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnChildRemoved, __this));
        __this->_panel = NULL;
        __this->ClearChildren();
    }

    __this->_element = NULL;
}

void EdgeNavigation__OnChildAdded(EdgeNavigation* __this, ::app::Fuse::Node* child)
{
    __this->CheckChildren();
}

void EdgeNavigation__OnChildRemoved(EdgeNavigation* __this, ::app::Fuse::Node* child)
{
    __this->CheckChildren();
}

void EdgeNavigation__ClearChildren(EdgeNavigation* __this)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper s = enum_124.Current();
        ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s.Value())->remove_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnProgressChanged, __this));
        ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s.Value())->Unrooted();
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->Clear();
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->Clear();
}

void EdgeNavigation__CheckChildren(EdgeNavigation* __this)
{
    __this->ClearChildren();
    ::app::Fuse::Navigation::NavigationArgs* panelArgs = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 1.0, 1.0, 1);
    ::app::Fuse::Navigation::NavigationArgs* mainArgs = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 0.0, 0.0, 1);

    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)); i++)
    {
        ::app::Fuse::Node* nodeChild = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), i);
        ::app::Fuse::Elements::Element* element = ::uAs< ::app::Fuse::Elements::Element*>(nodeChild, ::app::Fuse::Elements::Element__typeof());
        int edge = (element == NULL) ? 4 : EdgeNavigation__GetEdge(NULL, element);

        if (edge == 4)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->Add(nodeChild);
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, nodeChild, mainArgs);
        }
        else
        {
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, (::app::Fuse::Node*)element, panelArgs);
            ::app::Fuse::Gestures::Internal::EdgeSwiper* s = ::app::Fuse::Gestures::Internal::EdgeSwiper__New_1(NULL);
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s)->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)::app::Fuse::Navigation::EdgeNavigation__OnProgressChanged, __this));
            s->Rooted(__this->_element);
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->Item(edge, s);
        }
    }
}

void EdgeNavigation__OnProgressChanged(EdgeNavigation* __this, ::uObject* s, double progress)
{
    ::app::Fuse::Gestures::Internal::EdgeSwiper* swiper = ::uAs< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof());
    ::app::Fuse::Elements::Element* panel = ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("Unexpected message"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Navigation\\0.1.0\\$.uno"), 294);
        return;
    }

    ::app::Fuse::Navigation::NavigationArgs* a = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 1.0 - progress, 1.0 - progress, 2);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, (::app::Fuse::Node*)panel, a);
    ::app::Fuse::Node* maxPage = NULL;
    double maxProgress = 0.0;

    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_125 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_125.Current();

        if (::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Progress() > maxProgress)
        {
            maxPage = (::app::Fuse::Node*)::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Target();
            maxProgress = ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Progress();
        }
    }

    __this->_active = maxPage;
    ::app::Fuse::Navigation::NavigationArgs* b = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, -maxProgress, -maxProgress, 2);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_126 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Fuse::Node* m = enum_126.Current();
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, m, b);
    }
}

void EdgeNavigation___TypeInit_1(::uStatic* __this)
{
    EdgeNavigation___edgeHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

}}}
