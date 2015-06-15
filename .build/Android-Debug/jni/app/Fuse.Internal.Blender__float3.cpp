// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__float3.h>

namespace app {
namespace Fuse {
namespace Internal {

Blender__float3__uType* Blender__float3__typeof()
{
    static Blender__float3__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Blender__float3__uType*)::uAllocClassType(sizeof(Blender__float3__uType), "Fuse.Internal.Blender<float3>", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Blender__float3___ObjInit(Blender__float3* __this)
{
}

}}}
