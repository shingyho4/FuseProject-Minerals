// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.ResizedArgs.h>
#include <app/Fuse.ResizedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {

::uDelegateType* ResizedHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.ResizedHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
