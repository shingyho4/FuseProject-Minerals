// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Translation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Translation.h>

namespace app {
namespace Fuse {
namespace Animations {

TransformAnimator__Fuse_Translation__uType* TransformAnimator__Fuse_Translation__typeof()
{
    static TransformAnimator__Fuse_Translation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TransformAnimator__Fuse_Translation__uType*)::uAllocClassType(sizeof(TransformAnimator__Fuse_Translation__uType), "Fuse.Animations.TransformAnimator<Fuse.Translation>", ::app::Fuse::Animations::ProgressAnimator__typeof(), 0, 1);
        type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))TransformAnimator__Fuse_Translation__CreateState;

        type->StrongRefOffsets[0] = offsetof(TransformAnimator__Fuse_Translation, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* TransformAnimator__Fuse_Translation__get_Target(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_Target;
}

void TransformAnimator__Fuse_Translation__set_Target(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

int TransformAnimator__Fuse_Translation__get_Priority(TransformAnimator__Fuse_Translation* __this)
{
    return __this->_Priority;
}

void TransformAnimator__Fuse_Translation__set_Priority(TransformAnimator__Fuse_Translation* __this, int value)
{
    __this->_Priority = value;
}

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Translation__CreateState(TransformAnimator__Fuse_Translation* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation* tas = ::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation__New_1(NULL, __this, p);
    return (::app::Fuse::Animations::AnimatorState*)tas;
}

void TransformAnimator__Fuse_Translation___ObjInit_2(TransformAnimator__Fuse_Translation* __this)
{
    ::app::Fuse::Animations::ProgressAnimator___ObjInit_1(__this);
    __this->MixOp(0);
}

}}}
