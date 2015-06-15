// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_B-277da65f.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__typeof()
{
    static EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Batching.Batch>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch, Item);
        type->StrongRefOffsets[1] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Item";
        type->StrongRefNames[1] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* inst = (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch), ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
