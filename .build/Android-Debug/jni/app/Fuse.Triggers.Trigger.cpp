// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Triggers_Trigger.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Triggers {

Trigger__uType* Trigger__typeof()
{
    static Trigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Trigger__uType*)::uAllocClassType(sizeof(Trigger__uType), "Fuse.Triggers.Trigger", ::app::Fuse::Behavior__typeof(), 0, 7);
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnUnrooted;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnRooted;

        type->StrongRefOffsets[0] = offsetof(Trigger, _animation);
        type->StrongRefOffsets[1] = offsetof(Trigger, _actions);
        type->StrongRefOffsets[2] = offsetof(Trigger, _nodes);
        type->StrongRefOffsets[3] = offsetof(Trigger, _doneAction);
        type->StrongRefOffsets[4] = offsetof(Trigger, _node);
        type->StrongRefOffsets[5] = offsetof(Trigger, _animState);
        type->StrongRefOffsets[6] = offsetof(Trigger, PlaybackDone);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_animation";
        type->StrongRefNames[1] = "_actions";
        type->StrongRefNames[2] = "_nodes";
        type->StrongRefNames[3] = "_doneAction";
        type->StrongRefNames[4] = "_node";
        type->StrongRefNames[5] = "_animState";
        type->StrongRefNames[6] = "PlaybackDone";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_Animation(Trigger* __this)
{
    if (__this->_animation == NULL)
    {
        __this->_animation = ::app::Fuse::Animations::TriggerAnimation__New_1(NULL);
    }

    return __this->_animation;
}

void Trigger__set_Animation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_animation = value;
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_BackwardAnimation(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward();
}

void Trigger__set_BackwardAnimation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward(value);
}

::uObject* Trigger__get_Animators(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Animators();
}

bool Trigger__get_HasAnimators(Trigger* __this)
{
    return (__this->_animation != NULL) && ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->_animation)->HasAnimators();
}

::uObject* Trigger__get_Actions(Trigger* __this)
{
    if (__this->_actions == NULL)
    {
        __this->_actions = ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__New_1(NULL);
    }

    return (::uObject*)__this->_actions;
}

bool Trigger__get_HasActions(Trigger* __this)
{
    return (__this->_actions != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->Count() > 0);
}

int Trigger__get_Bypass(Trigger* __this)
{
    return __this->_Bypass;
}

void Trigger__set_Bypass(Trigger* __this, int value)
{
    __this->_Bypass = value;
}

double Trigger__get_Progress(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    }

    return 0.0;
}

::app::Fuse::Node* Trigger__get_Node(Trigger* __this)
{
    return __this->_node;
}

void Trigger__AddNodes(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarc = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemoveChild__typeof());

    if ((__this->_nodes != NULL) && (iarc != NULL))
    {
        for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_nodes)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Node* c = enum_123.Current();
            ::app::Fuse::Triggers::IAddRemoveChild::AddChild(::uPtr< ::uObject*>(iarc), c);
        }
    }
}

void Trigger__RemoveNodes(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarc = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemoveChild__typeof());

    if ((__this->_nodes != NULL) && (iarc != NULL))
    {
        for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_nodes)->GetEnumerator(); enum_124.MoveNext(); )
        {
            ::app::Fuse::Node* c = enum_124.Current();
            ::app::Fuse::Triggers::IAddRemoveChild::RemoveChild(::uPtr< ::uObject*>(iarc), c);
        }
    }
}

void Trigger__SetDone(Trigger* __this, ::uDelegate* done, bool on)
{
    __this->_doneOn = on;
    __this->_doneAction = done;
}

void Trigger__SetPlayDirection(Trigger* __this, int next)
{
    if (next == __this->_lastPlayDirection)
    {
        return;
    }

    __this->_lastPlayDirection = next;

    if (next == 0)
    {
        return;
    }

    int dir = (next > 0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_125 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_125.Current();

        if (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        if ((::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == dir) || (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == 2))
        {
            ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Perform(__this->_node);
        }
    }
}

void Trigger__OnPlaybackDone(Trigger* __this, ::uObject* s)
{
    __this->SetPlayDirection(0);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< Trigger*>(__this);
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_doneAction, NULL))
    {
        return;
    }

    ::uDelegate* da = __this->_doneAction;
    __this->_doneAction = NULL;

    if ((__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOff()))
    {
        ::uPtr< ::uDelegate*>(da)->InvokeVoid();
    }
}

void Trigger__Start(Trigger* __this)
{
    if (!__this->_isStarted)
    {
        __this->AddNodes(__this->_node);
        __this->_isStarted = true;
    }
}

