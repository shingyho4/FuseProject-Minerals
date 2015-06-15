// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.NothingAnimatorState.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Animations {

NothingAnimatorState__uType* NothingAnimatorState__typeof()
{
    static NothingAnimatorState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NothingAnimatorState__uType*)::uAllocClassType(sizeof(NothingAnimatorState__uType), "Fuse.Animations.NothingAnimatorState", ::app::Fuse::Animations::ProgressAnimatorState__typeof());
        type->__fp_Seek = (void(*)(::app::Fuse::Animations::ProgressAnimatorState*, float, float))NothingAnimatorState__Seek;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NothingAnimatorState__Seek(NothingAnimatorState* __this, float progress, float strength)
{
}

void NothingAnimatorState___ObjInit_2(NothingAnimatorState* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::ProgressAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::ProgressAnimator*)animator, p, NULL);
}

NothingAnimatorState* NothingAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* inst = (::app::Fuse::Animations::NothingAnimatorState*)::uAllocObject(sizeof(::app::Fuse::Animations::NothingAnimatorState), ::app::Fuse::Animations::NothingAnimatorState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

}}}
