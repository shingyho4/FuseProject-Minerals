// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_STRIN_712665E8_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_KEY_VALUE_PAIR_STRIN_712665E8_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Content_Models_VertexAttributeArray; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof();

struct IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_
{
    ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }

}}}


#endif