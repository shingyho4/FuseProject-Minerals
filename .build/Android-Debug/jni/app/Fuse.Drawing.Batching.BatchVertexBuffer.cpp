// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

BatchVertexBuffer__uType* BatchVertexBuffer__typeof()
{
    static BatchVertexBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BatchVertexBuffer__uType*)::uAllocClassType(sizeof(BatchVertexBuffer__uType), "Fuse.Drawing.Batching.BatchVertexBuffer", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(BatchVertexBuffer, buf);
        type->StrongRefOffsets[1] = offsetof(BatchVertexBuffer, vbo);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "buf";
        type->StrongRefNames[1] = "vbo";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int BatchVertexBuffer__get_DataType(BatchVertexBuffer* __this)
{
    return __this->dataType;
}

void BatchVertexBuffer__set_DataType(BatchVertexBuffer* __this, int value)
{
    if (__this->buf != NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Vertex attribute type cannot be changed after Bufferfer is written to")));
    }

    __this->dataType = value;
}

int BatchVertexBuffer__get_StrideInBytes(BatchVertexBuffer* __this)
{
    return ::app::Uno::Graphics::VertexAttributeTypeHelpers__GetStrideInBytes(NULL, __this->DataType());
}

::app::Uno::Buffer* BatchVertexBuffer__get_Buffer(BatchVertexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        __this->buf = ::app::Uno::Buffer__New_3(NULL, __this->maxVertices * __this->StrideInBytes());
    }

    return __this->buf;
}

::app::Uno::Graphics::VertexBuffer* BatchVertexBuffer__get_VertexBuffer(BatchVertexBuffer* __this)
{
    if (__this->Buffer() == NULL)
    {
        return NULL;
    }

    __this->Flush();
    return __this->vbo;
}

void BatchVertexBuffer__Write(BatchVertexBuffer* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat2(__this->_position, value, true);
    __this->_position = __this->_position + 8;
}

void BatchVertexBuffer__Write_1(BatchVertexBuffer* __this, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat3(__this->_position, value, true);
    __this->_position = __this->_position + 12;
}

void BatchVertexBuffer__Write_2(BatchVertexBuffer* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat4(__this->_position, value, true);
    __this->_position = __this->_position + 16;
}

void BatchVertexBuffer__Write_5(BatchVertexBuffer* __this, ::app::Uno::Byte4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetByte4(__this->_position, value);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_9(BatchVertexBuffer* __this, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort(__this->_position, value, true);
    __this->_position = __this->_position + 2;
}

void BatchVertexBuffer__Flush(BatchVertexBuffer* __this)
{
    if ((__this->buf != NULL) && __this->isDirty)
    {
        if (__this->vbo == NULL)
        {
            __this->vbo = ::app::Uno::Graphics::VertexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SizeInBytes(), __this->usage);
        }

        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->vbo)->Update(__this->buf);
        __this->isDirty = false;
    }
}

void BatchVertexBuffer___ObjInit(BatchVertexBuffer* __this, int type, int maxVertices, bool staticBatch)
{
    __this->isDirty = true;
    __this->DataType(type);
    __this->maxVertices = maxVertices;
    __this->usage = staticBatch ? 0 : 1;
}

BatchVertexBuffer* BatchVertexBuffer__New_1(::uStatic* __this, int type, int maxVertices, bool staticBatch)
{
    BatchVertexBuffer* inst = (::app::Fuse::Drawing::Batching::BatchVertexBuffer*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::BatchVertexBuffer), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof());
    inst->_ObjInit(type, maxVertices, staticBatch);
    return inst;
}

void BatchVertexBuffer___ObjInit_1(BatchVertexBuffer* __this, int type, ::app::Uno::Buffer* data)
{
    __this->isDirty = true;
    __this->DataType(type);
    __this->usage = 0;
    __this->buf = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->buf)->SizeInBytes(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(__this->buf)->Item(i, data->Item(i));
    }
}

BatchVertexBuffer* BatchVertexBuffer__New_2(::uStatic* __this, int type, ::app::Uno::Buffer* data)
{
    BatchVertexBuffer* inst = (::app::Fuse::Drawing::Batching::BatchVertexBuffer*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::BatchVertexBuffer), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof());
    inst->_ObjInit_1(type, data);
    return inst;
}

}}}}
