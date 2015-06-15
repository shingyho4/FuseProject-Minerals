// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct TriggerAction;

struct TriggerAction__uType : ::uClassType
{
    void(*__fp_Perform)(TriggerAction*, ::app::Fuse::Node*);
};

TriggerAction__uType* TriggerAction__typeof();

float TriggerAction__get_Delay(TriggerAction* __this);
void TriggerAction__set_Delay(TriggerAction* __this, float value);
bool TriggerAction__get_IsProgressTriggered(TriggerAction* __this);
int TriggerAction__get_Direction(TriggerAction* __this);
void TriggerAction__set_Direction(TriggerAction* __this, int value);
float TriggerAction__ProgressWhen(TriggerAction* __this, float totalDuration);
void TriggerAction___ObjInit(TriggerAction* __this);

struct TriggerAction : ::uObject
{
    float _progress;
    bool _hasProgress;
    float _delay;
    bool _hasDelay;
    int _direction;

    float ProgressWhen(float totalDuration) { return TriggerAction__ProgressWhen(this, totalDuration); }
    void Perform(::app::Fuse::Node* target) { (((TriggerAction__uType*)this->__obj_type)->__fp_Perform)(this, target); }
    void _ObjInit() { TriggerAction___ObjInit(this); }
    float Delay() { return TriggerAction__get_Delay(this); }
    void Delay(float value) { TriggerAction__set_Delay(this, value); }
    bool IsProgressTriggered() { return TriggerAction__get_IsProgressTriggered(this); }
    int Direction() { return TriggerAction__get_Direction(this); }
    void Direction(int value) { TriggerAction__set_Direction(this, value); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

}}}}


#endif
