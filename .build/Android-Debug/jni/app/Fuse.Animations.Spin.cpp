// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.Spin.h>
#include <app/Fuse.Animations.SpinState.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Animations {

Spin__uType* Spin__typeof()
{
    static Spin__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Spin__uType*)::uAllocClassType(sizeof(Spin__uType), "Fuse.Animations.Spin", ::app::Fuse::Animations::OpenAnimator__typeof(), 0, 1);
        type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Spin__CreateState;

        type->StrongRefOffsets[0] = offsetof(Spin, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* Spin__get_Target(Spin* __this)
{
    return __this->_Target;
}

void Spin__set_Target(Spin* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

double Spin__get_Hertz(Spin* __this)
{
    return __this->_hertz;
}

void Spin__set_Hertz(Spin* __this, double value)
{
    __this->_hertz = value;
}

::app::Fuse::Animations::AnimatorState* Spin__CreateState(Spin* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::SpinState__New_1(NULL, __this, p);
}

}}}
