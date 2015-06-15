// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_VERTEX_BUFFER_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_VERTEX_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct BatchVertexBuffer;

struct BatchVertexBuffer__uType : ::uClassType
{
};

BatchVertexBuffer__uType* BatchVertexBuffer__typeof();

int BatchVertexBuffer__get_DataType(BatchVertexBuffer* __this);
void BatchVertexBuffer__set_DataType(BatchVertexBuffer* __this, int value);
int BatchVertexBuffer__get_StrideInBytes(BatchVertexBuffer* __this);
::app::Uno::Buffer* BatchVertexBuffer__get_Buffer(BatchVertexBuffer* __this);
::app::Uno::Graphics::VertexBuffer* BatchVertexBuffer__get_VertexBuffer(BatchVertexBuffer* __this);
void BatchVertexBuffer__Write(BatchVertexBuffer* __this, ::app::Uno::Float2 value);
void BatchVertexBuffer__Write_1(BatchVertexBuffer* __this, ::app::Uno::Float3 value);
void BatchVertexBuffer__Write_2(BatchVertexBuffer* __this, ::app::Uno::Float4 value);
void BatchVertexBuffer__Write_5(BatchVertexBuffer* __this, ::app::Uno::Byte4 value);
void BatchVertexBuffer__Write_9(BatchVertexBuffer* __this, ::uUShort value);
void BatchVertexBuffer__Flush(BatchVertexBuffer* __this);
void BatchVertexBuffer___ObjInit(BatchVertexBuffer* __this, int type, int maxVertices, bool staticBatch);
BatchVertexBuffer* BatchVertexBuffer__New_1(::uStatic* __this, int type, int maxVertices, bool staticBatch);
void BatchVertexBuffer___ObjInit_1(BatchVertexBuffer* __this, int type, ::app::Uno::Buffer* data);
BatchVertexBuffer* BatchVertexBuffer__New_2(::uStatic* __this, int type, ::app::Uno::Buffer* data);

struct BatchVertexBuffer : ::uObject
{
    int dataType;
    int maxVertices;
    int usage;
    ::uStrong< ::app::Uno::Buffer*> buf;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> vbo;
    int _position;
    bool isDirty;

    void Write(::app::Uno::Float2 value);
    void Write_1(::app::Uno::Float3 value);
    void Write_2(::app::Uno::Float4 value);
    void Write_5(::app::Uno::Byte4 value);
    void Write_9(::uUShort value) { BatchVertexBuffer__Write_9(this, value); }
    void Flush() { BatchVertexBuffer__Flush(this); }
    void _ObjInit(int type, int maxVertices, bool staticBatch) { BatchVertexBuffer___ObjInit(this, type, maxVertices, staticBatch); }
    void _ObjInit_1(int type, ::app::Uno::Buffer* data) { BatchVertexBuffer___ObjInit_1(this, type, data); }
    int DataType() { return BatchVertexBuffer__get_DataType(this); }
    void DataType(int value) { BatchVertexBuffer__set_DataType(this, value); }
    int StrideInBytes() { return BatchVertexBuffer__get_StrideInBytes(this); }
    ::app::Uno::Buffer* Buffer() { return BatchVertexBuffer__get_Buffer(this); }
    ::app::Uno::Graphics::VertexBuffer* VertexBuffer() { return BatchVertexBuffer__get_VertexBuffer(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

inline void BatchVertexBuffer::Write(::app::Uno::Float2 value) { BatchVertexBuffer__Write(this, value); }
inline void BatchVertexBuffer::Write_1(::app::Uno::Float3 value) { BatchVertexBuffer__Write_1(this, value); }
inline void BatchVertexBuffer::Write_2(::app::Uno::Float4 value) { BatchVertexBuffer__Write_2(this, value); }
inline void BatchVertexBuffer::Write_5(::app::Uno::Byte4 value) { BatchVertexBuffer__Write_5(this, value); }

}}}}


#endif
