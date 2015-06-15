// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.TimerEventArgs.h>

namespace app {
namespace Uno {
namespace Platform2 {

TimerEventArgs__uType* TimerEventArgs__typeof()
{
    static TimerEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TimerEventArgs__uType*)::uAllocClassType(sizeof(TimerEventArgs__uType), "Uno.Platform2.TimerEventArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double TimerEventArgs__get_LastTickTimestamp(TimerEventArgs* __this)
{
    return __this->_LastTickTimestamp;
}

void TimerEventArgs__set_LastTickTimestamp(TimerEventArgs* __this, double value)
{
    __this->_LastTickTimestamp = value;
}

double TimerEventArgs__get_TickDuration(TimerEventArgs* __this)
{
    return __this->_TickDuration;
}

void TimerEventArgs__set_TickDuration(TimerEventArgs* __this, double value)
{
    __this->_TickDuration = value;
}

void TimerEventArgs___ObjInit_1(TimerEventArgs* __this, double lastTickTimestamp, double tickDuration)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->LastTickTimestamp(lastTickTimestamp);
    __this->TickDuration(tickDuration);
}

TimerEventArgs* TimerEventArgs__New_2(::uStatic* __this, double lastTickTimestamp, double tickDuration)
{
    TimerEventArgs* inst = (::app::Uno::Platform2::TimerEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform2::TimerEventArgs), ::app::Uno::Platform2::TimerEventArgs__typeof());
    inst->_ObjInit_1(lastTickTimestamp, tickDuration);
    return inst;
}

}}}
