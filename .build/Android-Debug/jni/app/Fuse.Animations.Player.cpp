// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.Player.h>
#include <app/Fuse.Animations.PlayerPart.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Animations {

Player__uType* Player__typeof()
{
    static Player__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Player__uType*)::uAllocClassType(sizeof(Player__uType), "Fuse.Animations.Player", ::uObject__typeof(), 0, 8);
        type->StrongRefOffsets[0] = offsetof(Player, ProgressUpdated);
        type->StrongRefOffsets[1] = offsetof(Player, StrengthUpdated);
        type->StrongRefOffsets[2] = offsetof(Player, _states);
        type->StrongRefOffsets[3] = offsetof(Player, _progress);
        type->StrongRefOffsets[4] = offsetof(Player, _strength);
        type->StrongRefOffsets[5] = offsetof(Player, _Node);
        type->StrongRefOffsets[6] = offsetof(Player, _Animation);
        type->StrongRefOffsets[7] = offsetof(Player, _DoneCallback);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "ProgressUpdated";
        type->StrongRefNames[1] = "StrengthUpdated";
        type->StrongRefNames[2] = "_states";
        type->StrongRefNames[3] = "_progress";
        type->StrongRefNames[4] = "_strength";
        type->StrongRefNames[5] = "_Node";
        type->StrongRefNames[6] = "_Animation";
        type->StrongRefNames[7] = "_DoneCallback";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* Player__get_Node(Player* __this)
{
    return __this->_Node;
}

void Player__set_Node(Player* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

::app::Fuse::Animations::TriggerAnimation* Player__get_Animation(Player* __this)
{
    return __this->_Animation;
}

void Player__set_Animation(Player* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

int Player__get_Variant(Player* __this)
{
    return __this->_Variant;
}

void Player__set_Variant(Player* __this, int value)
{
    __this->_Variant = value;
}

::uArray* Player__get_States(Player* __this)
{
    if (__this->_states == NULL)
    {
        __this->_states = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateAnimatorsState(__this->Variant(), __this->Node());
    }

    return __this->_states;
}

double Player__get_TotalDuration(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration;
}

::uDelegate* Player__get_DoneCallback(Player* __this)
{
    return __this->_DoneCallback;
}

void Player__set_DoneCallback(Player* __this, ::uDelegate* value)
{
    __this->_DoneCallback = value;
}

double Player__get_Progress(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress();
}

double Player__get_RemainTime(Player* __this)
{
    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration < 9.9999997473787516e-06))
    {
        return 0.0;
    }

    return (__this->Variant() == 0) ? (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration - ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current) : ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current;
}

bool Player__get_IsSyncState(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current == 0.0) || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress() == 1.0);
}

bool Player__get_AnyEffect(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current > 0.0) && (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Current > 0.0);
}

double Player__get_Strength(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress();
}

void Player__set_Strength(Player* __this, double value)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->SeekProgress(value);
    __this->CheckUpdate();
}

void Player__Update(Player* __this, ::uObject* s, ::uObject* a)
{
    __this->CheckUpdate();
}

void Player__CheckUpdate(Player* __this)
{
    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate)
    {
        if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Step())
        {
            __this->Done();
        }

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate)
    {
        ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Step();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrengthUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->StrengthUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    __this->UpdateStates();

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate || ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();

        if (!__this->AnyEffect())
        {
            __this->Disable();
        }
    }
}

void Player__Start(Player* __this)
{
    if (!__this->_isStarted)
    {
        __this->_isStarted = true;

        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Animations::Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Player__CheckUpdate, __this), 0);
        }
    }
}

void Player__Stop(Player* __this)
{
    if (__this->_isStarted)
    {
        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Animations::Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Player__CheckUpdate, __this), 0);
        }

        __this->_isStarted = false;
    }
}

void Player__Done(Player* __this)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate = false;

    if (!__this->_isDone)
    {
        __this->_isDone = true;
        __this->CheckUpdate();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->DoneCallback(), NULL))
        {
            ::uPtr< ::uDelegate*>(__this->DoneCallback())->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }
}

void Player__Disable(Player* __this)
{
    if (__this->_states != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(__this->_states)->Length(); i++)
        {
            ::uPtr< ::app::Fuse::Animations::AnimatorState*>(::uPtr< ::uArray*>(__this->_states)->Item< ::app::Fuse::Animations::AnimatorState*>(i))->Disable();
        }

        __this->_states = NULL;
        __this->CheckUpdate();
    }
}

void Player__SeekProgress(Player* __this, double progress, bool triggerUpdate)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->SeekProgress(progress);
    __this->_isDone = false;
    __this->CheckUpdate();

    if (triggerUpdate && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void Player__UpdateStates(Player* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if ((__this->_states == NULL) && !__this->AnyEffect())
    {
        return;
    }

    bool allDone = true;
    double interval = (__this->_seekDirection == 0) ? ::app::Uno::Time__get_FrameInterval(NULL) : -::app::Uno::Time__get_FrameInterval(NULL);

    for (array_123 = __this->States(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Animations::AnimatorState* s = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Animations::AnimatorState*>(index_124);
        bool done = bool();

        if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress)
        {
            done = ::uPtr< ::app::Fuse::Animations::AnimatorState*>(s)->SeekProgress(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }
        else
        {
            done = s->SeekTime(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }

        allDone = allDone && done;
    }

    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->MaskLastTime();

    if (allDone && ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->CanTriggerAllDone(__this->_seekDirection))
    {
        __this->Done();
    }
}

void Player__PlayToProgress(Player* __this, double progress)
{
    __this->_seekDirection = (progress >= ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress()) ? 0 : 1;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToProgress(progress);
    __this->_isDone = false;
    __this->CheckUpdate();
}

void Player__PlayToEnd(Player* __this)
{
    __this->_seekDirection = 0;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayForward();
    __this->_isDone = false;
    __this->CheckUpdate();
}

void Player__PlayToStart(Player* __this)
{
    __this->_seekDirection = 1;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayBackward();
    __this->_isDone = false;
    __this->CheckUpdate();
}

void Player__FadeIn(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToEnd();
    __this->CheckUpdate();
}

void Player__FadeOut(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToStart();
    __this->CheckUpdate();
}

void Player___ObjInit(Player* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    __this->_progress = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 0.0);
    __this->_strength = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 1.0);
    __this->Animation(animation);
    __this->Node(elm);
    __this->Variant(variant);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->AlterDuration(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(__this->Variant()));
}

Player* Player__New_1(::uStatic* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    Player* inst = (::app::Fuse::Animations::Player*)::uAllocObject(sizeof(::app::Fuse::Animations::Player), ::app::Fuse::Animations::Player__typeof());
    inst->_ObjInit(elm, animation, variant);
    return inst;
}

}}}
