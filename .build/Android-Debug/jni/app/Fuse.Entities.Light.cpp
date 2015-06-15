// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Light.h>

namespace app {
namespace Fuse {
namespace Entities {

Light__uType* Light__typeof()
{
    static Light__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Light__uType*)::uAllocClassType(sizeof(Light__uType), "Fuse.Entities.Light", ::app::Fuse::Entities::Component__typeof());
        type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Light__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Light__OnRemoved;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Light__OnAdded(Light* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Light__OnRemoved(Light* __this, ::app::Fuse::Entities::Entity* e)
{
}

}}}
