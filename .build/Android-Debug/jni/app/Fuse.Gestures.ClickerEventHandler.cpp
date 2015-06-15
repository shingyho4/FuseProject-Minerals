// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Gestures {

::uDelegateType* ClickerEventHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Gestures.ClickerEventHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
