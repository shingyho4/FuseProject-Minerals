// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Elements_Element__typeof();

struct ICollection__Fuse_Elements_Element
{
    int(*__fp_get_Count)(void*);
    void(*__fp_Clear)(void*);
    void(*__fp_Add)(void*, ::app::Fuse::Elements::Element*);
    bool(*__fp_Remove)(void*, ::app::Fuse::Elements::Element*);
    bool(*__fp_Contains)(void*, ::app::Fuse::Elements::Element*);

    static int Count(::uObject* __this) { return ((ICollection__Fuse_Elements_Element*)uGetInterfacePtr(__this, ICollection__Fuse_Elements_Element__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Clear(::uObject* __this) { ((ICollection__Fuse_Elements_Element*)uGetInterfacePtr(__this, ICollection__Fuse_Elements_Element__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Fuse::Elements::Element* item) { ((ICollection__Fuse_Elements_Element*)uGetInterfacePtr(__this, ICollection__Fuse_Elements_Element__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
    static bool Remove(::uObject* __this, ::app::Fuse::Elements::Element* item) { return ((ICollection__Fuse_Elements_Element*)uGetInterfacePtr(__this, ICollection__Fuse_Elements_Element__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
    static bool Contains(::uObject* __this, ::app::Fuse::Elements::Element* item) { return ((ICollection__Fuse_Elements_Element*)uGetInterfacePtr(__this, ICollection__Fuse_Elements_Element__typeof()))->__fp_Contains((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
