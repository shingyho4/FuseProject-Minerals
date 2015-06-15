// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_4C5CF202_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_4C5CF202_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Drawing_Batching_Batch;

struct ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerator__Fuse_Drawing_Batching_Batch__typeof();

::app::Fuse::Drawing::Batching::Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this);
void ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this);
bool ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this);
void ArrayEnumerator__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerator__Fuse_Drawing_Batching_Batch* __this, ::uArray* source);
ArrayEnumerator__Fuse_Drawing_Batching_Batch* ArrayEnumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__Fuse_Drawing_Batching_Batch : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Batching::Batch*> _current;

    void Dispose() { ArrayEnumerator__Fuse_Drawing_Batching_Batch__Dispose(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Drawing_Batching_Batch__MoveNext(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Drawing_Batching_Batch___ObjInit(this, source); }
    ::app::Fuse::Drawing::Batching::Batch* Current() { return ArrayEnumerator__Fuse_Drawing_Batching_Batch__get_Current(this); }
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

}}}}}


#endif
