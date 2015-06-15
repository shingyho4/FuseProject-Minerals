// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-9697b912.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-4c5cf202.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof()
{
    static ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Batching.Batch>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerable__Fuse_Drawing_Batching_Batch, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1(NULL, __this->_source);
}

void ArrayEnumerable__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this, ::uArray* source)
{
    __this->_source = source;
}

ArrayEnumerable__Fuse_Drawing_Batching_Batch* ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Batching_Batch* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Batching_Batch), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
