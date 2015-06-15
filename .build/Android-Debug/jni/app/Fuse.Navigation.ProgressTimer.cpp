// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Fuse.Navigation.ProgressSpan.h>
#include <app/Fuse.Navigation.ProgressTimer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Navigation {

ProgressTimer__uType* ProgressTimer__typeof()
{
    static ProgressTimer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProgressTimer__uType*)::uAllocClassType(sizeof(ProgressTimer__uType), "Fuse.Navigation.ProgressTimer", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(ProgressTimer, _progressSpan);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_progressSpan";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int ProgressTimer__get_Variant(ProgressTimer* __this)
{
    return __this->_variant;
}

double ProgressTimer__get_TimeLeft(ProgressTimer* __this)
{
    return ::app::Uno::Math__Clamp(NULL, __this->_duration - __this->_elapsedTime, 0.0, __this->_duration);
}

double ProgressTimer__get_EasedNormalizedProgress(ProgressTimer* __this)
{
    double progress = __this->Ease(__this->_elapsedTime / __this->_duration);

    if (__this->_variant == 1)
    {
        progress = 1.0 - progress;
    }

    return progress;
}

double ProgressTimer__get_EasedProgress(ProgressTimer* __this)
{
    return (__this->EasedNormalizedProgress() * (::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->To() - ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->From())) + ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->From();
}

::app::Fuse::Navigation::ProgressSpan* ProgressTimer__get_ProgressSpan(ProgressTimer* __this)
{
    return __this->_progressSpan;
}

ProgressTimer* ProgressTimer__Start(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    return ProgressTimer__New_1(NULL, duration, progressSpan, easing, variant);
}

double ProgressTimer__Ease(ProgressTimer* __this, double progress)
{
    return (double)::uPtr< ::uDelegate*>(::app::Fuse::Animations::EasingFunctions__FromEasing(NULL, __this->_easing))->Invoke< float, float>((float)progress);
}

void ProgressTimer__Update(ProgressTimer* __this)
{
    __this->_elapsedTime = ::app::Uno::Math__Min(NULL, __this->_elapsedTime + ::app::Uno::Time__get_FrameInterval(NULL), __this->_duration);
}

void ProgressTimer___ObjInit(ProgressTimer* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    __this->_duration = duration;
    __this->_easing = easing;
    __this->_variant = variant;
    __this->_progressSpan = progressSpan;
}

ProgressTimer* ProgressTimer__New_1(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    ProgressTimer* inst = (::app::Fuse::Navigation::ProgressTimer*)::uAllocObject(sizeof(::app::Fuse::Navigation::ProgressTimer), ::app::Fuse::Navigation::ProgressTimer__typeof());
    inst->_ObjInit(duration, progressSpan, easing, variant);
    return inst;
}

}}}
