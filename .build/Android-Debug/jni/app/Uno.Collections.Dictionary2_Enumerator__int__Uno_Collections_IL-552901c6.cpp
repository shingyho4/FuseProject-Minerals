// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-e2be1e95.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-f23f0de.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-552901c6.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocValueType(sizeof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary2_Enumerator<int,Uno.Collections.IList<Fuse.Input.Capturer>>", sizeof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _current._value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current._value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_current;
}

void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
}

bool Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(source)->_version;
    __this->_iterator = -1;
}

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(source);
    return inst;
}

}}}
