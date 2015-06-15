// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_H__
#define __APP_FUSE_ANIMATIONS_TRIGGER_ANIMATION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Player; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimationState; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Animator; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct TriggerAnimation;

struct TriggerAnimation__uType : ::uClassType
{
};

TriggerAnimation__uType* TriggerAnimation__typeof();

::uObject* TriggerAnimation__get_Animators(TriggerAnimation* __this);
bool TriggerAnimation__get_HasAnimators(TriggerAnimation* __this);
TriggerAnimation* TriggerAnimation__get_Backward(TriggerAnimation* __this);
void TriggerAnimation__set_Backward(TriggerAnimation* __this, TriggerAnimation* value);
bool TriggerAnimation__get_HasDirectionVariant(TriggerAnimation* __this);
::uArray* TriggerAnimation__CreateAnimatorsState(TriggerAnimation* __this, int variant, ::app::Fuse::Node* elm);
double TriggerAnimation__GetTotalDuration(TriggerAnimation* __this, int variant);
::app::Fuse::Animations::TriggerAnimationState* TriggerAnimation__CreateState(TriggerAnimation* __this, ::app::Fuse::Node* elm);
int TriggerAnimation__RestrictVariant(TriggerAnimation* __this, int variant);
::app::Fuse::Animations::Player* TriggerAnimation__CreatePlayer(TriggerAnimation* __this, ::app::Fuse::Node* node, int variant);
void TriggerAnimation___ObjInit(TriggerAnimation* __this);
TriggerAnimation* TriggerAnimation__New_1(::uStatic* __this);

struct TriggerAnimation : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Animator*> _animators;
    ::uStrong< TriggerAnimation*> _backward;

    ::uArray* CreateAnimatorsState(int variant, ::app::Fuse::Node* elm) { return TriggerAnimation__CreateAnimatorsState(this, variant, elm); }
    double GetTotalDuration(int variant) { return TriggerAnimation__GetTotalDuration(this, variant); }
    ::app::Fuse::Animations::TriggerAnimationState* CreateState(::app::Fuse::Node* elm) { return TriggerAnimation__CreateState(this, elm); }
    int RestrictVariant(int variant) { return TriggerAnimation__RestrictVariant(this, variant); }
    ::app::Fuse::Animations::Player* CreatePlayer(::app::Fuse::Node* node, int variant) { return TriggerAnimation__CreatePlayer(this, node, variant); }
    void _ObjInit() { TriggerAnimation___ObjInit(this); }
    ::uObject* Animators() { return TriggerAnimation__get_Animators(this); }
    bool HasAnimators() { return TriggerAnimation__get_HasAnimators(this); }
    TriggerAnimation* Backward() { return TriggerAnimation__get_Backward(this); }
    void Backward(TriggerAnimation* value) { TriggerAnimation__set_Backward(this, value); }
    bool HasDirectionVariant() { return TriggerAnimation__get_HasDirectionVariant(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
