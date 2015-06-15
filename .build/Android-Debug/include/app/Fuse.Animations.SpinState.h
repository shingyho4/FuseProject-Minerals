// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SPIN_STATE_H__
#define __APP_FUSE_ANIMATIONS_SPIN_STATE_H__

#include <app/Fuse.Animations.OpenAnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct Spin; } } }
namespace app { namespace Fuse { struct Rotation; } }

namespace app {
namespace Fuse {
namespace Animations {

struct SpinState;

struct SpinState__uType : ::app::Fuse::Animations::OpenAnimatorState__uType
{
};

SpinState__uType* SpinState__typeof();

bool SpinState__Seek(SpinState* __this, bool on, float interval, float strength, int dir);
void SpinState___ObjInit_2(SpinState* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p);
SpinState* SpinState__New_1(::uStatic* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct SpinState : ::app::Fuse::Animations::OpenAnimatorState
{
    ::uStrong< ::app::Fuse::Animations::Spin*> Animator_1;
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Rotation*> transform;
    double degrees;

    void _ObjInit_2(::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p) { SpinState___ObjInit_2(this, animator, p); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
