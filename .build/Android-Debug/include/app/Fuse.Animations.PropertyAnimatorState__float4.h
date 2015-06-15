// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_PROPERTY_ANIMATOR_STATE__FLOAT4_H__

#include <app/Fuse.Animations.ProgressAnimatorState.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct PropertyAnimatorState__float4;

struct PropertyAnimatorState__float4__uType : ::app::Fuse::Animations::ProgressAnimatorState__uType
{
};

PropertyAnimatorState__float4__uType* PropertyAnimatorState__float4__typeof();

void PropertyAnimatorState__float4__Disable(PropertyAnimatorState__float4* __this);
void PropertyAnimatorState__float4__Seek(PropertyAnimatorState__float4* __this, float progress, float strength);
void PropertyAnimatorState__float4___ObjInit_2(PropertyAnimatorState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p);
PropertyAnimatorState__float4* PropertyAnimatorState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct PropertyAnimatorState__float4 : ::app::Fuse::Animations::ProgressAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__float4*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p) { PropertyAnimatorState__float4___ObjInit_2(this, animator, p); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
