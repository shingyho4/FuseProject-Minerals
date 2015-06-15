// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DefaultNavigationAnimator.h>
#include <app/Fuse.Navigation.DefaultNavigationAnimatorFactory.h>
#include <app/Fuse.Navigation.EndSeekArgs.h>
#include <app/Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationProgressChangedHandler.h>
#include <app/Fuse.Navigation.NavigationStateArgs.h>
#include <app/Fuse.Navigation.NavigationTween.h>
#include <app/Fuse.Navigation.PlayerFactory.h>
#include <app/Fuse.Navigation.SeekNavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <app/Fuse.Navigation.UpdateSeekArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.RequiresRootedException.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__double.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

StructuredNavigation__uType* StructuredNavigation__typeof()
{
    static StructuredNavigation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StructuredNavigation__uType*)::uAllocClassType(sizeof(StructuredNavigation__uType), "Fuse.Navigation.StructuredNavigation", ::app::Fuse::Navigation::Navigation__typeof(), 1, 6);
        type->__fp_get_CanGoForward = (bool(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__get_CanGoForward;
        type->__fp_get_CanGoBack = (bool(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__get_CanGoBack;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StructuredNavigation__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StructuredNavigation__OnUnrooted;
        type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*))StructuredNavigation__Goto;
        type->__fp_GoForward = (void(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__GoForward;
        type->__fp_GoBack = (void(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__GoBack;

        type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*))StructuredNavigation__Goto;
        type->__interface_0.__fp_GoForward = (void(*)(void*))StructuredNavigation__GoForward;
        type->__interface_0.__fp_GoBack = (void(*)(void*))StructuredNavigation__GoBack;
        type->__interface_0.__fp_get_CanGoForward = (bool(*)(void*))StructuredNavigation__get_CanGoForward;
        type->__interface_0.__fp_get_CanGoBack = (bool(*)(void*))StructuredNavigation__get_CanGoBack;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationContext__typeof();

        type->InterfaceOffsets[0] = offsetof(StructuredNavigation__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(StructuredNavigation, _node);
        type->StrongRefOffsets[1] = offsetof(StructuredNavigation, _panel);
        type->StrongRefOffsets[2] = offsetof(StructuredNavigation, _navigationTween);
        type->StrongRefOffsets[3] = offsetof(StructuredNavigation, _currentAnimatorPlayer);
        type->StrongRefOffsets[4] = offsetof(StructuredNavigation, _active);
        type->StrongRefOffsets[5] = offsetof(StructuredNavigation, ProgressChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_node";
        type->StrongRefNames[1] = "_panel";
        type->StrongRefNames[2] = "_navigationTween";
        type->StrongRefNames[3] = "_currentAnimatorPlayer";
        type->StrongRefNames[4] = "_active";
        type->StrongRefNames[5] = "ProgressChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int StructuredNavigation__get_Mode(StructuredNavigation* __this)
{
    return __this->_Mode;
}

void StructuredNavigation__set_Mode(StructuredNavigation* __this, int value)
{
    __this->_Mode = value;
}

::uObject* StructuredNavigation__get_Owner(StructuredNavigation* __this)
{
    return __this->_panel;
}

bool StructuredNavigation__get_CanGoForward(StructuredNavigation* __this)
{
    if ((__this->_panel != NULL) && ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)))
    {
        return __this->_active != __this->Front();
    }

    return false;
}

bool StructuredNavigation__get_CanGoBack(StructuredNavigation* __this)
{
    if ((__this->_panel != NULL) && ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)))
    {
        return __this->_active != __this->Back();
    }

    return false;
}

double StructuredNavigation__get_Progress(StructuredNavigation* __this)
{
    return __this->_progress;
}

void StructuredNavigation__set_Progress(StructuredNavigation* __this, double value)
{
    double prev = __this->_progress;
    __this->_progress = value;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::app::Fuse::Navigation::Navigation*, double, double>((::app::Fuse::Navigation::Navigation*)__this, __this->_progress, prev);
    }
}

::app::Uno::Float2 StructuredNavigation__get_SeekRange(StructuredNavigation* __this)
{
    return ::app::Uno::Float2__New_2(NULL, (float)-__this->_progressBase, (float)((double)(::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1) - __this->_progressBase));
}

::app::Fuse::Node* StructuredNavigation__get_Back(StructuredNavigation* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) ? ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1) : NULL;
}

::app::Fuse::Node* StructuredNavigation__get_Front(StructuredNavigation* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) ? ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), 0) : NULL;
}

::app::Fuse::Node* StructuredNavigation__get_Previous(StructuredNavigation* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) ? ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), ::app::Uno::Math__Clamp_8(NULL, __this->IndexOfChild(__this->_active) + 1, 0, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1)) : NULL;
}

