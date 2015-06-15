// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DepthPass.h>

namespace app {
namespace Fuse {

DepthPass__uType* DepthPass__typeof()
{
    static DepthPass__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DepthPass__uType*)::uAllocClassType(sizeof(DepthPass__uType), "Fuse.DepthPass", ::app::Fuse::Pass__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}
