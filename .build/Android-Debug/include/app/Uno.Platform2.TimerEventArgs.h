// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_TIMER_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM2_TIMER_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

struct TimerEventArgs;

struct TimerEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

TimerEventArgs__uType* TimerEventArgs__typeof();

double TimerEventArgs__get_LastTickTimestamp(TimerEventArgs* __this);
void TimerEventArgs__set_LastTickTimestamp(TimerEventArgs* __this, double value);
double TimerEventArgs__get_TickDuration(TimerEventArgs* __this);
void TimerEventArgs__set_TickDuration(TimerEventArgs* __this, double value);
void TimerEventArgs___ObjInit_1(TimerEventArgs* __this, double lastTickTimestamp, double tickDuration);
TimerEventArgs* TimerEventArgs__New_2(::uStatic* __this, double lastTickTimestamp, double tickDuration);

struct TimerEventArgs : ::app::Uno::EventArgs
{
    double _LastTickTimestamp;
    double _TickDuration;

    void _ObjInit_1(double lastTickTimestamp, double tickDuration) { TimerEventArgs___ObjInit_1(this, lastTickTimestamp, tickDuration); }
    double LastTickTimestamp() { return TimerEventArgs__get_LastTickTimestamp(this); }
    void LastTickTimestamp(double value) { TimerEventArgs__set_LastTickTimestamp(this, value); }
    double TickDuration() { return TimerEventArgs__get_TickDuration(this); }
    void TickDuration(double value) { TimerEventArgs__set_TickDuration(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Uno {
namespace Platform2 {

}}}


#endif
