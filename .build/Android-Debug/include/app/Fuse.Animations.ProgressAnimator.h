// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PROGRESS_ANIMATOR_H__
#define __APP_FUSE_ANIMATIONS_PROGRESS_ANIMATOR_H__

#include <app/Fuse.Animations.Animator.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct ProgressAnimator;

struct ProgressAnimator__uType : ::app::Fuse::Animations::Animator__uType
{
};

ProgressAnimator__uType* ProgressAnimator__typeof();

int ProgressAnimator__get_AnimatorVariant(ProgressAnimator* __this);
int ProgressAnimator__get_Easing(ProgressAnimator* __this);
void ProgressAnimator__set_Easing(ProgressAnimator* __this, int value);
int ProgressAnimator__get_EasingBack(ProgressAnimator* __this);
void ProgressAnimator__set_EasingBack(ProgressAnimator* __this, int value);
double ProgressAnimator__get_DelayBack(ProgressAnimator* __this);
void ProgressAnimator__set_DelayBack(ProgressAnimator* __this, double value);
double ProgressAnimator__get_DurationBack(ProgressAnimator* __this);
void ProgressAnimator__set_DurationBack(ProgressAnimator* __this, double value);
double ProgressAnimator__get_Duration(ProgressAnimator* __this);
void ProgressAnimator__set_Duration(ProgressAnimator* __this, double value);
double ProgressAnimator__GetDelay(ProgressAnimator* __this, int dir);
double ProgressAnimator__GetDurationWithoutDelay(ProgressAnimator* __this, int dir);
double ProgressAnimator__GetDurationWithDelay(ProgressAnimator* __this, int dir);
int ProgressAnimator__GetEasing(ProgressAnimator* __this, int dir);
void ProgressAnimator___ObjInit_1(ProgressAnimator* __this);

struct ProgressAnimator : ::app::Fuse::Animations::Animator
{
    int _easing;
    int _easingBack;
    bool _hasEasingBack;
    bool _hasDelayBack;
    double _delayBack;
    double _durationBack;
    bool _hasDurationBack;
    double _Duration;

    double GetDelay(int dir) { return ProgressAnimator__GetDelay(this, dir); }
    double GetDurationWithoutDelay(int dir) { return ProgressAnimator__GetDurationWithoutDelay(this, dir); }
    int GetEasing(int dir) { return ProgressAnimator__GetEasing(this, dir); }
    void _ObjInit_1() { ProgressAnimator___ObjInit_1(this); }
    int Easing() { return ProgressAnimator__get_Easing(this); }
    void Easing(int value) { ProgressAnimator__set_Easing(this, value); }
    int EasingBack() { return ProgressAnimator__get_EasingBack(this); }
    void EasingBack(int value) { ProgressAnimator__set_EasingBack(this, value); }
    double DelayBack() { return ProgressAnimator__get_DelayBack(this); }
    void DelayBack(double value) { ProgressAnimator__set_DelayBack(this, value); }
    double DurationBack() { return ProgressAnimator__get_DurationBack(this); }
    void DurationBack(double value) { ProgressAnimator__set_DurationBack(this, value); }
    double Duration() { return ProgressAnimator__get_Duration(this); }
    void Duration(double value) { ProgressAnimator__set_Duration(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
