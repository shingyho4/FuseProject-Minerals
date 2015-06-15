// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Http.Internal.DateUtil.h>
#include <app/Uno.DateTime.h>
#include <app/Uno.Int.h>

namespace app {
namespace Experimental {
namespace Http {
namespace Internal {

DateUtil__uType* DateUtil__typeof()
{
    static DateUtil__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DateUtil__uType*)::uAllocClassType(sizeof(DateUtil__uType), "Experimental.Http.Internal.DateUtil");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int DateUtil__get_TimestampNow(::uStatic* __this)
{
    ::app::Uno::DateTime d = ::app::Uno::DateTime__get_Now(NULL);
    int mon = ((d.Year() - 2000) * 12) + d.Month();
    int day = (mon * 31) + d.Day();
    int hour = (day * 24) + d.Hour();
    int min = (hour * 60) + d.Minute();
    int sec = (min * 60) + d.Second();
    return sec;
}

}}}}
