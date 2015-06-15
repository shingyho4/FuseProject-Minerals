// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

Animator__uType* Animator__typeof()
{
    static Animator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Animator__uType*)::uAllocClassType(sizeof(Animator__uType), "Fuse.Animations.Animator", ::uObject__typeof(), 0, 1);
        type->__fp_get_AnimatorVariant = Animator__get_AnimatorVariant;
        type->__fp_GetDurationWithDelay = Animator__GetDurationWithDelay;

        type->StrongRefOffsets[0] = offsetof(Animator, Mixer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Mixer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double Animator__get_Delay(Animator* __this)
{
    return __this->_Delay;
}

void Animator__set_Delay(Animator* __this, double value)
{
    __this->_Delay = value;
}

int Animator__get_AnimatorVariant(Animator* __this)
{
    return 0;
}

int Animator__get_MixOp(Animator* __this)
{
    return __this->_mixOp;
}

void Animator__set_MixOp(Animator* __this, int value)
{
    __this->_mixOp = value;
}

double Animator__GetDurationWithDelay(Animator* __this, int dir)
{
    return __this->Delay();
}

void Animator___ObjInit(Animator* __this)
{
    __this->Mixer = ::app::Fuse::Animations::Mixer__get_Default(NULL);
    __this->_mixOp = 1;
}

}}}
