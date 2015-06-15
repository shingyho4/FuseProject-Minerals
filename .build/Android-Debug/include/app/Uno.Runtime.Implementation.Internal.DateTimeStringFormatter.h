// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_DATE_TIME_STRING_FORMATTER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_DATE_TIME_STRING_FORMATTER_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct DateTime; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct DateTimeStringFormatter__uType : ::uClassType
{
};

DateTimeStringFormatter__uType* DateTimeStringFormatter__typeof();

::uString* DateTimeStringFormatter__ToString(::uStatic* __this, ::app::Uno::DateTime dateTime);
::uString* DateTimeStringFormatter__PadWithZero(::uStatic* __this, int value);
::uString* DateTimeStringFormatter__Second(::uStatic* __this, ::app::Uno::DateTime dateTime);
::uString* DateTimeStringFormatter__Minute(::uStatic* __this, ::app::Uno::DateTime dateTime);
::uString* DateTimeStringFormatter__Hour(::uStatic* __this, ::app::Uno::DateTime dateTime);
::uString* DateTimeStringFormatter__Day(::uStatic* __this, ::app::Uno::DateTime dateTime);
::uString* DateTimeStringFormatter__Month(::uStatic* __this, ::app::Uno::DateTime dateTime);

}}}}}


#endif
