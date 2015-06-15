// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__bool.h>

namespace app {
namespace Fuse {
namespace Internal {

Blender__bool__uType* Blender__bool__typeof()
{
    static Blender__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Blender__bool__uType*)::uAllocClassType(sizeof(Blender__bool__uType), "Fuse.Internal.Blender<bool>", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
