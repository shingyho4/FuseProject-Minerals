// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_EFFECTS_EFFECT_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Effects_Effect__typeof();

struct ICollection__Fuse_Effects_Effect
{
    int(*__fp_get_Count)(void*);
    void(*__fp_Add)(void*, ::app::Fuse::Effects::Effect*);

    static int Count(::uObject* __this) { return ((ICollection__Fuse_Effects_Effect*)uGetInterfacePtr(__this, ICollection__Fuse_Effects_Effect__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Fuse::Effects::Effect* item) { ((ICollection__Fuse_Effects_Effect*)uGetInterfacePtr(__this, ICollection__Fuse_Effects_Effect__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
