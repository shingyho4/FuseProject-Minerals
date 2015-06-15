// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.OpenAnimator.h>
#include <app/Fuse.Animations.OpenAnimatorState.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

OpenAnimatorState__uType* OpenAnimatorState__typeof()
{
    static OpenAnimatorState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (OpenAnimatorState__uType*)::uAllocClassType(sizeof(OpenAnimatorState__uType), "Fuse.Animations.OpenAnimatorState", ::app::Fuse::Animations::AnimatorState__typeof(), 0, 1);
        type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekProgress;
        type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekTime;

        type->StrongRefOffsets[0] = offsetof(OpenAnimatorState, Animator);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Animator";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool OpenAnimatorState__SeekProgress(OpenAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    return __this->SeekTime(progress * __this->TotalDuration, interval, dir, strength);
}

bool OpenAnimatorState__SeekTime(OpenAnimatorState* __this, double nominal, double interval, int dir, double strength)
{
    double delay = ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir == 0) ? (nominal > (delay - 9.9999997473787516e-06)) : (nominal > (delay + 9.9999997473787516e-06));

    if (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->HasDuration() && (nominal > ((delay + ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
    {
        on = false;
    }

    bool mayEnd = (dir == 0) ? (nominal >= (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06)) : (nominal <= (delay + 9.9999997473787516e-06));

    if (on || !__this->_seekDone)
    {
        __this->_seekDone = __this->Seek(on, (float)interval, (float)strength, dir);
    }

    return __this->_seekDone && mayEnd;
}

void OpenAnimatorState___ObjInit_1(OpenAnimatorState* __this, ::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->_seekDone = true;
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
}

}}}
