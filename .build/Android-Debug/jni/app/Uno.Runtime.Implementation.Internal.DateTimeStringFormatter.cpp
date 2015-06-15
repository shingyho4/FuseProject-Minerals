// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.DateTime.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.DateTimeStringFormatter.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

DateTimeStringFormatter__uType* DateTimeStringFormatter__typeof()
{
    static DateTimeStringFormatter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DateTimeStringFormatter__uType*)::uAllocClassType(sizeof(DateTimeStringFormatter__uType), "Uno.Runtime.Implementation.Internal.DateTimeStringFormatter");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* DateTimeStringFormatter__ToString(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uBox< int>(::app::Uno::Int__typeof(), dateTime.Year()), ::uGetConstString("-")), DateTimeStringFormatter__Month(NULL, dateTime)), ::uGetConstString("-")), DateTimeStringFormatter__Day(NULL, dateTime)), ::uGetConstString(" ")), DateTimeStringFormatter__Hour(NULL, dateTime)), ::uGetConstString(":")), DateTimeStringFormatter__Minute(NULL, dateTime)), ::uGetConstString(":")), DateTimeStringFormatter__Second(NULL, dateTime));
}

::uString* DateTimeStringFormatter__PadWithZero(::uStatic* __this, int value)
{
    ::uString* stringValue = ::app::Uno::Int::ToString(value);
    return (::uPtr< ::uString*>(stringValue)->Length() == 1) ? ::app::Uno::String__op_Addition(NULL, ::uGetConstString("0"), stringValue) : stringValue;
}

::uString* DateTimeStringFormatter__Second(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return DateTimeStringFormatter__PadWithZero(NULL, dateTime.Second());
}

::uString* DateTimeStringFormatter__Minute(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return DateTimeStringFormatter__PadWithZero(NULL, dateTime.Minute());
}

::uString* DateTimeStringFormatter__Hour(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return DateTimeStringFormatter__PadWithZero(NULL, dateTime.Hour());
}

::uString* DateTimeStringFormatter__Day(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return DateTimeStringFormatter__PadWithZero(NULL, dateTime.Day());
}

::uString* DateTimeStringFormatter__Month(::uStatic* __this, ::app::Uno::DateTime dateTime)
{
    return DateTimeStringFormatter__PadWithZero(NULL, dateTime.Month());
}

}}}}}
