// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_TWEEN_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_TWEEN_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationTween;

struct NavigationTween__uType : ::uClassType
{
};

NavigationTween__uType* NavigationTween__typeof();

int NavigationTween__get_Easing(NavigationTween* __this);
void NavigationTween__set_Easing(NavigationTween* __this, int value);
double NavigationTween__get_Duration(NavigationTween* __this);
void NavigationTween__set_Duration(NavigationTween* __this, double value);
int NavigationTween__get_EasingBack(NavigationTween* __this);
void NavigationTween__set_EasingBack(NavigationTween* __this, int value);
double NavigationTween__get_DurationBack(NavigationTween* __this);
void NavigationTween__set_DurationBack(NavigationTween* __this, double value);

struct NavigationTween : ::uObject
{
    int _easing;
    double _duration;
    int _easingBack;
    bool _hasEasingBack;
    double _durationBack;
    bool _hasDurationBack;

    int Easing() { return NavigationTween__get_Easing(this); }
    void Easing(int value) { NavigationTween__set_Easing(this, value); }
    double Duration() { return NavigationTween__get_Duration(this); }
    void Duration(double value) { NavigationTween__set_Duration(this, value); }
    int EasingBack() { return NavigationTween__get_EasingBack(this); }
    void EasingBack(int value) { NavigationTween__set_EasingBack(this, value); }
    double DurationBack() { return NavigationTween__get_DurationBack(this); }
    void DurationBack(double value) { NavigationTween__set_DurationBack(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
