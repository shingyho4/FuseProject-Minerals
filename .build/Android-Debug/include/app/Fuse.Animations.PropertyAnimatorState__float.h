// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__FLOAT_H__

#include <app/Fuse.Animations.ProgressAnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct PropertyAnimatorState__float;

struct PropertyAnimatorState__float__uType : ::app::Fuse::Animations::ProgressAnimatorState__uType
{
};

PropertyAnimatorState__float__uType* PropertyAnimatorState__float__typeof();

void PropertyAnimatorState__float__Disable(PropertyAnimatorState__float* __this);
void PropertyAnimatorState__float__Seek(PropertyAnimatorState__float* __this, float progress, float strength);
void PropertyAnimatorState__float___ObjInit_2(PropertyAnimatorState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);
PropertyAnimatorState__float* PropertyAnimatorState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct PropertyAnimatorState__float : ::app::Fuse::Animations::ProgressAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p) { PropertyAnimatorState__float___ObjInit_2(this, animator, p); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
