// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Entities_Entity__typeof();

struct IList__Fuse_Entities_Entity
{
    ::app::Fuse::Entities::Entity*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Entities::Entity* Item(::uObject* __this, int index) { return ((IList__Fuse_Entities_Entity*)uGetInterfacePtr(__this, IList__Fuse_Entities_Entity__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
