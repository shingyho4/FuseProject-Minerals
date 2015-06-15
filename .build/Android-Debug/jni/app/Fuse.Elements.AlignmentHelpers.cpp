// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Elements {

AlignmentHelpers__uType* AlignmentHelpers__typeof()
{
    static AlignmentHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (AlignmentHelpers__uType*)::uAllocClassType(sizeof(AlignmentHelpers__uType), "Fuse.Elements.AlignmentHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int AlignmentHelpers__GetVerticalAlign(::uStatic* __this, int a)
{
    return a & 12;
}

int AlignmentHelpers__GetHorizontalAlign(::uStatic* __this, int a)
{
    return a & 3;
}

}}}
