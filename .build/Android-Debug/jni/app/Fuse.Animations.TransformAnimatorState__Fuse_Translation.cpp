// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.Animations.TransformAnimatorState__Fuse_Translation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

TransformAnimatorState__Fuse_Translation__uType* TransformAnimatorState__Fuse_Translation__typeof()
{
    static TransformAnimatorState__Fuse_Translation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TransformAnimatorState__Fuse_Translation__uType*)::uAllocClassType(sizeof(TransformAnimatorState__Fuse_Translation__uType), "Fuse.Animations.TransformAnimatorState<Fuse.Translation>", ::app::Fuse::Animations::ProgressAnimatorState__typeof(), 0, 4);
        type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))TransformAnimatorState__Fuse_Translation__Disable;
        type->__fp_Seek = (void(*)(::app::Fuse::Animations::ProgressAnimatorState*, float, float))TransformAnimatorState__Fuse_Translation__Seek;

        type->StrongRefOffsets[0] = offsetof(TransformAnimatorState__Fuse_Translation, Animator_1);
        type->StrongRefOffsets[1] = offsetof(TransformAnimatorState__Fuse_Translation, mixHandle);
        type->StrongRefOffsets[2] = offsetof(TransformAnimatorState__Fuse_Translation, transform);
        type->StrongRefOffsets[3] = offsetof(TransformAnimatorState__Fuse_Translation, _matAct);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Animator";
        type->StrongRefNames[1] = "mixHandle";
        type->StrongRefNames[2] = "transform";
        type->StrongRefNames[3] = "_matAct";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TransformAnimatorState__Fuse_Translation__Disable(TransformAnimatorState__Fuse_Translation* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->remove_MatrixChanged(__this->_matAct);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

void TransformAnimatorState__Fuse_Translation__Seek(TransformAnimatorState__Fuse_Translation* __this, float progress, float strength)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 2349);
        return;
    }

    __this->_inSeek = true;
    ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Update(__this->Node, __this->transform);
    __this->_lastStrength = progress * strength;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    __this->_inSeek = false;
}

void TransformAnimatorState__Fuse_Translation__OnMatrixChanged(TransformAnimatorState__Fuse_Translation* __this, ::app::Fuse::Transform* ignore)
{
    if ((!__this->_inSeek && (__this->mixHandle != NULL)) && (__this->transform != NULL))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, __this->_lastStrength);
    }
}

void TransformAnimatorState__Fuse_Translation___ObjInit_2(TransformAnimatorState__Fuse_Translation* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Translation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Translation__New_1(NULL);
    ::app::Fuse::Animations::ProgressAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::ProgressAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->MixOp(), ::uPtr< ::app::Fuse::Animations::TransformAnimator__Fuse_Translation*>(__this->Animator_1)->Priority());
    __this->_matAct = ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation__OnMatrixChanged, __this);
    ::uPtr< ::app::Fuse::Transform*>(::uAs< ::app::Fuse::Transform*>(__this->transform, ::app::Fuse::Transform__typeof()))->add_MatrixChanged(__this->_matAct);
}

TransformAnimatorState__Fuse_Translation* TransformAnimatorState__Fuse_Translation__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Translation* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState__Fuse_Translation* inst = (::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation*)::uAllocObject(sizeof(::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation), ::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

}}}
