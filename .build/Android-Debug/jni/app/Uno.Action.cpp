// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Action.h>

namespace app {
namespace Uno {

::uDelegateType* Action__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Uno.Action");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
