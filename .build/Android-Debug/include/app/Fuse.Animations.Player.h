// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PLAYER_H__
#define __APP_FUSE_ANIMATIONS_PLAYER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct PlayerPart; } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Player;

struct Player__uType : ::uClassType
{
};

Player__uType* Player__typeof();

::app::Fuse::Node* Player__get_Node(Player* __this);
void Player__set_Node(Player* __this, ::app::Fuse::Node* value);
::app::Fuse::Animations::TriggerAnimation* Player__get_Animation(Player* __this);
void Player__set_Animation(Player* __this, ::app::Fuse::Animations::TriggerAnimation* value);
int Player__get_Variant(Player* __this);
void Player__set_Variant(Player* __this, int value);
::uArray* Player__get_States(Player* __this);
double Player__get_TotalDuration(Player* __this);
::uDelegate* Player__get_DoneCallback(Player* __this);
void Player__set_DoneCallback(Player* __this, ::uDelegate* value);
double Player__get_Progress(Player* __this);
double Player__get_RemainTime(Player* __this);
bool Player__get_IsSyncState(Player* __this);
bool Player__get_AnyEffect(Player* __this);
double Player__get_Strength(Player* __this);
void Player__set_Strength(Player* __this, double value);
void Player__Update(Player* __this, ::uObject* s, ::uObject* a);
void Player__CheckUpdate(Player* __this);
void Player__Start(Player* __this);
void Player__Stop(Player* __this);
void Player__Done(Player* __this);
void Player__Disable(Player* __this);
void Player__SeekProgress(Player* __this, double progress, bool triggerUpdate);
void Player__UpdateStates(Player* __this);
void Player__PlayToProgress(Player* __this, double progress);
void Player__PlayToEnd(Player* __this);
void Player__PlayToStart(Player* __this);
void Player__FadeIn(Player* __this, double time);
void Player__FadeOut(Player* __this, double time);
void Player___ObjInit(Player* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant);
Player* Player__New_1(::uStatic* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant);

struct Player : ::uObject
{
    ::uStrong< ::uDelegate*> ProgressUpdated;
    ::uStrong< ::uDelegate*> StrengthUpdated;
    ::uStrong< ::uArray*> _states;
    bool _isStarted;
    bool _isDone;
    ::uStrong< ::app::Fuse::Animations::PlayerPart*> _progress;
    int _seekDirection;
    ::uStrong< ::app::Fuse::Animations::PlayerPart*> _strength;
    ::uStrong< ::app::Fuse::Node*> _Node;
    ::uStrong< ::app::Fuse::Animations::TriggerAnimation*> _Animation;
    int _Variant;
    ::uStrong< ::uDelegate*> _DoneCallback;

    void Update(::uObject* s, ::uObject* a) { Player__Update(this, s, a); }
    void CheckUpdate() { Player__CheckUpdate(this); }
    void Start() { Player__Start(this); }
    void Stop() { Player__Stop(this); }
    void Done() { Player__Done(this); }
    void Disable() { Player__Disable(this); }
    void SeekProgress(double progress, bool triggerUpdate) { Player__SeekProgress(this, progress, triggerUpdate); }
    void UpdateStates() { Player__UpdateStates(this); }
    void PlayToProgress(double progress) { Player__PlayToProgress(this, progress); }
    void PlayToEnd() { Player__PlayToEnd(this); }
    void PlayToStart() { Player__PlayToStart(this); }
    void FadeIn(double time) { Player__FadeIn(this, time); }
    void FadeOut(double time) { Player__FadeOut(this, time); }
    void _ObjInit(::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant) { Player___ObjInit(this, elm, animation, variant); }
    ::app::Fuse::Node* Node() { return Player__get_Node(this); }
    void Node(::app::Fuse::Node* value) { Player__set_Node(this, value); }
    ::app::Fuse::Animations::TriggerAnimation* Animation() { return Player__get_Animation(this); }
    void Animation(::app::Fuse::Animations::TriggerAnimation* value) { Player__set_Animation(this, value); }
    int Variant() { return Player__get_Variant(this); }
    void Variant(int value) { Player__set_Variant(this, value); }
    ::uArray* States() { return Player__get_States(this); }
    double TotalDuration() { return Player__get_TotalDuration(this); }
    ::uDelegate* DoneCallback() { return Player__get_DoneCallback(this); }
    void DoneCallback(::uDelegate* value) { Player__set_DoneCallback(this, value); }
    double Progress() { return Player__get_Progress(this); }
    double RemainTime() { return Player__get_RemainTime(this); }
    bool IsSyncState() { return Player__get_IsSyncState(this); }
    bool AnyEffect() { return Player__get_AnyEffect(this); }
    double Strength() { return Player__get_Strength(this); }
    void Strength(double value) { Player__set_Strength(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
