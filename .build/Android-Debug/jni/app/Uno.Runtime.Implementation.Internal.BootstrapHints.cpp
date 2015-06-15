// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

int BootstrapHints___MaxFps;

BootstrapHints__uType* BootstrapHints__typeof()
{
    static BootstrapHints__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BootstrapHints__uType*)::uAllocClassType(sizeof(BootstrapHints__uType), "Uno.Runtime.Implementation.Internal.BootstrapHints");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int BootstrapHints__get_MaxFps(::uStatic* __this)
{
    return BootstrapHints___MaxFps;
}

void BootstrapHints__set_MaxFps(::uStatic* __this, int value)
{
    BootstrapHints___MaxFps = value;
}

}}}}}