void Trigger__Stop(Trigger* __this)
{
    if (__this->_isStarted)
    {
        __this->RemoveNodes(__this->_node);
        __this->_isStarted = false;
    }
}

void Trigger__Activate(Trigger* __this, ::uDelegate* done)
{
    if (__this->Progress() >= 1.0)
    {
        return;
    }

    __this->Start();
    __this->SetDone(done, true);
    __this->EnsureState();

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayOn();
    }
}

void Trigger__BypassActivate(Trigger* __this)
{
    if (__this->Bypass() == 1)
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->BypassSeek(1.0, 0);
        __this->PlayOn();
    }
}

void Trigger__Deactivate(Trigger* __this)
{
    if (__this->Progress() <= 0.0)
    {
        return;
    }

    __this->PlayEnd(false, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Triggers::Trigger__Stop, __this));
}

void Trigger__Pulse(Trigger* __this)
{
    __this->SetPlayDirection(0);
    __this->Activate(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Triggers::Trigger__Deactivate, __this));
}

void Trigger__PlayOn(Trigger* __this)
{
    __this->PlayEnd(true, NULL);
}

void Trigger__PlayEnd(Trigger* __this, bool on, ::uDelegate* done)
{
    if (on)
    {
        __this->Start();
    }

    __this->SetDone(done, on);
    __this->EnsureState();

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayEnd(on);
    }
}

void Trigger__OnUnrooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->CleanupState();
    __this->_node = NULL;
}

void Trigger__OnRooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->_node = elm;
    __this->EnsureState();
}

void Trigger__CleanupState(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Dispose();
        __this->_animState = NULL;
    }
}

void Trigger__CreateState(Trigger* __this)
{
    __this->CleanupState();
    __this->EnsureAnimationLength();
    __this->_animState = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateState(__this->_node);
    ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)::app::Fuse::Triggers::Trigger__OnPlaybackDone, __this));

    if (__this->HasActions())
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_ProgressUpdated(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)::app::Fuse::Triggers::Trigger__OnProgressUpdated, __this));
    }
}

void Trigger__EnsureState(Trigger* __this)
{
    if ((__this->_animState == NULL) && (__this->HasAnimators() || __this->HasActions()))
    {
        __this->CreateState();
    }
}

void Trigger__EnsureAnimationLength(Trigger* __this)
{
    if (!__this->HasActions())
    {
        return;
    }

    double animFore = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    double animBack = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_126 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_126.Current();
        float when = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
        {
            actFore = ::app::Uno::Math__Max(NULL, (double)when, actFore);
        }

        if ((action->Direction() == 1) || (action->Direction() == 2))
        {
            actBack = ::app::Uno::Math__Max(NULL, (double)when, actBack);
        }
    }

    if ((actFore <= animFore) && (actBack <= animBack))
    {
        return;
    }

    ::app::Fuse::Animations::Nothing* n = ::app::Fuse::Animations::Nothing__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay(actFore);
    n->DelayBack(actBack);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(__this->Animators()), (::app::Fuse::Animations::Animator*)n);

    if (__this->BackwardAnimation() != NULL)
    {
        n = ::app::Fuse::Animations::Nothing__New_1(NULL);
        ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay(actBack);
        ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->BackwardAnimation())->Animators()), (::app::Fuse::Animations::Animator*)n);
    }
}

void Trigger__OnProgressUpdated(Trigger* __this, ::uObject* s)
{
    double prev = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PreviousProgress();
    double cur = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
    {
        return;
    }

    __this->SetPlayDirection((diff > 0.0) ? 1 : ((diff < 0.0) ? -1 : 0));
    int dir = (diff > 0.0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_127 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_127.Current();

        if (!::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        float tp = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->ProgressWhen((float)::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->CurrentTotalDuration());
        bool call = (dir == 0) ? ((((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0))) : ((((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0)));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
        {
            action->Perform(__this->_node);
        }
    }
}

void Trigger__PlayTo(Trigger* __this, double progress, int variant)
{
    __this->EnsureState();

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayToProgress(progress, variant);
    }
}

void Trigger__Seek(Trigger* __this, double progress)
{
    __this->Seek_1(progress, 0);
}

void Trigger__Seek_1(Trigger* __this, double progress, int direction)
{
    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    __this->EnsureState();

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 1);
    }
}

void Trigger__BypassSeek(Trigger* __this, double progress, int direction)
{
    if (__this->Bypass() == 1)
    {
        __this->Seek_1(progress, direction);
        return;
    }

    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    __this->EnsureState();

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 3);
    }
}

void Trigger___ObjInit_1(Trigger* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Trigger__add_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

void Trigger__remove_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

}}}
