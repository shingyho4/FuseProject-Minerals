// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FLOAT_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__float;

struct Change__float__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
};

Change__float__uType* Change__float__typeof();

::app::Uno::UX::Property__float* Change__float__get_Target(Change__float* __this);
void Change__float__set_Target(Change__float* __this, ::app::Uno::UX::Property__float* value);
float Change__float__get_Value(Change__float* __this);
void Change__float__set_Value(Change__float* __this, float value);
bool Change__float__get_IsContinuous(Change__float* __this);
::app::Fuse::Animations::AnimatorState* Change__float__CreateState(Change__float* __this, ::app::Fuse::Animations::CreateStateParams* p);
void Change__float___ObjInit_2(Change__float* __this, ::app::Uno::UX::Property__float* target);
Change__float* Change__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target);

struct Change__float : ::app::Fuse::Animations::ProgressAnimator
{
    ::uStrong< ::app::Uno::UX::Property__float*> _Target;
    float _Value;

    void _ObjInit_2(::app::Uno::UX::Property__float* target) { Change__float___ObjInit_2(this, target); }
    ::app::Uno::UX::Property__float* Target() { return Change__float__get_Target(this); }
    void Target(::app::Uno::UX::Property__float* value) { Change__float__set_Target(this, value); }
    float Value() { return Change__float__get_Value(this); }
    void Value(float value) { Change__float__set_Value(this, value); }
    bool IsContinuous() { return Change__float__get_IsContinuous(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
