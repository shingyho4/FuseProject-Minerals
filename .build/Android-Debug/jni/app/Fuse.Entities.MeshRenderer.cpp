// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.MeshRenderer.h>

namespace app {
namespace Fuse {
namespace Entities {

MeshRenderer__uType* MeshRenderer__typeof()
{
    static MeshRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MeshRenderer__uType*)::uAllocClassType(sizeof(MeshRenderer__uType), "Fuse.Entities.MeshRenderer", ::app::Fuse::Entities::MeshRendererBase__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
