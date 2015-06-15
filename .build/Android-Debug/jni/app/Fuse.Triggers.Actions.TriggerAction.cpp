// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

TriggerAction__uType* TriggerAction__typeof()
{
    static TriggerAction__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TriggerAction__uType*)::uAllocClassType(sizeof(TriggerAction__uType), "Fuse.Triggers.Actions.TriggerAction", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float TriggerAction__get_Delay(TriggerAction* __this)
{
    return __this->_delay;
}

void TriggerAction__set_Delay(TriggerAction* __this, float value)
{
    __this->_hasDelay = true;
    __this->_delay = value;
}

bool TriggerAction__get_IsProgressTriggered(TriggerAction* __this)
{
    return __this->_hasProgress || __this->_hasDelay;
}

int TriggerAction__get_Direction(TriggerAction* __this)
{
    return __this->_direction;
}

void TriggerAction__set_Direction(TriggerAction* __this, int value)
{
    __this->_direction = value;
}

float TriggerAction__ProgressWhen(TriggerAction* __this, float totalDuration)
{
    if (__this->_hasProgress)
    {
        return __this->_progress;
    }

    if (__this->_hasDelay)
    {
        return __this->_delay / totalDuration;
    }

    return 0.0f;
}

void TriggerAction___ObjInit(TriggerAction* __this)
{
}

}}}}
