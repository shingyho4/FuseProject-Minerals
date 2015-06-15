// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_VERTEX_AT_F3A424EF_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_VERTEX_AT_F3A424EF_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-2ea2d722.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-ae1db1cc.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_ __interface_0;
};

Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof();

::app::Uno::Content::Models::VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__set_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Rehash(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Add(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__TryGetValue(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray** value);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
Dictionary__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this);
::uObject* Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Content_Models_VertexAttributeArray__Rehash(this); }
    void Add(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value) { Dictionary__string__Uno_Content_Models_VertexAttributeArray__Add(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray** value) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Item(::uString* key) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Item(this, key); }
    void Item(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value) { Dictionary__string__Uno_Content_Models_VertexAttributeArray__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Content_Mod-33a855ee.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary__string__Uno_Content_Models_VertexAttributeArray::GetEnumerator() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(this); }

}}}


#endif
