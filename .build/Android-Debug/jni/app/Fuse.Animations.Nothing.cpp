// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.NothingAnimatorState.h>

namespace app {
namespace Fuse {
namespace Animations {

Nothing__uType* Nothing__typeof()
{
    static Nothing__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Nothing__uType*)::uAllocClassType(sizeof(Nothing__uType), "Fuse.Animations.Nothing", ::app::Fuse::Animations::ProgressAnimator__typeof());
        type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Nothing__CreateState;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::AnimatorState* Nothing__CreateState(Nothing* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::NothingAnimatorState__New_1(NULL, __this, p);
}

void Nothing___ObjInit_2(Nothing* __this)
{
    ::app::Fuse::Animations::ProgressAnimator___ObjInit_1(__this);
}

Nothing* Nothing__New_1(::uStatic* __this)
{
    Nothing* inst = (::app::Fuse::Animations::Nothing*)::uAllocObject(sizeof(::app::Fuse::Animations::Nothing), ::app::Fuse::Animations::Nothing__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
