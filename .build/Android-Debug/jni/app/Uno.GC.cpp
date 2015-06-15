// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.GC.h>
#include <app/Uno.Object.h>

namespace app {
namespace Uno {

GC__uType* GC__typeof()
{
    static GC__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GC__uType*)::uAllocClassType(sizeof(GC__uType), "Uno.GC");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GC__SuppressFinalize(::uStatic* __this, ::uObject* obj)
{
}

}}
