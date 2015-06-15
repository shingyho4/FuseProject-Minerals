// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Predicate__Fuse_Node.h>

namespace app {
namespace Uno {

::uDelegateType* Predicate__Fuse_Node__typeof()
{
    static ::uDelegateType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = ::uAllocDelegateType("Uno.Predicate<Fuse.Node>");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
