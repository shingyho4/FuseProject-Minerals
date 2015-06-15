// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

WindingRules__uType* WindingRules__typeof()
{
    static WindingRules__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WindingRules__uType*)::uAllocClassType(sizeof(WindingRules__uType), "Fuse.Drawing.WindingRules");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WindingRules__Odd(::uStatic* __this, int n)
{
    return (n & 1) != 0;
}

bool WindingRules__NonZero(::uStatic* __this, int n)
{
    return n != 0;
}

}}}
