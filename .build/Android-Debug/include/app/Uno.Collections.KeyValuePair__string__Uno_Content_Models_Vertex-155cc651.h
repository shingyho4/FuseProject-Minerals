// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_CONTENT_MODELS_VERTEX_155CC651_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_CONTENT_MODELS_VERTEX_155CC651_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Content_Models_VertexAttributeArray;

struct KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType : ::uValueType
{
};

KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__uType* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__typeof();

::uString* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Key(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Content::Models::VertexAttributeArray* KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Value(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this);
void KeyValuePair__string__Uno_Content_Models_VertexAttributeArray___ObjInit(KeyValuePair__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);
KeyValuePair__string__Uno_Content_Models_VertexAttributeArray KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);

struct KeyValuePair__string__Uno_Content_Models_VertexAttributeArray
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Content::Models::VertexAttributeArray*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value) { KeyValuePair__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Key(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Value() { return KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__get_Value(this); }

    KeyValuePair__string__Uno_Content_Models_VertexAttributeArray& operator =(const KeyValuePair__string__Uno_Content_Models_VertexAttributeArray& copy)
    {
        ::uCopyValue(this, KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
