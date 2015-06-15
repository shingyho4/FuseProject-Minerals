// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.PropertyAnimatorState__float.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Fuse {
namespace Animations {

Change__float__uType* Change__float__typeof()
{
    static Change__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Change__float__uType*)::uAllocClassType(sizeof(Change__float__uType), "Fuse.Animations.Change<float>", ::app::Fuse::Animations::ProgressAnimator__typeof(), 0, 1);
        type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float__CreateState;

        type->StrongRefOffsets[0] = offsetof(Change__float, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::UX::Property__float* Change__float__get_Target(Change__float* __this)
{
    return __this->_Target;
}

void Change__float__set_Target(Change__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

float Change__float__get_Value(Change__float* __this)
{
    return __this->_Value;
}

void Change__float__set_Value(Change__float* __this, float value)
{
    __this->_Value = value;
}

bool Change__float__get_IsContinuous(Change__float* __this)
{
    return ((((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof());
}

::app::Fuse::Animations::AnimatorState* Change__float__CreateState(Change__float* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::PropertyAnimatorState__float__New_1(NULL, __this, p);
}

void Change__float___ObjInit_2(Change__float* __this, ::app::Uno::UX::Property__float* target)
{
    ::app::Fuse::Animations::ProgressAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (!__this->IsContinuous())
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
    }
}

Change__float* Change__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target)
{
    Change__float* inst = (::app::Fuse::Animations::Change__float*)::uAllocObject(sizeof(::app::Fuse::Animations::Change__float), ::app::Fuse::Animations::Change__float__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

}}}
