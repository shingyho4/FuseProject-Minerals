// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__

#include <app/Fuse.Animations.ProgressAnimator.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__bool;

struct Change__bool__uType : ::app::Fuse::Animations::ProgressAnimator__uType
{
};

Change__bool__uType* Change__bool__typeof();

::app::Uno::UX::Property__bool* Change__bool__get_Target(Change__bool* __this);
void Change__bool__set_Target(Change__bool* __this, ::app::Uno::UX::Property__bool* value);
bool Change__bool__get_Value(Change__bool* __this);
void Change__bool__set_Value(Change__bool* __this, bool value);
bool Change__bool__get_IsContinuous(Change__bool* __this);
::app::Fuse::Animations::AnimatorState* Change__bool__CreateState(Change__bool* __this, ::app::Fuse::Animations::CreateStateParams* p);
void Change__bool___ObjInit_2(Change__bool* __this, ::app::Uno::UX::Property__bool* target);
Change__bool* Change__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target);

struct Change__bool : ::app::Fuse::Animations::ProgressAnimator
{
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;
    bool _Value;

    void _ObjInit_2(::app::Uno::UX::Property__bool* target) { Change__bool___ObjInit_2(this, target); }
    ::app::Uno::UX::Property__bool* Target() { return Change__bool__get_Target(this); }
    void Target(::app::Uno::UX::Property__bool* value) { Change__bool__set_Target(this, value); }
    bool Value() { return Change__bool__get_Value(this); }
    void Value(bool value) { Change__bool__set_Value(this, value); }
    bool IsContinuous() { return Change__bool__get_IsContinuous(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
