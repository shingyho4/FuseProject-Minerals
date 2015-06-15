// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Animations.PropertyAnimatorState__float4.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

PropertyAnimatorState__float4__uType* PropertyAnimatorState__float4__typeof()
{
    static PropertyAnimatorState__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PropertyAnimatorState__float4__uType*)::uAllocClassType(sizeof(PropertyAnimatorState__float4__uType), "Fuse.Animations.PropertyAnimatorState<float4>", ::app::Fuse::Animations::ProgressAnimatorState__typeof(), 0, 2);
        type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))PropertyAnimatorState__float4__Disable;
        type->__fp_Seek = (void(*)(::app::Fuse::Animations::ProgressAnimatorState*, float, float))PropertyAnimatorState__float4__Seek;

        type->StrongRefOffsets[0] = offsetof(PropertyAnimatorState__float4, mixHandle);
        type->StrongRefOffsets[1] = offsetof(PropertyAnimatorState__float4, Animator_1);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "mixHandle";
        type->StrongRefNames[1] = "Animator";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PropertyAnimatorState__float4__Disable(PropertyAnimatorState__float4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

void PropertyAnimatorState__float4__Seek(PropertyAnimatorState__float4* __this, float progress, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 222);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Value(), strength * progress);
}

void PropertyAnimatorState__float4___ObjInit_2(PropertyAnimatorState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::ProgressAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::ProgressAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->MixOp());
}

PropertyAnimatorState__float4* PropertyAnimatorState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    PropertyAnimatorState__float4* inst = (::app::Fuse::Animations::PropertyAnimatorState__float4*)::uAllocObject(sizeof(::app::Fuse::Animations::PropertyAnimatorState__float4), ::app::Fuse::Animations::PropertyAnimatorState__float4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

}}}
