// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-f3a424ef.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-2ea2d722.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Content_Mod-33a855ee.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocValueType(sizeof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.Dictionary2_Enumerator<string,Uno.Content.Models.VertexAttributeArray>", sizeof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray), 3, 3);
        type->__interface_0.__fp_get_Current = (::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray(*)(void*))Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _source);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _current._key);
        type->StrongRefOffsets[2] = offsetof(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray, _current._value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current._key";
        type->StrongRefNames[2] = "_current._value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__get_Current(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return __this->_current;
}

void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__Dispose(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
}

bool Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__MoveNext(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

void Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(source)->_version;
    __this->_iterator = -1;
}

Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* source)
{
    Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray inst = ::uDefault< Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray>();
    inst._ObjInit(source);
    return inst;
}

}}}
