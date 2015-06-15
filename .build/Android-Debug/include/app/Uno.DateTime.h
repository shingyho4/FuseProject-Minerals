// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATE_TIME_H__
#define __APP_UNO_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct DateTime;

struct DateTime__uType : ::uValueType
{
};

DateTime__uType* DateTime__typeof();

int DateTime__get_Year(DateTime* __this);
void DateTime__set_Year(DateTime* __this, int value);
int DateTime__get_Month(DateTime* __this);
void DateTime__set_Month(DateTime* __this, int value);
int DateTime__get_Day(DateTime* __this);
void DateTime__set_Day(DateTime* __this, int value);
int DateTime__get_Hour(DateTime* __this);
void DateTime__set_Hour(DateTime* __this, int value);
int DateTime__get_Minute(DateTime* __this);
void DateTime__set_Minute(DateTime* __this, int value);
int DateTime__get_Second(DateTime* __this);
void DateTime__set_Second(DateTime* __this, int value);
int DateTime__get_Millisecond(DateTime* __this);
void DateTime__set_Millisecond(DateTime* __this, int value);
DateTime DateTime__get_Now(::uStatic* __this);
double DateTime__DateTimeToShittyTicks(DateTime* __this);
int DateTime__GetHashCode(DateTime* __this);
::uString* DateTime__ToString(DateTime* __this);
bool DateTime__Equals(DateTime* __this, ::uObject* other);
bool DateTime__Equals_3(::uStatic* __this, DateTime left, DateTime right);
void DateTime___ObjInit_2(DateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond);
DateTime DateTime__New_3(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond);
bool DateTime__op_Equality(::uStatic* __this, DateTime left, DateTime right);

struct DateTime
{
    double shittyTicks;
    int _Year;
    int _Month;
    int _Day;
    int _Hour;
    int _Minute;
    int _Second;
    int _Millisecond;

    double DateTimeToShittyTicks() { return DateTime__DateTimeToShittyTicks(this); }
    int GetHashCode() { return DateTime__GetHashCode(this); }
    ::uString* ToString() { return DateTime__ToString(this); }
    bool Equals(::uObject* other) { return DateTime__Equals(this, other); }
    void _ObjInit_2(int year, int month, int day, int hour, int minute, int second, int millisecond) { DateTime___ObjInit_2(this, year, month, day, hour, minute, second, millisecond); }
    int Year() { return DateTime__get_Year(this); }
    void Year(int value) { DateTime__set_Year(this, value); }
    int Month() { return DateTime__get_Month(this); }
    void Month(int value) { DateTime__set_Month(this, value); }
    int Day() { return DateTime__get_Day(this); }
    void Day(int value) { DateTime__set_Day(this, value); }
    int Hour() { return DateTime__get_Hour(this); }
    void Hour(int value) { DateTime__set_Hour(this, value); }
    int Minute() { return DateTime__get_Minute(this); }
    void Minute(int value) { DateTime__set_Minute(this, value); }
    int Second() { return DateTime__get_Second(this); }
    void Second(int value) { DateTime__set_Second(this, value); }
    int Millisecond() { return DateTime__get_Millisecond(this); }
    void Millisecond(int value) { DateTime__set_Millisecond(this, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
