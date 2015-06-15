// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.OpenAnimator.h>
#include <app/Fuse.Animations.Spin.h>
#include <app/Fuse.Animations.SpinState.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

SpinState__uType* SpinState__typeof()
{
    static SpinState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SpinState__uType*)::uAllocClassType(sizeof(SpinState__uType), "Fuse.Animations.SpinState", ::app::Fuse::Animations::OpenAnimatorState__typeof(), 0, 3);
        type->__fp_Seek = (bool(*)(::app::Fuse::Animations::OpenAnimatorState*, bool, float, float, int))SpinState__Seek;

        type->StrongRefOffsets[0] = offsetof(SpinState, Animator_1);
        type->StrongRefOffsets[1] = offsetof(SpinState, mixHandle);
        type->StrongRefOffsets[2] = offsetof(SpinState, transform);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Animator";
        type->StrongRefNames[1] = "mixHandle";
        type->StrongRefNames[2] = "transform";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool SpinState__Seek(SpinState* __this, bool on, float interval, float strength, int dir)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.1.0\\$.uno"), 1972);
        return true;
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = __this->degrees + ((double)(interval * 360.0f) * ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Hertz());

    if (on)
    {
        __this->degrees = ::app::Uno::Math__Mod(NULL, __this->degrees, 360.0);
    }
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    ::uPtr< ::app::Fuse::Rotation*>(__this->transform)->Degrees((float)__this->degrees);
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, strength);
    return done;
}

void SpinState___ObjInit_2(SpinState* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Rotation__New_1(NULL);
    ::app::Fuse::Animations::OpenAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::OpenAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::Spin*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->MixOp(), 3000);
}

SpinState* SpinState__New_1(::uStatic* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    SpinState* inst = (::app::Fuse::Animations::SpinState*)::uAllocObject(sizeof(::app::Fuse::Animations::SpinState), ::app::Fuse::Animations::SpinState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

}}}
