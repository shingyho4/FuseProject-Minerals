// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.OpenAnimator.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

OpenAnimator__uType* OpenAnimator__typeof()
{
    static OpenAnimator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (OpenAnimator__uType*)::uAllocClassType(sizeof(OpenAnimator__uType), "Fuse.Animations.OpenAnimator", ::app::Fuse::Animations::Animator__typeof());
        type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))OpenAnimator__get_AnimatorVariant;
        type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))OpenAnimator__GetDurationWithDelay;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int OpenAnimator__get_AnimatorVariant(OpenAnimator* __this)
{
    return 1;
}

double OpenAnimator__get_Duration(OpenAnimator* __this)
{
    return __this->_duration;
}

void OpenAnimator__set_Duration(OpenAnimator* __this, double value)
{
    __this->_duration = value;
    __this->_hasDuration = true;
}

bool OpenAnimator__get_HasDuration(OpenAnimator* __this)
{
    return __this->_hasDuration;
}

double OpenAnimator__GetDurationWithDelay(OpenAnimator* __this, int dir)
{
    return __this->Delay() + __this->Duration();
}

double OpenAnimator__GetDelay(OpenAnimator* __this, int dir, double totalDuration)
{
    return __this->Delay();
}

}}}
