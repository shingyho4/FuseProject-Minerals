// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Input {

::uDelegateType* FocusDelegator__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Input.FocusDelegator");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
