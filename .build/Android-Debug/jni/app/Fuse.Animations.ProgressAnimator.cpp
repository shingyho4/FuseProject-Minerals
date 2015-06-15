// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

ProgressAnimator__uType* ProgressAnimator__typeof()
{
    static ProgressAnimator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProgressAnimator__uType*)::uAllocClassType(sizeof(ProgressAnimator__uType), "Fuse.Animations.ProgressAnimator", ::app::Fuse::Animations::Animator__typeof());
        type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))ProgressAnimator__get_AnimatorVariant;
        type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))ProgressAnimator__GetDurationWithDelay;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int ProgressAnimator__get_AnimatorVariant(ProgressAnimator* __this)
{
    return ((__this->_hasEasingBack || __this->_hasDelayBack) || __this->_hasDurationBack) ? 2 : 0;
}

int ProgressAnimator__get_Easing(ProgressAnimator* __this)
{
    return __this->_easing;
}

void ProgressAnimator__set_Easing(ProgressAnimator* __this, int value)
{
    __this->_easing = value;
}

int ProgressAnimator__get_EasingBack(ProgressAnimator* __this)
{
    return __this->_hasEasingBack ? __this->_easingBack : __this->Easing();
}

void ProgressAnimator__set_EasingBack(ProgressAnimator* __this, int value)
{
    __this->_easingBack = value;
    __this->_hasEasingBack = true;
}

double ProgressAnimator__get_DelayBack(ProgressAnimator* __this)
{
    return __this->_hasDelayBack ? __this->_delayBack : __this->Delay();
}

void ProgressAnimator__set_DelayBack(ProgressAnimator* __this, double value)
{
    __this->_delayBack = value;
    __this->_hasDelayBack = true;
}

double ProgressAnimator__get_DurationBack(ProgressAnimator* __this)
{
    return __this->_hasDurationBack ? __this->_durationBack : __this->Duration();
}

void ProgressAnimator__set_DurationBack(ProgressAnimator* __this, double value)
{
    __this->_durationBack = value;
    __this->_hasDurationBack = true;
}

double ProgressAnimator__get_Duration(ProgressAnimator* __this)
{
    return __this->_Duration;
}

void ProgressAnimator__set_Duration(ProgressAnimator* __this, double value)
{
    __this->_Duration = value;
}

double ProgressAnimator__GetDelay(ProgressAnimator* __this, int dir)
{
    if ((dir == 1) && __this->_hasDelayBack)
    {
        return __this->DelayBack();
    }

    return __this->Delay();
}

double ProgressAnimator__GetDurationWithoutDelay(ProgressAnimator* __this, int dir)
{
    if (dir == 1)
    {
        return __this->DurationBack();
    }
    else
    {
        return __this->Duration();
    }
}

double ProgressAnimator__GetDurationWithDelay(ProgressAnimator* __this, int dir)
{
    if (dir == 1)
    {
        return __this->DurationBack() + __this->DelayBack();
    }

    return __this->Duration() + __this->Delay();
}

int ProgressAnimator__GetEasing(ProgressAnimator* __this, int dir)
{
    if (dir == 1)
    {
        return __this->EasingBack();
    }

    return __this->Easing();
}

void ProgressAnimator___ObjInit_1(ProgressAnimator* __this)
{
    ::app::Fuse::Animations::Animator___ObjInit(__this);
}

}}}
