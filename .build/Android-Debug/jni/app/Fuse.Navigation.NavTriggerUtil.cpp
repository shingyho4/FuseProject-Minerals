// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavTriggerUtil.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavTriggerUtil__uType* NavTriggerUtil__typeof()
{
    static NavTriggerUtil__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavTriggerUtil__uType*)::uAllocClassType(sizeof(NavTriggerUtil__uType), "Fuse.Navigation.NavTriggerUtil");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool NavTriggerUtil__CrossesZero(::uStatic* __this, double a, double b)
{
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

int NavTriggerUtil__Opposite(::uStatic* __this, int v)
{
    return (v == 0) ? 1 : 0;
}

}}}
