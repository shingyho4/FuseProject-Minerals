// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.DateTime.h>
#include <app/Uno.Double.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <Xli/DateTime.h>
#include <Xli/Time.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

ClockImpl__uType* ClockImpl__typeof()
{
    static ClockImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ClockImpl__uType*)::uAllocClassType(sizeof(ClockImpl__uType), "Uno.Runtime.Implementation.ClockImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::DateTime ClockImpl__GetLocalDateTime(::uStatic* __this)
{
    Xli::DateTime dt = Xli::DateTime::Now();
    return ::app::Uno::DateTime__New_3(NULL, dt.Year, dt.Month, dt.Day, dt.Hour, dt.Minute, dt.Second, dt.Millisecond);
}

double ClockImpl__GetSeconds(::uStatic* __this)
{
    return Xli::GetSeconds();
}

}}}}