::app::Fuse::Node* StructuredNavigation__get_Next(StructuredNavigation* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) ? ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), ::app::Uno::Math__Clamp_8(NULL, __this->IndexOfChild(__this->_active) - 1, 0, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1)) : NULL;
}

void StructuredNavigation__OnRooted(StructuredNavigation* __this, ::app::Fuse::Node* node)
{
    __this->_node = node;
    __this->_panel = ::uAs< ::uObject*>(node, ::app::Fuse::Navigation::INavigationPanel__typeof());

    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::add_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnChildRemoved, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_Update(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnUpdate, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_Resized(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnResized, __this));

        if (::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) && (__this->_active == NULL))
        {
            __this->_active = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), 0);
        }

        if (__this->_active != NULL)
        {
            __this->Progress((double)__this->IndexOfChild(__this->_active));
        }

        __this->EnsureChildAnimationState();
    }
}

void StructuredNavigation__OnUnrooted(StructuredNavigation* __this, ::app::Fuse::Node* node)
{
    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnChildRemoved, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_Update(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnUpdate, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_Resized(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__OnResized, __this));
        __this->_panel = NULL;
    }

    __this->_node = NULL;
}

void StructuredNavigation__OnResized(StructuredNavigation* __this)
{
    __this->EnsureChildAnimationState();
}

int StructuredNavigation__IndexOfChild(StructuredNavigation* __this, ::app::Fuse::Node* n)
{
    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)); i++)
    {
        if (::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), i) == n)
        {
            return i;
        }
    }

    return -1;
}

void StructuredNavigation__Goto(StructuredNavigation* __this, ::app::Fuse::Node* element)
{
    if (__this->_panel == NULL)
    {
        U_THROW(::app::Fuse::RequiresRootedException__New_3(NULL));
    }

    if (element == __this->_active)
    {
        return;
    }

    if (!::app::Fuse::Navigation::INavigationPanel::ContainsChild(::uPtr< ::uObject*>(__this->_panel), element))
    {
        if (__this->Mode() == 0)
        {
            ::app::Fuse::Navigation::INavigationPanel::AddChildAt(::uPtr< ::uObject*>(__this->_panel), 0, element);
        }

        if (__this->Mode() == 1)
        {
            __this->ClearForwardHistory();
            ::app::Fuse::Navigation::INavigationPanel::AddChildAt(::uPtr< ::uObject*>(__this->_panel), 0, element);
        }
    }
    else
    {
        if (__this->Mode() == 1)
        {
            double diff = __this->Progress() - (double)__this->IndexOfChild(__this->_active);
            ::app::Fuse::Navigation::INavigationPanel::RemoveChildAt(::uPtr< ::uObject*>(__this->_panel), __this->IndexOfChild(element));
            __this->Progress((double)__this->IndexOfChild(__this->_active) + diff);
            __this->ClearForwardHistory();
            ::app::Fuse::Navigation::INavigationPanel::AddChildAt(::uPtr< ::uObject*>(__this->_panel), 0, element);
        }
    }

    __this->TransitionTo(element, false);
}

void StructuredNavigation__TransitionTo(StructuredNavigation* __this, ::app::Fuse::Node* element, bool bypass)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_123;
    ::app::Fuse::Navigation::NavigationStateArgs* collection_124;
    double targetProgress = (double)__this->IndexOfChild(element);
    __this->_active = element;

    if ((__this->Progress() == targetProgress) && (__this->_currentAnimatorPlayer == NULL))
    {
        ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_123 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_123)->State(0), 0, collection_123));
        return;
    }

    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_124 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_124)->State(2), 2, collection_124));
    __this->_currentAnimatorPlayer = ::app::Fuse::Navigation::PlayerFactory__Start(NULL, targetProgress, __this->Progress(), ::app::Fuse::Navigation::DefaultNavigationAnimatorFactory__GetAnimators(NULL, __this->_panel), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__AnimatorDoneCallback, __this), ::uNewDelegateNonVirt(::app::Uno::Action__double__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__ProgressSetterCallback, __this), __this->_navigationTween);
}

void StructuredNavigation__GoForward(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
    {
        __this->TransitionTo(__this->Next(), false);
    }
}

void StructuredNavigation__GoBack(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
    {
        __this->TransitionTo(__this->Previous(), false);
    }
}

void StructuredNavigation__OnChildAdded(StructuredNavigation* __this, ::app::Fuse::Node* child)
{
    if (__this->_active != NULL)
    {
        __this->Progress((double)__this->IndexOfChild(__this->_active));
    }

    if (::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) && (__this->_active == NULL))
    {
        __this->_active = child;
    }

    __this->EnsureChildAnimationState();
}

