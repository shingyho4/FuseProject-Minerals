// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Player.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

TriggerAnimationState__uType* TriggerAnimationState__typeof()
{
    static TriggerAnimationState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TriggerAnimationState__uType*)::uAllocClassType(sizeof(TriggerAnimationState__uType), "Fuse.Animations.TriggerAnimationState", ::uObject__typeof(), 0, 7);
        type->StrongRefOffsets[0] = offsetof(TriggerAnimationState, _node);
        type->StrongRefOffsets[1] = offsetof(TriggerAnimationState, _forePlayer);
        type->StrongRefOffsets[2] = offsetof(TriggerAnimationState, _backPlayer);
        type->StrongRefOffsets[3] = offsetof(TriggerAnimationState, _curPlayer);
        type->StrongRefOffsets[4] = offsetof(TriggerAnimationState, ProgressUpdated);
        type->StrongRefOffsets[5] = offsetof(TriggerAnimationState, PlaybackDone);
        type->StrongRefOffsets[6] = offsetof(TriggerAnimationState, _Animation);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_node";
        type->StrongRefNames[1] = "_forePlayer";
        type->StrongRefNames[2] = "_backPlayer";
        type->StrongRefNames[3] = "_curPlayer";
        type->StrongRefNames[4] = "ProgressUpdated";
        type->StrongRefNames[5] = "PlaybackDone";
        type->StrongRefNames[6] = "_Animation";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::TriggerAnimation* TriggerAnimationState__get_Animation(TriggerAnimationState* __this)
{
    return __this->_Animation;
}

void TriggerAnimationState__set_Animation(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

double TriggerAnimationState__get_Progress(TriggerAnimationState* __this)
{
    if (__this->_curPlayer != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress();
    }

    return 0.0;
}

double TriggerAnimationState__get_PreviousProgress(TriggerAnimationState* __this)
{
    return __this->_prevProgress;
}

double TriggerAnimationState__get_CurrentTotalDuration(TriggerAnimationState* __this)
{
    if (__this->_curPlayer == NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    }

    return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->TotalDuration();
}

bool TriggerAnimationState__get_ProgressFullOn(TriggerAnimationState* __this)
{
    return __this->Progress() >= 1.0;
}

bool TriggerAnimationState__get_ProgressFullOff(TriggerAnimationState* __this)
{
    return __this->Progress() <= 0.0;
}

void TriggerAnimationState__Dispose(TriggerAnimationState* __this)
{
    if (__this->_forePlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_forePlayer)->Disable();
        __this->_forePlayer = NULL;
    }

    if (__this->_backPlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->Disable();
        __this->_backPlayer = NULL;
    }

    __this->_curPlayer = NULL;
    __this->_node = NULL;
}

void TriggerAnimationState__TrackProgress(TriggerAnimationState* __this, ::app::Fuse::Animations::Player* player)
{
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->ProgressUpdated = ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)::app::Fuse::Animations::TriggerAnimationState__OnProgressUpdated, __this);
    player->DoneCallback(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)::app::Fuse::Animations::TriggerAnimationState__OnPlaybackDone, __this));
}

void TriggerAnimationState__OnProgressUpdated(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }

    __this->_prevProgress = __this->Progress();
}

void TriggerAnimationState__OnPlaybackDone(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetPlayer(TriggerAnimationState* __this, int variant, bool noFade)
{
    ::app::Fuse::Animations::Player* cur;
    ::app::Fuse::Animations::Player* prev;
    variant = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->RestrictVariant(variant);

    if ((__this->_curPlayer != NULL) && (__this->_curPlayerVariant == variant))
    {
        return __this->_curPlayer;
    }

    bool isNew = false;

    if (variant == 0)
    {
        if (__this->_forePlayer == NULL)
        {
            __this->_forePlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            isNew = true;
        }

        cur = __this->_forePlayer;
        prev = __this->_backPlayer;
    }
    else
    {
        if (__this->_backPlayer == NULL)
        {
            __this->_backPlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = __this->_backPlayer;
        prev = __this->_forePlayer;
    }

    if (isNew)
    {
        __this->TrackProgress(cur);
    }

    __this->_curPlayer = cur;
    __this->_curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        ::uPtr< ::app::Fuse::Animations::Player*>(cur)->SeekProgress(prevProgress, false);

        if (isNew)
        {
            cur->Strength(0.0);
        }

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Strength(0.0);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::app::Uno::Math__Min(NULL, remainTime, 0.5);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->FadeIn(fadeTime);
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

void TriggerAnimationState__PlayOff(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(1, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToStart();
}

void TriggerAnimationState__PlayOn(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(0, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToEnd();
}

void TriggerAnimationState__PlayEnd(TriggerAnimationState* __this, bool on)
{
    if (on)
    {
        __this->PlayOn();
    }
    else
    {
        __this->PlayOff();
    }
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetCurrentPlayer(TriggerAnimationState* __this, int tendTo)
{
    if (((__this->_curPlayer != NULL) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() < 1.0)) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() > 0.0))
    {
        return __this->_curPlayer;
    }

    return ::uAs< ::app::Fuse::Animations::Player*>(__this->GetPlayer(tendTo, false), ::app::Fuse::Animations::Player__typeof());
}

void TriggerAnimationState__SeekProgress(TriggerAnimationState* __this, double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::app::Fuse::Animations::Player* player = ((flags & 1) == 1) ? __this->GetPlayer(tendTo, true) : __this->GetCurrentPlayer(tendTo);

    if (bypassUpdate)
    {
        __this->_prevProgress = newProgress;
    }

    ::uPtr< ::app::Fuse::Animations::Player*>(player)->SeekProgress(newProgress, !bypassUpdate);
}

void TriggerAnimationState__PlayToProgress(TriggerAnimationState* __this, double progress, int tendTo)
{
    ::app::Fuse::Animations::Player* player = __this->GetCurrentPlayer(tendTo);
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->PlayToProgress(progress);
}

void TriggerAnimationState___ObjInit(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    __this->Animation(animation);
    __this->_node = node;
}

TriggerAnimationState* TriggerAnimationState__New_1(::uStatic* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    TriggerAnimationState* inst = (::app::Fuse::Animations::TriggerAnimationState*)::uAllocObject(sizeof(::app::Fuse::Animations::TriggerAnimationState), ::app::Fuse::Animations::TriggerAnimationState__typeof());
    inst->_ObjInit(animation, node);
    return inst;
}

void TriggerAnimationState__add_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->ProgressUpdated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressUpdated, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__add_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

}}}
