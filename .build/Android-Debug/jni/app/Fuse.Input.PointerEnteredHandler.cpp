// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

::uDelegateType* PointerEnteredHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Input.PointerEnteredHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