void StructuredNavigation__OnChildRemoved(StructuredNavigation* __this, ::app::Fuse::Node* child)
{
    if (!::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)))
    {
        __this->_active = NULL;
    }

    ::app::Fuse::Navigation::DefaultNavigationAnimator* animator = ::app::Fuse::Navigation::DefaultNavigationAnimator__New_1(NULL, 0, child);
    ::uPtr< ::app::Fuse::Navigation::DefaultNavigationAnimator*>(animator)->Update(0.0, 0.0);
}

void StructuredNavigation__OnUpdate(StructuredNavigation* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (__this->_currentAnimatorPlayer != NULL)
    {
        ::app::Fuse::Navigation::INavigationAnimatorPlayer::Update(::uPtr< ::uObject*>(__this->_currentAnimatorPlayer));
    }
}

void StructuredNavigation__EnsureChildAnimationState(StructuredNavigation* __this)
{
    if (__this->_panel == NULL)
    {
        return;
    }

    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)); ++i)
    {
        ::app::Fuse::Node* c = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), i);
        double p = __this->Progress() - (double)i;
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, p, p, 1));
    }
}

void StructuredNavigation__AnimatorDoneCallback(StructuredNavigation* __this)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_125;
    ::app::Fuse::Navigation::INavigationAnimatorPlayer::EnsureAtEnd(::uPtr< ::uObject*>(__this->_currentAnimatorPlayer));
    __this->Progress((double)__this->IndexOfChild(__this->_active));
    __this->_currentAnimatorPlayer = NULL;
    __this->OnNavigated(__this->_active);
    __this->OnTitleChanged(__this->_active);
    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_125 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_125)->State(0), 0, collection_125));
}

void StructuredNavigation__ProgressSetterCallback(StructuredNavigation* __this, double newProgress)
{
    __this->Progress(newProgress);
}

double StructuredNavigation__ProgressGetterCallback(StructuredNavigation* __this)
{
    return __this->Progress();
}

void StructuredNavigation__BeginSeek(StructuredNavigation* __this)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_126;
    __this->_progressBase = __this->Progress();
    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_126 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_126)->State(1), 1, collection_126));
    __this->_currentAnimatorPlayer = (::uObject*)::app::Fuse::Navigation::SeekNavigationAnimatorPlayer__New_1(NULL, ::app::Fuse::Navigation::DefaultNavigationAnimatorFactory__GetAnimators(NULL, __this->_panel), ::uNewDelegateNonVirt(::app::Uno::Func__double__typeof(), (const void*)::app::Fuse::Navigation::StructuredNavigation__ProgressGetterCallback, __this));
}

void StructuredNavigation__Seek(StructuredNavigation* __this, ::app::Fuse::Navigation::UpdateSeekArgs* args)
{
    __this->Progress((double)::uPtr< ::app::Fuse::Navigation::UpdateSeekArgs*>(args)->RelativeDistance() + __this->_progressBase);
}

void StructuredNavigation__EndSeek(StructuredNavigation* __this, ::app::Fuse::Navigation::EndSeekArgs* args)
{
    __this->_currentAnimatorPlayer = NULL;
    int targetIndex = 0;

    switch (::uPtr< ::app::Fuse::Navigation::EndSeekArgs*>(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = ::app::Uno::Math__Clamp_8(NULL, (int)::app::Uno::Math__Floor(NULL, __this->Progress()), 0, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1);
            break;
        }
        case 2:
        {
            targetIndex = ::app::Uno::Math__Clamp_8(NULL, (int)::app::Uno::Math__Ceil(NULL, __this->Progress()), 0, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1);
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::app::Uno::Math__Floor(NULL, __this->Progress());
            targetIndex = ::app::Uno::Math__Clamp_8(NULL, (diff > 0.5) ? (int)::app::Uno::Math__Ceil(NULL, __this->Progress()) : (int)::app::Uno::Math__Floor(NULL, __this->Progress()), 0, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->_panel)) - 1);
            break;
        }
    }

    if (__this->_active != ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), targetIndex))
    {
        ::app::Fuse::Node* old = __this->_active;
        __this->_active = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), targetIndex);
    }

    __this->TransitionTo(::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->_panel), targetIndex), false);
}

void StructuredNavigation__ClearForwardHistory(StructuredNavigation* __this)
{
    if (::app::Fuse::Navigation::INavigationPanel::HasChildren(::uPtr< ::uObject*>(__this->_panel)) && (__this->_active != __this->Front()))
    {
        int target = __this->IndexOfChild(__this->_active);

        for (int i = target - 1; i >= 0; i--)
        {
            ::app::Fuse::Navigation::INavigationPanel::RemoveChildAt(::uPtr< ::uObject*>(__this->_panel), i);
        }
    }
}

}}}
