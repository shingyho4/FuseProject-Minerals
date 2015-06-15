// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestResult.h>

namespace app {
namespace Fuse {

::uDelegateType* HitTestCallback__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.HitTestCallback");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
