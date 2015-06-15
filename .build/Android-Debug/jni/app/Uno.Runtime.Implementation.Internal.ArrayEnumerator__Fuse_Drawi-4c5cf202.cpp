// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-4c5cf202.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof()
{
    static ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Batching.Batch>", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Batching::Batch*(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _source);
        type->StrongRefOffsets[1] = offsetof(ArrayEnumerator__Fuse_Drawing_Batching_Batch, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Batching::Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
    return __this->_current;
}

void ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
}

bool ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Batching::Batch*>(__this->_iterator);
        return true;
    }

    return false;
}

void ArrayEnumerator__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

ArrayEnumerator__Fuse_Drawing_Batching_Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Batching_Batch* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Batching_Batch), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
