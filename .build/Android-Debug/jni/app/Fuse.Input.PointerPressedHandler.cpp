// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

::uDelegateType* PointerPressedHandler__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Fuse.Input.PointerPressedHandler");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
