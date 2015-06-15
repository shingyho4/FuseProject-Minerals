// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.TitleChangedArgs.h>
#include <app/Fuse.Navigation.TitleChangedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uDelegateType* TitleChangedHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Navigation.TitleChangedHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
