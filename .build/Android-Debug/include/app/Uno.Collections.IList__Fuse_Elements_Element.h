// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Elements_Element__typeof();

struct IList__Fuse_Elements_Element
{
    ::app::Fuse::Elements::Element*(*__fp_get_Item)(void*, int);
    void(*__fp_Insert)(void*, int, ::app::Fuse::Elements::Element*);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Fuse::Elements::Element* Item(::uObject* __this, int index) { return ((IList__Fuse_Elements_Element*)uGetInterfacePtr(__this, IList__Fuse_Elements_Element__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
    static void Insert(::uObject* __this, int index, ::app::Fuse::Elements::Element* item) { ((IList__Fuse_Elements_Element*)uGetInterfacePtr(__this, IList__Fuse_Elements_Element__typeof()))->__fp_Insert((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index, item); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Fuse_Elements_Element*)uGetInterfacePtr(__this, IList__Fuse_Elements_Element__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
