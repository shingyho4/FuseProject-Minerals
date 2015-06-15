// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.PropertyAnimatorState__float4.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace Animations {

Change__float4__uType* Change__float4__typeof()
{
    static Change__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Change__float4__uType*)::uAllocClassType(sizeof(Change__float4__uType), "Fuse.Animations.Change<float4>", ::app::Fuse::Animations::ProgressAnimator__typeof(), 0, 1);
        type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float4__CreateState;

        type->StrongRefOffsets[0] = offsetof(Change__float4, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::UX::Property__float4* Change__float4__get_Target(Change__float4* __this)
{
    return __this->_Target;
}

void Change__float4__set_Target(Change__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

::app::Uno::Float4 Change__float4__get_Value(Change__float4* __this)
{
    return __this->_Value;
}

void Change__float4__set_Value(Change__float4* __this, ::app::Uno::Float4 value)
{
    __this->_Value = value;
}

bool Change__float4__get_IsContinuous(Change__float4* __this)
{
    return ((((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof());
}

::app::Fuse::Animations::AnimatorState* Change__float4__CreateState(Change__float4* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::PropertyAnimatorState__float4__New_1(NULL, __this, p);
}

void Change__float4___ObjInit_2(Change__float4* __this, ::app::Uno::UX::Property__float4* target)
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

Change__float4* Change__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target)
{
    Change__float4* inst = (::app::Fuse::Animations::Change__float4*)::uAllocObject(sizeof(::app::Fuse::Animations::Change__float4), ::app::Fuse::Animations::Change__float4__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

}}}
