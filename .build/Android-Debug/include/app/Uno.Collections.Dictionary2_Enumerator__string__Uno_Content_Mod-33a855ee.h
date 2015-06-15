// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_CONTENT_MOD_33A855EE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_CONTENT_MOD_33A855EE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-712665e8.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-155cc651.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof();

::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);
Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source);

struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source) { Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Current();

    Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray& operator =(const Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray::Current() { return Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(this); }

}}}


#endif
