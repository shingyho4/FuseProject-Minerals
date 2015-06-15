// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.AssertionHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Diagnostics {

::uDelegateType* AssertionHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Uno.Diagnostics.AssertionHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
