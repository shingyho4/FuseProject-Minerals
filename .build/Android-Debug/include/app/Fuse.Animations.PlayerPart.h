// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PLAYER_PART_H__
#define __APP_FUSE_ANIMATIONS_PLAYER_PART_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct PlayerPart;

struct PlayerPart__uType : ::uClassType
{
};

PlayerPart__uType* PlayerPart__typeof();

double PlayerPart__get_Progress(PlayerPart* __this);
void PlayerPart__PlayToProgress(PlayerPart* __this, double progress);
void PlayerPart__MarkSource(PlayerPart* __this);
void PlayerPart__PlayToEnd(PlayerPart* __this);
void PlayerPart__PlayForward(PlayerPart* __this);
void PlayerPart__PlayBackward(PlayerPart* __this);
void PlayerPart__PlayToStart(PlayerPart* __this);
bool PlayerPart__Step(PlayerPart* __this);
bool PlayerPart__CanTriggerAllDone(PlayerPart* __this, int dir);
void PlayerPart__SeekProgress(PlayerPart* __this, double p);
void PlayerPart__AlterDuration(PlayerPart* __this, double t);
void PlayerPart__MaskLastTime(PlayerPart* __this);
void PlayerPart___ObjInit(PlayerPart* __this, double currentProgress);
PlayerPart* PlayerPart__New_1(::uStatic* __this, double currentProgress);

struct PlayerPart : ::uObject
{
    bool IsProgress;
    double Duration;
    bool Animate;
    double Current;
    double Source;
    double Target;
    double OvertimeCurrent;
    double OvertimeSource;
    double SourceTime;
    double _lastFullTime;

    void PlayToProgress(double progress) { PlayerPart__PlayToProgress(this, progress); }
    void MarkSource() { PlayerPart__MarkSource(this); }
    void PlayToEnd() { PlayerPart__PlayToEnd(this); }
    void PlayForward() { PlayerPart__PlayForward(this); }
    void PlayBackward() { PlayerPart__PlayBackward(this); }
    void PlayToStart() { PlayerPart__PlayToStart(this); }
    bool Step() { return PlayerPart__Step(this); }
    bool CanTriggerAllDone(int dir) { return PlayerPart__CanTriggerAllDone(this, dir); }
    void SeekProgress(double p) { PlayerPart__SeekProgress(this, p); }
    void AlterDuration(double t) { PlayerPart__AlterDuration(this, t); }
    void MaskLastTime() { PlayerPart__MaskLastTime(this); }
    void _ObjInit(double currentProgress) { PlayerPart___ObjInit(this, currentProgress); }
    double Progress() { return PlayerPart__get_Progress(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
