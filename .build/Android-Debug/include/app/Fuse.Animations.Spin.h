// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SPIN_H__
#define __APP_FUSE_ANIMATIONS_SPIN_H__

#include <app/Fuse.Animations.OpenAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Spin;

struct Spin__uType : ::app::Fuse::Animations::OpenAnimator__uType
{
};

Spin__uType* Spin__typeof();

::app::Fuse::Node* Spin__get_Target(Spin* __this);
void Spin__set_Target(Spin* __this, ::app::Fuse::Node* value);
double Spin__get_Hertz(Spin* __this);
void Spin__set_Hertz(Spin* __this, double value);
::app::Fuse::Animations::AnimatorState* Spin__CreateState(Spin* __this, ::app::Fuse::Animations::CreateStateParams* p);

struct Spin : ::app::Fuse::Animations::OpenAnimator
{
    double _hertz;
    ::uStrong< ::app::Fuse::Node*> _Target;

    ::app::Fuse::Node* Target() { return Spin__get_Target(this); }
    void Target(::app::Fuse::Node* value) { Spin__set_Target(this, value); }
    double Hertz() { return Spin__get_Hertz(this); }
    void Hertz(double value) { Spin__set_Hertz(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
