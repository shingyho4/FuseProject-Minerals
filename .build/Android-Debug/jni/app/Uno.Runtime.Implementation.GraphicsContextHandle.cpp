// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

GraphicsContextHandle__uType* GraphicsContextHandle__typeof()
{
    static GraphicsContextHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GraphicsContextHandle__uType*)::uAllocValueType(sizeof(GraphicsContextHandle__uType), "Uno.Runtime.Implementation.GraphicsContextHandle", sizeof(::uGraphicsContext));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}}
