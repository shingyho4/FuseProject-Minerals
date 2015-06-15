// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__float4.h>

namespace app {
namespace Fuse {
namespace Internal {

Blender__float4__uType* Blender__float4__typeof()
{
    static Blender__float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Blender__float4__uType*)::uAllocClassType(sizeof(Blender__float4__uType), "Fuse.Internal.Blender<float4>", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Blender__float4___ObjInit(Blender__float4* __this)
{
}

}}}
