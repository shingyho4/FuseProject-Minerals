// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

::uDelegateType* TextEnteredHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Input.TextEnteredHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}