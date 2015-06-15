// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.DateTime.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.DateTimeStringFormatter.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

DateTime__uType* DateTime__typeof()
{
    static DateTime__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DateTime__uType*)::uAllocValueType(sizeof(DateTime__uType), "Uno.DateTime", sizeof(DateTime));
        type->__fp_GetHashCode_value = (int(*)(void*))DateTime__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))DateTime__ToString;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))DateTime__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int DateTime__get_Year(DateTime* __this)
{
    return __this->_Year;
}

void DateTime__set_Year(DateTime* __this, int value)
{
    __this->_Year = value;
}

int DateTime__get_Month(DateTime* __this)
{
    return __this->_Month;
}

void DateTime__set_Month(DateTime* __this, int value)
{
    __this->_Month = value;
}

int DateTime__get_Day(DateTime* __this)
{
    return __this->_Day;
}

void DateTime__set_Day(DateTime* __this, int value)
{
    __this->_Day = value;
}

int DateTime__get_Hour(DateTime* __this)
{
    return __this->_Hour;
}

void DateTime__set_Hour(DateTime* __this, int value)
{
    __this->_Hour = value;
}

int DateTime__get_Minute(DateTime* __this)
{
    return __this->_Minute;
}

void DateTime__set_Minute(DateTime* __this, int value)
{
    __this->_Minute = value;
}

int DateTime__get_Second(DateTime* __this)
{
    return __this->_Second;
}

void DateTime__set_Second(DateTime* __this, int value)
{
    __this->_Second = value;
}

int DateTime__get_Millisecond(DateTime* __this)
{
    return __this->_Millisecond;
}

void DateTime__set_Millisecond(DateTime* __this, int value)
{
    __this->_Millisecond = value;
}

DateTime DateTime__get_Now(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetLocalDateTime(NULL);
}

double DateTime__DateTimeToShittyTicks(DateTime* __this)
{
    int msPerSecond = 1000;
    int msPerMinute = msPerSecond * 60;
    int msPerHour = msPerMinute * 60;
    int msPerDay = msPerHour * 24;
    int date = (((__this->Year() / 365) + (__this->Month() * 30)) + __this->Day()) * msPerDay;
    int time = (((__this->Hour() * msPerHour) + (__this->Minute() * msPerMinute)) + (__this->Second() * msPerSecond)) + __this->Millisecond();
    return (double)(date + time);
}

int DateTime__GetHashCode(DateTime* __this)
{
    double shittyTicks = __this->shittyTicks;
    return (int)shittyTicks;
}

::uString* DateTime__ToString(DateTime* __this)
{
    return ::app::Uno::Runtime::Implementation::Internal::DateTimeStringFormatter__ToString(NULL, *__this);
}

bool DateTime__Equals(DateTime* __this, ::uObject* other)
{
    return ::uIs(other, DateTime__typeof()) && DateTime__Equals_3(NULL, *__this, ::uUnbox< DateTime>(other));
}

bool DateTime__Equals_3(::uStatic* __this, DateTime left, DateTime right)
{
    return DateTime__op_Equality(NULL, left, right);
}

void DateTime___ObjInit_2(DateTime* __this, int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    *__this = ::uDefault< DateTime>();
    __this->Year(year);
    __this->Month(month);
    __this->Day(day);
    __this->Hour(hour);
    __this->Minute(minute);
    __this->Second(second);
    __this->Millisecond(millisecond);
    __this->shittyTicks = __this->DateTimeToShittyTicks();
}

DateTime DateTime__New_3(::uStatic* __this, int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    DateTime inst = ::uDefault< DateTime>();
    inst._ObjInit_2(year, month, day, hour, minute, second, millisecond);
    return inst;
}

bool DateTime__op_Equality(::uStatic* __this, DateTime left, DateTime right)
{
    return ((((((left.Year() == right.Year()) && (left.Month() == right.Month())) && (left.Day() == right.Day())) && (left.Hour() == right.Hour())) && (left.Minute() == right.Minute())) && (left.Second() == right.Second())) && (left.Millisecond() == right.Millisecond());
}

}}
