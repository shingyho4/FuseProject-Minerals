// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__float.h>

namespace app {
namespace Fuse {
namespace Internal {

Blender__float__uType* Blender__float__typeof()
{
    static Blender__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Blender__float__uType*)::uAllocClassType(sizeof(Blender__float__uType), "Fuse.Internal.Blender<float>", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Blender__float___ObjInit(Blender__float* __this)
{
}

}}}
