// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.Entity.h>

namespace app {
namespace Fuse {
namespace Entities {

Component__uType* Component__typeof()
{
    static Component__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Component__uType*)::uAllocClassType(sizeof(Component__uType), "Fuse.Entities.Component", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Component, _entity);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_entity";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Entities::Entity* Component__get_Entity(Component* __this)
{
    return __this->_entity;
}

void Component__Added(Component* __this, ::app::Fuse::Entities::Entity* e)
{
    __this->_entity = e;
    __this->OnAdded(e);
}

void Component__Removed(Component* __this, ::app::Fuse::Entities::Entity* e)
{
    __this->OnRemoved(e);
    __this->_entity = e;
}

void Component___ObjInit(Component* __this)
{
}

}}}
