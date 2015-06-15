// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Pass.h>

namespace app {
namespace Fuse {

Pass__uType* Pass__typeof()
{
    static Pass__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Pass__uType*)::uAllocClassType(sizeof(Pass__uType), "Fuse.Pass", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Pass___ObjInit(Pass* __this)
{
}

}}
