// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_INDEX_BUFFER_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_INDEX_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct BatchIndexBuffer;

struct BatchIndexBuffer__uType : ::uClassType
{
};

BatchIndexBuffer__uType* BatchIndexBuffer__typeof();

int BatchIndexBuffer__get_DataType(BatchIndexBuffer* __this);
void BatchIndexBuffer__set_DataType(BatchIndexBuffer* __this, int value);
int BatchIndexBuffer__get_StrideInBytes(BatchIndexBuffer* __this);
::app::Uno::Buffer* BatchIndexBuffer__get_Buffer(BatchIndexBuffer* __this);
::app::Uno::Graphics::IndexBuffer* BatchIndexBuffer__get_IndexBuffer(BatchIndexBuffer* __this);
void BatchIndexBuffer__Write_1(BatchIndexBuffer* __this, ::uUShort value);
void BatchIndexBuffer__Flush(BatchIndexBuffer* __this);
void BatchIndexBuffer___ObjInit(BatchIndexBuffer* __this, int type, int maxIndices, bool staticBatch);
BatchIndexBuffer* BatchIndexBuffer__New_1(::uStatic* __this, int type, int maxIndices, bool staticBatch);
void BatchIndexBuffer___ObjInit_1(BatchIndexBuffer* __this, int type, ::app::Uno::Buffer* data);
BatchIndexBuffer* BatchIndexBuffer__New_2(::uStatic* __this, int type, ::app::Uno::Buffer* data);

struct BatchIndexBuffer : ::uObject
{
    int dataType;
    int maxIndices;
    int usage;
    ::uStrong< ::app::Uno::Buffer*> buf;
    int _position;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ibo;
    bool isDirty;

    void Write_1(::uUShort value) { BatchIndexBuffer__Write_1(this, value); }
    void Flush() { BatchIndexBuffer__Flush(this); }
    void _ObjInit(int type, int maxIndices, bool staticBatch) { BatchIndexBuffer___ObjInit(this, type, maxIndices, staticBatch); }
    void _ObjInit_1(int type, ::app::Uno::Buffer* data) { BatchIndexBuffer___ObjInit_1(this, type, data); }
    int DataType() { return BatchIndexBuffer__get_DataType(this); }
    void DataType(int value) { BatchIndexBuffer__set_DataType(this, value); }
    int StrideInBytes() { return BatchIndexBuffer__get_StrideInBytes(this); }
    ::app::Uno::Buffer* Buffer() { return BatchIndexBuffer__get_Buffer(this); }
    ::app::Uno::Graphics::IndexBuffer* IndexBuffer() { return BatchIndexBuffer__get_IndexBuffer(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

}}}}


#endif
