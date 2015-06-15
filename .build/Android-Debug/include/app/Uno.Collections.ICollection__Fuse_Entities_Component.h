// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Entities_Component__typeof();

struct ICollection__Fuse_Entities_Component
{
    void(*__fp_Add)(void*, ::app::Fuse::Entities::Component*);

    static void Add(::uObject* __this, ::app::Fuse::Entities::Component* item) { ((ICollection__Fuse_Entities_Component*)uGetInterfacePtr(__this, ICollection__Fuse_Entities_Component__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
