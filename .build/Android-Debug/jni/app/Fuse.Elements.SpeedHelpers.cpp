// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.SpeedHelpers.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Elements {

SpeedHelpers__uType* SpeedHelpers__typeof()
{
    static SpeedHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SpeedHelpers__uType*)::uAllocClassType(sizeof(SpeedHelpers__uType), "Fuse.Elements.SpeedHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool SpeedHelpers__FastEquals(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return (((a.X == b.X) && (a.Y == b.Y)) && (a.Z == b.Z)) && (a.W == b.W);
}

bool SpeedHelpers__FastEquals_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return (a.X == b.X) && (a.Y == b.Y);
}

}}}
