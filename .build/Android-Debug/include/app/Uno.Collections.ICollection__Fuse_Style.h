// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_STYLE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_STYLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Style; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Style__typeof();

struct ICollection__Fuse_Style
{
    int(*__fp_get_Count)(void*);
    void(*__fp_Add)(void*, ::app::Fuse::Style*);

    static int Count(::uObject* __this) { return ((ICollection__Fuse_Style*)uGetInterfacePtr(__this, ICollection__Fuse_Style__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Fuse::Style* item) { ((ICollection__Fuse_Style*)uGetInterfacePtr(__this, ICollection__Fuse_Style__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
