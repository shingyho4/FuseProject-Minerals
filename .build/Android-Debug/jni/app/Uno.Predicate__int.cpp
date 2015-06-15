// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Predicate__int.h>

namespace app {
namespace Uno {

::uDelegateType* Predicate__int__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Uno.Predicate<int>");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
