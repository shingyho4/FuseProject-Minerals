// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Action__double.h>
#include <app/Uno.Double.h>

namespace app {
namespace Uno {

::uDelegateType* Action__double__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Uno.Action<double>");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
