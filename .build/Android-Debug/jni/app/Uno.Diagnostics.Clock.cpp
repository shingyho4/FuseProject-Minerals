// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>

namespace app {
namespace Uno {
namespace Diagnostics {

Clock__uType* Clock__typeof()
{
    static Clock__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Clock__uType*)::uAllocClassType(sizeof(Clock__uType), "Uno.Diagnostics.Clock");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double Clock__GetSeconds(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
}

}}}
