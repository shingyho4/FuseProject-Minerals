// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Batching_Batch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Batching_Batch;

struct List__Fuse_Drawing_Batching_Batch__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch __interface_0;
};

List__Fuse_Drawing_Batching_Batch__uType* List__Fuse_Drawing_Batching_Batch__typeof();

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch List__Fuse_Drawing_Batching_Batch__GetEnumerator(List__Fuse_Drawing_Batching_Batch* __this);
::uArray* List__Fuse_Drawing_Batching_Batch__ToArray(List__Fuse_Drawing_Batching_Batch* __this);
void List__Fuse_Drawing_Batching_Batch__EnsureCapacity(List__Fuse_Drawing_Batching_Batch* __this);
void List__Fuse_Drawing_Batching_Batch__Add(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item);
void List__Fuse_Drawing_Batching_Batch___ObjInit(List__Fuse_Drawing_Batching_Batch* __this);
List__Fuse_Drawing_Batching_Batch* List__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this);
::uObject* List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed(List__Fuse_Drawing_Batching_Batch* __this);

struct List__Fuse_Drawing_Batching_Batch : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch GetEnumerator();
    ::uArray* ToArray() { return List__Fuse_Drawing_Batching_Batch__ToArray(this); }
    void EnsureCapacity() { List__Fuse_Drawing_Batching_Batch__EnsureCapacity(this); }
    void Add(::app::Fuse::Drawing::Batching::Batch* item) { List__Fuse_Drawing_Batching_Batch__Add(this, item); }
    void _ObjInit() { List__Fuse_Drawing_Batching_Batch___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Batching_Batch.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch List__Fuse_Drawing_Batching_Batch::GetEnumerator() { return List__Fuse_Drawing_Batching_Batch__GetEnumerator(this); }

}}}


#endif
