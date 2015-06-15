// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Cache {

::uInterfaceType* ICacheReader__typeof()
{
    static ::uInterfaceType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocInterfaceType("Experimental.Cache.ICacheReader");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
