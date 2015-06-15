// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

::uDelegateType* FocusLostHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Input.FocusLostHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
