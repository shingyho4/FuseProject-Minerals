// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Enumerator__string__string__uType* Dictionary2_Enumerator__string__string__typeof()
{
    static Dictionary2_Enumerator__string__string__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Enumerator__string__string__uType*)::uAllocValueType(sizeof(Dictionary2_Enumerator__string__string__uType), "Uno.Collections.Dictionary2_Enumerator<string,string>", sizeof(Dictionary2_Enumerator__string__string), 2, 3);
        type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__string__string__Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__string__string__MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(Dictionary2_Enumerator__string__string__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Dictionary2_Enumerator__string__string__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(Dictionary2_Enumerator__string__string, _source);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Enumerator__string__string, _current._key);
        type->StrongRefOffsets[2] = offsetof(Dictionary2_Enumerator__string__string, _current._value);
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

::app::Uno::Collections::KeyValuePair__string__string Dictionary2_Enumerator__string__string__get_Current(Dictionary2_Enumerator__string__string* __this)
{
    return __this->_current;
}

void Dictionary2_Enumerator__string__string__Dispose(Dictionary2_Enumerator__string__string* __this)
{
}

bool Dictionary2_Enumerator__string__string__MoveNext(Dictionary2_Enumerator__string__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__string__string__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

void Dictionary2_Enumerator__string__string___ObjInit(Dictionary2_Enumerator__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(source)->_version;
    __this->_iterator = -1;
}

Dictionary2_Enumerator__string__string Dictionary2_Enumerator__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_Enumerator__string__string inst = ::uDefault< Dictionary2_Enumerator__string__string>();
    inst._ObjInit(source);
    return inst;
}

}}}
