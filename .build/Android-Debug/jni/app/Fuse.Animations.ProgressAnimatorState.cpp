// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Animations.ProgressAnimatorState.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

ProgressAnimatorState__uType* ProgressAnimatorState__typeof()
{
    static ProgressAnimatorState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProgressAnimatorState__uType*)::uAllocClassType(sizeof(ProgressAnimatorState__uType), "Fuse.Animations.ProgressAnimatorState", ::app::Fuse::Animations::AnimatorState__typeof(), 0, 1);
        type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))ProgressAnimatorState__SeekProgress;
        type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))ProgressAnimatorState__SeekTime;

        type->StrongRefOffsets[0] = offsetof(ProgressAnimatorState, Animator);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Animator";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ProgressAnimatorState__SeekProgress(ProgressAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    progress = ::app::Uno::Math__Clamp(NULL, progress, 0.0, 1.0);
    float ease = ::uPtr< ::uDelegate*>(::app::Fuse::Animations::EasingFunctions__FromEasing(NULL, ::uPtr< ::app::Fuse::Animations::ProgressAnimator*>(__this->Animator)->GetEasing(__this->Variant)))->Invoke< float, float>((float)progress);
    __this->Seek(ease, (float)strength);
    return (dir == 0) ? (progress >= 1.0) : (progress <= 0.0);
}

bool ProgressAnimatorState__SeekTime(ProgressAnimatorState* __this, double elapsed, double interval, int dir, double strength)
{
    double relTime = elapsed - ::uPtr< ::app::Fuse::Animations::ProgressAnimator*>(__this->Animator)->GetDelay(__this->Variant);
    double duration = ::uPtr< ::app::Fuse::Animations::ProgressAnimator*>(__this->Animator)->GetDurationWithoutDelay(__this->Variant);
    float progress = float();

    if (duration < 9.9999997473787516e-06)
    {
        progress = (float)(((dir == 0) ? (relTime >= -9.9999997473787516e-06) : (relTime > 9.9999997473787516e-06)) ? 1 : 0);
    }
    else
    {
        progress = (float)(relTime / duration);
    }

    return __this->SeekProgress((double)progress, interval, dir, strength);
}

void ProgressAnimatorState___ObjInit_1(ProgressAnimatorState* __this, ::app::Fuse::Animations::ProgressAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
}

}}}
