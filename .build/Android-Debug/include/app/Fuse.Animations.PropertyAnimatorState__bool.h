// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__BOOL_H__

#include <app/Fuse.Animations.ProgressAnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct PropertyAnimatorState__bool;

struct PropertyAnimatorState__bool__uType : ::app::Fuse::Animations::ProgressAnimatorState__uType
{
};

PropertyAnimatorState__bool__uType* PropertyAnimatorState__bool__typeof();

void PropertyAnimatorState__bool__Disable(PropertyAnimatorState__bool* __this);
void PropertyAnimatorState__bool__Seek(PropertyAnimatorState__bool* __this, float progress, float strength);
void PropertyAnimatorState__bool___ObjInit_2(PropertyAnimatorState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);
PropertyAnimatorState__bool* PropertyAnimatorState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct PropertyAnimatorState__bool : ::app::Fuse::Animations::ProgressAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__bool*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p) { PropertyAnimatorState__bool___ObjInit_2(this, animator, p); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
