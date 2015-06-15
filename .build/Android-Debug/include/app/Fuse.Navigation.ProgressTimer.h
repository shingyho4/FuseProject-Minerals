// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_PROGRESS_TIMER_H__
#define __APP_FUSE_NAVIGATION_PROGRESS_TIMER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct ProgressSpan; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct ProgressTimer;

struct ProgressTimer__uType : ::uClassType
{
};

ProgressTimer__uType* ProgressTimer__typeof();

int ProgressTimer__get_Variant(ProgressTimer* __this);
double ProgressTimer__get_TimeLeft(ProgressTimer* __this);
double ProgressTimer__get_EasedNormalizedProgress(ProgressTimer* __this);
double ProgressTimer__get_EasedProgress(ProgressTimer* __this);
::app::Fuse::Navigation::ProgressSpan* ProgressTimer__get_ProgressSpan(ProgressTimer* __this);
ProgressTimer* ProgressTimer__Start(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
double ProgressTimer__Ease(ProgressTimer* __this, double progress);
void ProgressTimer__Update(ProgressTimer* __this);
void ProgressTimer___ObjInit(ProgressTimer* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
ProgressTimer* ProgressTimer__New_1(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);

struct ProgressTimer : ::uObject
{
    double _duration;
    ::uStrong< ::app::Fuse::Navigation::ProgressSpan*> _progressSpan;
    int _easing;
    int _variant;
    double _elapsedTime;

    double Ease(double progress) { return ProgressTimer__Ease(this, progress); }
    void Update() { ProgressTimer__Update(this); }
    void _ObjInit(double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant) { ProgressTimer___ObjInit(this, duration, progressSpan, easing, variant); }
    int Variant() { return ProgressTimer__get_Variant(this); }
    double TimeLeft() { return ProgressTimer__get_TimeLeft(this); }
    double EasedNormalizedProgress() { return ProgressTimer__get_EasedNormalizedProgress(this); }
    double EasedProgress() { return ProgressTimer__get_EasedProgress(this); }
    ::app::Fuse::Navigation::ProgressSpan* ProgressSpan() { return ProgressTimer__get_ProgressSpan(this); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
