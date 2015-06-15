// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.Player.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Animator.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

TriggerAnimation__uType* TriggerAnimation__typeof()
{
    static TriggerAnimation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TriggerAnimation__uType*)::uAllocClassType(sizeof(TriggerAnimation__uType), "Fuse.Animations.TriggerAnimation", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(TriggerAnimation, _animators);
        type->StrongRefOffsets[1] = offsetof(TriggerAnimation, _backward);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_animators";
        type->StrongRefNames[1] = "_backward";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* TriggerAnimation__get_Animators(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        __this->_animators = ::app::Uno::Collections::List__Fuse_Animations_Animator__New_1(NULL);
    }

    return (::uObject*)__this->_animators;
}

bool TriggerAnimation__get_HasAnimators(TriggerAnimation* __this)
{
    return (__this->_animators != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count() > 0);
}

TriggerAnimation* TriggerAnimation__get_Backward(TriggerAnimation* __this)
{
    if (__this->_backward == NULL)
    {
        __this->_backward = TriggerAnimation__New_1(NULL);
    }

    return __this->_backward;
}

void TriggerAnimation__set_Backward(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->_backward = value;
}

bool TriggerAnimation__get_HasDirectionVariant(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        return false;
    }

    bool has = false;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator enum_125 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Animations::Animator* a = enum_125.Current();
        int v = ::uPtr< ::app::Fuse::Animations::Animator*>(a)->AnimatorVariant();

        if (v == 2)
        {
            has = true;
        }

        if (v == 1)
        {
            return false;
        }
    }

    return has;
}

::uArray* TriggerAnimation__CreateAnimatorsState(TriggerAnimation* __this, int variant, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Animations::CreateStateParams* collection_123;
    collection_123 = ::app::Fuse::Animations::CreateStateParams__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(collection_123)->Variant = variant;
    collection_123->TotalDuration = __this->GetTotalDuration(variant);
    collection_123->Attached = elm;
    ::app::Fuse::Animations::CreateStateParams* csp = collection_123;

    if (__this->_animators == NULL)
    {
        return ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), 0);
    }

    ::uArray* state = ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count());

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count(); ++i)
    {
        state->ItemStrong< ::app::Fuse::Animations::AnimatorState*>(i) = ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->CreateState(csp);
    }

    return state;
}

double TriggerAnimation__GetTotalDuration(TriggerAnimation* __this, int variant)
{
    if (__this->_animators == NULL)
    {
        return 0.0;
    }

    double max = 0.0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Animations::Animator* s = enum_124.Current();
        max = ::app::Uno::Math__Max(NULL, max, ::uPtr< ::app::Fuse::Animations::Animator*>(s)->GetDurationWithDelay(variant));
    }

    return max;
}

::app::Fuse::Animations::TriggerAnimationState* TriggerAnimation__CreateState(TriggerAnimation* __this, ::app::Fuse::Node* elm)
{
    return ::app::Fuse::Animations::TriggerAnimationState__New_1(NULL, __this, elm);
}

int TriggerAnimation__RestrictVariant(TriggerAnimation* __this, int variant)
{
    if (!__this->HasDirectionVariant() && (__this->_backward == NULL))
    {
        return 0;
    }

    return variant;
}

::app::Fuse::Animations::Player* TriggerAnimation__CreatePlayer(TriggerAnimation* __this, ::app::Fuse::Node* node, int variant)
{
    variant = __this->RestrictVariant(variant);

    if (variant == 0)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 0);
    }

    if (__this->_backward != NULL)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this->_backward, 0);
    }

    return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 1);
}

void TriggerAnimation___ObjInit(TriggerAnimation* __this)
{
}

TriggerAnimation* TriggerAnimation__New_1(::uStatic* __this)
{
    TriggerAnimation* inst = (::app::Fuse::Animations::TriggerAnimation*)::uAllocObject(sizeof(::app::Fuse::Animations::TriggerAnimation), ::app::Fuse::Animations::TriggerAnimation__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
