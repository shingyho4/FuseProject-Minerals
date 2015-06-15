// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_CLOCK_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_CLOCK_IMPL_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct DateTime; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct ClockImpl__uType : ::uClassType
{
};

ClockImpl__uType* ClockImpl__typeof();

::app::Uno::DateTime ClockImpl__GetLocalDateTime(::uStatic* __this);
double ClockImpl__GetSeconds(::uStatic* __this);

}}}}


#endif
