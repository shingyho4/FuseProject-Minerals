// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationProgressChangedHandler.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uDelegateType* NavigationProgressChangedHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Navigation.NavigationProgressChangedHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
