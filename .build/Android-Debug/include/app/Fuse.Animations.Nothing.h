// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_NOTHING_H__
#define __APP_FUSE_ANIMATIONS_NOTHING_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Nothing;

struct Nothing__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
};

Nothing__uType* Nothing__typeof();

::app::Fuse::Animations::AnimatorState* Nothing__CreateState(Nothing* __this, ::app::Fuse::Animations::CreateStateParams* p);
void Nothing___ObjInit_2(Nothing* __this);
Nothing* Nothing__New_1(::uStatic* __this);

struct Nothing : ::app::Fuse::Animations::ProgressAnimator
{
    void _ObjInit_2() { Nothing___ObjInit_2(this); }
};

}}}


#endif
