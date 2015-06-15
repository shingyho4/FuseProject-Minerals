// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>

namespace app {
namespace Fuse {
namespace Entities {

Material__uType* Material__typeof()
{
    static Material__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Material__uType*)::uAllocClassType(sizeof(Material__uType), "Fuse.Entities.Material", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Material__get_IsBatchable(Material* __this)
{
    return true;
}

bool Material__Draw(Material* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 transform)
{
    return false;
}

}}}
