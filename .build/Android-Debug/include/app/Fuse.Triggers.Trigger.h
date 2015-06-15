// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_TRIGGER_H__

#include <app/Fuse.Behavior.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimationState; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Triggers_Actions_TriggerAction; } } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Trigger;

struct Trigger__uType : ::app::Fuse::Behavior__uType
{
};

Trigger__uType* Trigger__typeof();

::app::Fuse::Animations::TriggerAnimation* Trigger__get_Animation(Trigger* __this);
void Trigger__set_Animation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value);
::app::Fuse::Animations::TriggerAnimation* Trigger__get_BackwardAnimation(Trigger* __this);
void Trigger__set_BackwardAnimation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value);
::uObject* Trigger__get_Animators(Trigger* __this);
bool Trigger__get_HasAnimators(Trigger* __this);
::uObject* Trigger__get_Actions(Trigger* __this);
bool Trigger__get_HasActions(Trigger* __this);
int Trigger__get_Bypass(Trigger* __this);
void Trigger__set_Bypass(Trigger* __this, int value);
double Trigger__get_Progress(Trigger* __this);
::app::Fuse::Node* Trigger__get_Node(Trigger* __this);
void Trigger__AddNodes(Trigger* __this, ::app::Fuse::Node* target);
void Trigger__RemoveNodes(Trigger* __this, ::app::Fuse::Node* target);
void Trigger__SetDone(Trigger* __this, ::uDelegate* done, bool on);
void Trigger__SetPlayDirection(Trigger* __this, int next);
void Trigger__OnPlaybackDone(Trigger* __this, ::uObject* s);
void Trigger__Start(Trigger* __this);
void Trigger__Stop(Trigger* __this);
void Trigger__Activate(Trigger* __this, ::uDelegate* done);
void Trigger__BypassActivate(Trigger* __this);
void Trigger__Deactivate(Trigger* __this);
void Trigger__Pulse(Trigger* __this);
void Trigger__PlayOn(Trigger* __this);
void Trigger__PlayEnd(Trigger* __this, bool on, ::uDelegate* done);
void Trigger__OnUnrooted(Trigger* __this, ::app::Fuse::Node* elm);
void Trigger__OnRooted(Trigger* __this, ::app::Fuse::Node* elm);
void Trigger__CleanupState(Trigger* __this);
void Trigger__CreateState(Trigger* __this);
void Trigger__EnsureState(Trigger* __this);
void Trigger__EnsureAnimationLength(Trigger* __this);
void Trigger__OnProgressUpdated(Trigger* __this, ::uObject* s);
void Trigger__PlayTo(Trigger* __this, double progress, int variant);
void Trigger__Seek(Trigger* __this, double progress);
void Trigger__Seek_1(Trigger* __this, double progress, int direction);
void Trigger__BypassSeek(Trigger* __this, double progress, int direction);
void Trigger___ObjInit_1(Trigger* __this);
void Trigger__add_PlaybackDone(Trigger* __this, ::uDelegate* value);
void Trigger__remove_PlaybackDone(Trigger* __this, ::uDelegate* value);

struct Trigger : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Animations::TriggerAnimation*> _animation;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*> _actions;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _nodes;
    ::uStrong< ::uDelegate*> _doneAction;
    bool _doneOn;
    int _lastPlayDirection;
    bool _isStarted;
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Animations::TriggerAnimationState*> _animState;
    ::uStrong< ::uDelegate*> PlaybackDone;
    int _Bypass;

    void AddNodes(::app::Fuse::Node* target) { Trigger__AddNodes(this, target); }
    void RemoveNodes(::app::Fuse::Node* target) { Trigger__RemoveNodes(this, target); }
    void SetDone(::uDelegate* done, bool on) { Trigger__SetDone(this, done, on); }
    void SetPlayDirection(int next) { Trigger__SetPlayDirection(this, next); }
    void OnPlaybackDone(::uObject* s) { Trigger__OnPlaybackDone(this, s); }
    void Start() { Trigger__Start(this); }
    void Stop() { Trigger__Stop(this); }
    void Activate(::uDelegate* done) { Trigger__Activate(this, done); }
    void BypassActivate() { Trigger__BypassActivate(this); }
    void Deactivate() { Trigger__Deactivate(this); }
    void Pulse() { Trigger__Pulse(this); }
    void PlayOn() { Trigger__PlayOn(this); }
    void PlayEnd(bool on, ::uDelegate* done) { Trigger__PlayEnd(this, on, done); }
    void CleanupState() { Trigger__CleanupState(this); }
    void CreateState() { Trigger__CreateState(this); }
    void EnsureState() { Trigger__EnsureState(this); }
    void EnsureAnimationLength() { Trigger__EnsureAnimationLength(this); }
    void OnProgressUpdated(::uObject* s) { Trigger__OnProgressUpdated(this, s); }
    void PlayTo(double progress, int variant) { Trigger__PlayTo(this, progress, variant); }
    void Seek(double progress) { Trigger__Seek(this, progress); }
    void Seek_1(double progress, int direction) { Trigger__Seek_1(this, progress, direction); }
    void BypassSeek(double progress, int direction) { Trigger__BypassSeek(this, progress, direction); }
    void _ObjInit_1() { Trigger___ObjInit_1(this); }
    void add_PlaybackDone(::uDelegate* value) { Trigger__add_PlaybackDone(this, value); }
    void remove_PlaybackDone(::uDelegate* value) { Trigger__remove_PlaybackDone(this, value); }
    ::app::Fuse::Animations::TriggerAnimation* Animation() { return Trigger__get_Animation(this); }
    void Animation(::app::Fuse::Animations::TriggerAnimation* value) { Trigger__set_Animation(this, value); }
    ::app::Fuse::Animations::TriggerAnimation* BackwardAnimation() { return Trigger__get_BackwardAnimation(this); }
    void BackwardAnimation(::app::Fuse::Animations::TriggerAnimation* value) { Trigger__set_BackwardAnimation(this, value); }
    ::uObject* Animators() { return Trigger__get_Animators(this); }
    bool HasAnimators() { return Trigger__get_HasAnimators(this); }
    ::uObject* Actions() { return Trigger__get_Actions(this); }
    bool HasActions() { return Trigger__get_HasActions(this); }
    int Bypass() { return Trigger__get_Bypass(this); }
    void Bypass(int value) { Trigger__set_Bypass(this, value); }
    double Progress() { return Trigger__get_Progress(this); }
    ::app::Fuse::Node* Node() { return Trigger__get_Node(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Triggers {

}}}


#endif
