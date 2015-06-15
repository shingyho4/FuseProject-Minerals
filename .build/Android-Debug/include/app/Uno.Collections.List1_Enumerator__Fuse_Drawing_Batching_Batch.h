// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Batching_Batch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Batching_Batch;

struct List1_Enumerator__Fuse_Drawing_Batching_Batch__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Batching_Batch__uType* List1_Enumerator__Fuse_Drawing_Batching_Batch__typeof();

::app::Fuse::Drawing::Batching::Batch* List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
void List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
bool List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
void List1_Enumerator__Fuse_Drawing_Batching_Batch___ObjInit(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source);
List1_Enumerator__Fuse_Drawing_Batching_Batch List1_Enumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source);

struct List1_Enumerator__Fuse_Drawing_Batching_Batch
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Batching::Batch*> _current;

    void Dispose() { List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source) { List1_Enumerator__Fuse_Drawing_Batching_Batch___ObjInit(this, source); }
    ::app::Fuse::Drawing::Batching::Batch* Current() { return List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current(this); }

    List1_Enumerator__Fuse_Drawing_Batching_Batch& operator =(const List1_Enumerator__Fuse_Drawing_Batching_Batch& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Drawing_Batching_Batch__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
