// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_9697B912_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_9697B912_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Drawing_Batching_Batch;

struct ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch __interface_0;
};

ArrayEnumerable__Fuse_Drawing_Batching_Batch__uType* ArrayEnumerable__Fuse_Drawing_Batching_Batch__typeof();

::uObject* ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this);
void ArrayEnumerable__Fuse_Drawing_Batching_Batch___ObjInit(ArrayEnumerable__Fuse_Drawing_Batching_Batch* __this, ::uArray* source);
ArrayEnumerable__Fuse_Drawing_Batching_Batch* ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Drawing_Batching_Batch : ::uObject
{
    ::uStrong< ::uArray*> _source;

    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Drawing_Batching_Batch__GetEnumerator(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Drawing_Batching_Batch___ObjInit(this, source); }
};

}}}}}


#endif
