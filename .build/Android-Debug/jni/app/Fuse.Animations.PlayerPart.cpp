// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.PlayerPart.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Animations {

PlayerPart__uType* PlayerPart__typeof()
{
    static PlayerPart__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PlayerPart__uType*)::uAllocClassType(sizeof(PlayerPart__uType), "Fuse.Animations.PlayerPart", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double PlayerPart__get_Progress(PlayerPart* __this)
{
    if (__this->IsProgress)
    {
        return __this->Current;
    }
    else
    {
        return ::app::Uno::Math__Clamp(NULL, __this->Current / __this->Duration, 0.0, 1.0);
    }
}

void PlayerPart__PlayToProgress(PlayerPart* __this, double progress)
{
    __this->Animate = true;
    __this->MarkSource();

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Target = progress;
    }
    else
    {
        __this->IsProgress = false;
        __this->Target = progress * __this->Duration;
    }
}

void PlayerPart__MarkSource(PlayerPart* __this)
{
    __this->Source = __this->Current;
    __this->OvertimeSource = __this->OvertimeCurrent;
    __this->SourceTime = ::app::Uno::Time__get_FrameTime(NULL);
}

void PlayerPart__PlayToEnd(PlayerPart* __this)
{
    __this->PlayToProgress(1.0);
}

void PlayerPart__PlayForward(PlayerPart* __this)
{
    __this->PlayToProgress(DBL_INF);
}

void PlayerPart__PlayBackward(PlayerPart* __this)
{
    __this->PlayToProgress(-DBL_INF);
}

void PlayerPart__PlayToStart(PlayerPart* __this)
{
    __this->PlayToProgress(0.0);
}

bool PlayerPart__Step(PlayerPart* __this)
{
    double elapsed = ::app::Uno::Time__get_FrameTime(NULL) - __this->SourceTime;

    if (__this->Target > __this->Source)
    {
        __this->Current = __this->IsProgress ? 1.0 : ::app::Uno::Math__Min(NULL, elapsed + __this->Source, __this->Duration);
        __this->OvertimeCurrent = ::app::Uno::Math__Max(NULL, (elapsed + __this->Source) - __this->Duration, 0.0) + __this->OvertimeSource;
    }
    else
    {
        __this->Current = __this->IsProgress ? 0.0 : ::app::Uno::Math__Max(NULL, __this->Source - elapsed, 0.0);
        __this->OvertimeCurrent = ::app::Uno::Math__Min(NULL, __this->Source - elapsed, 0.0) + __this->OvertimeSource;
    }

    if (((__this->Target >= __this->Source) && (__this->Current >= __this->Target)) || ((__this->Target <= __this->Source) && (__this->Current <= __this->Target)))
    {
        __this->Current = __this->Target;
        __this->Animate = false;
        return true;
    }

    return false;
}

bool PlayerPart__CanTriggerAllDone(PlayerPart* __this, int dir)
{
    if (dir == 0)
    {
        return (__this->Target == DBL_INF) && (__this->Current >= __this->Duration);
    }

    return (__this->Target == -DBL_INF) && (__this->Current <= 0.0);
}

void PlayerPart__SeekProgress(PlayerPart* __this, double p)
{
    p = ::app::Uno::Math__Clamp(NULL, p, 0.0, 1.0);
    __this->Animate = false;

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Current = p;
    }
    else
    {
        __this->IsProgress = false;
        __this->Current = p * __this->Duration;
    }
}

void PlayerPart__AlterDuration(PlayerPart* __this, double t)
{
    double p = __this->Progress();
    __this->Duration = t;
    __this->SeekProgress(p);
}

void PlayerPart__MaskLastTime(PlayerPart* __this)
{
    __this->_lastFullTime = (__this->IsProgress ? 0.0 : __this->Current) + __this->OvertimeCurrent;
}

void PlayerPart___ObjInit(PlayerPart* __this, double currentProgress)
{
    __this->IsProgress = true;
    __this->Current = currentProgress;
}

PlayerPart* PlayerPart__New_1(::uStatic* __this, double currentProgress)
{
    PlayerPart* inst = (::app::Fuse::Animations::PlayerPart*)::uAllocObject(sizeof(::app::Fuse::Animations::PlayerPart), ::app::Fuse::Animations::PlayerPart__typeof());
    inst->_ObjInit(currentProgress);
    return inst;
}

}}}
