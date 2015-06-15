// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRANSFORM_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Transform__typeof();

struct ICollection__Fuse_Transform
{
    int(*__fp_get_Count)(void*);
    void(*__fp_Add)(void*, ::app::Fuse::Transform*);
    bool(*__fp_Remove)(void*, ::app::Fuse::Transform*);

    static int Count(::uObject* __this) { return ((ICollection__Fuse_Transform*)uGetInterfacePtr(__this, ICollection__Fuse_Transform__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Fuse::Transform* item) { ((ICollection__Fuse_Transform*)uGetInterfacePtr(__this, ICollection__Fuse_Transform__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
    static bool Remove(::uObject* __this, ::app::Fuse::Transform* item) { return ((ICollection__Fuse_Transform*)uGetInterfacePtr(__this, ICollection__Fuse_Transform__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
