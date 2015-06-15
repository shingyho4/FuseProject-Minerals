// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Double.h>
#include <app/Uno.FakeTime.h>

namespace app {
namespace Uno {

FakeTime__uType* FakeTime__typeof()
{
    static FakeTime__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FakeTime__uType*)::uAllocClassType(sizeof(FakeTime__uType), "Uno.FakeTime", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
