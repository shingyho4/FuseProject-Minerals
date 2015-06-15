// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.TappedArgs.h>
#include <app/Fuse.Gestures.TappedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Gestures {

::uDelegateType* TappedHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Gestures.TappedHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
