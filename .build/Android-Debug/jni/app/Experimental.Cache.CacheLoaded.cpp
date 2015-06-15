// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Cache.CacheLoaded.h>
#include <app/Experimental.Cache.ICacheReader.h>

namespace app {
namespace Experimental {
namespace Cache {

::uDelegateType* CacheLoaded__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Experimental.Cache.CacheLoaded");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
