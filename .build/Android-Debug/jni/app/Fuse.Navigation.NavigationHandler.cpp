// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uDelegateType* NavigationHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Navigation.NavigationHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
