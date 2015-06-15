// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocValueType(sizeof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.KeyValuePair<string,Uno.Content.Models.VertexAttributeArray>", sizeof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray), 0, 2);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _key);
        type->StrongRefOffsets[1] = offsetof(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Key(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_key;
}

::app::Uno::Content::Models::VertexAttributeArray* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Value(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_value;
}

void KeyValuePair__string__Uno_Content_Models_VertexAttributeArray___ObjInit(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__string__Uno_Content_Models_VertexAttributeArray KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    KeyValuePair__string__Uno_Content_Models_VertexAttributeArray inst = ::uDefault< KeyValuePair__string__Uno_Content_Models_VertexAttributeArray>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
