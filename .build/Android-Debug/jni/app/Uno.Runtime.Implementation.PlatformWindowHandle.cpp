// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

PlatformWindowHandle__uType* PlatformWindowHandle__typeof()
{
    static PlatformWindowHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PlatformWindowHandle__uType*)::uAllocValueType(sizeof(PlatformWindowHandle__uType), "Uno.Runtime.Implementation.PlatformWindowHandle", sizeof(::Xli::Window*));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}}
