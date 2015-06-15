// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.IFlush.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof()
{
    static HashSet1_Enumerator__Fuse_IFlush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HashSet1_Enumerator__Fuse_IFlush__uType*)::uAllocValueType(sizeof(HashSet1_Enumerator__Fuse_IFlush__uType), "Uno.Collections.HashSet1_Enumerator<Fuse.IFlush>", sizeof(HashSet1_Enumerator__Fuse_IFlush), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__Fuse_IFlush__Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__Fuse_IFlush__MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(HashSet1_Enumerator__Fuse_IFlush, _source);
        type->StrongRefOffsets[1] = offsetof(HashSet1_Enumerator__Fuse_IFlush, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* HashSet1_Enumerator__Fuse_IFlush__get_Current(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    return __this->_current;
}

void HashSet1_Enumerator__Fuse_IFlush__Dispose(HashSet1_Enumerator__Fuse_IFlush* __this)
{
}

bool HashSet1_Enumerator__Fuse_IFlush__MoveNext(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

void HashSet1_Enumerator__Fuse_IFlush___ObjInit(HashSet1_Enumerator__Fuse_IFlush* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(source)->_version;
    __this->_iterator = -1;
}

HashSet1_Enumerator__Fuse_IFlush HashSet1_Enumerator__Fuse_IFlush__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    HashSet1_Enumerator__Fuse_IFlush inst = ::uDefault< HashSet1_Enumerator__Fuse_IFlush>();
    inst._ObjInit(source);
    return inst;
}

}}}
