// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FLOAT4_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__float4;

struct Change__float4__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
};

Change__float4__uType* Change__float4__typeof();

::app::Uno::UX::Property__float4* Change__float4__get_Target(Change__float4* __this);
void Change__float4__set_Target(Change__float4* __this, ::app::Uno::UX::Property__float4* value);
::app::Uno::Float4 Change__float4__get_Value(Change__float4* __this);
void Change__float4__set_Value(Change__float4* __this, ::app::Uno::Float4 value);
bool Change__float4__get_IsContinuous(Change__float4* __this);
::app::Fuse::Animations::AnimatorState* Change__float4__CreateState(Change__float4* __this, ::app::Fuse::Animations::CreateStateParams* p);
void Change__float4___ObjInit_2(Change__float4* __this, ::app::Uno::UX::Property__float4* target);
Change__float4* Change__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target);

struct Change__float4 : ::app::Fuse::Animations::ProgressAnimator
{
    ::uStrong< ::app::Uno::UX::Property__float4*> _Target;
    ::app::Uno::Float4 _Value;

    void _ObjInit_2(::app::Uno::UX::Property__float4* target) { Change__float4___ObjInit_2(this, target); }
    ::app::Uno::UX::Property__float4* Target() { return Change__float4__get_Target(this); }
    void Target(::app::Uno::UX::Property__float4* value) { Change__float4__set_Target(this, value); }
    ::app::Uno::Float4 Value();
    void Value(::app::Uno::Float4 value);
    bool IsContinuous() { return Change__float4__get_IsContinuous(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Change__float4::Value() { return Change__float4__get_Value(this); }
inline void Change__float4::Value(::app::Uno::Float4 value) { Change__float4__set_Value(this, value); }

}}}


#endif
