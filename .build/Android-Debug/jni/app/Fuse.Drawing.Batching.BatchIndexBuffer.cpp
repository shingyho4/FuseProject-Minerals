// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

BatchIndexBuffer__uType* BatchIndexBuffer__typeof()
{
    static BatchIndexBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BatchIndexBuffer__uType*)::uAllocClassType(sizeof(BatchIndexBuffer__uType), "Fuse.Drawing.Batching.BatchIndexBuffer", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(BatchIndexBuffer, buf);
        type->StrongRefOffsets[1] = offsetof(BatchIndexBuffer, ibo);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "buf";
        type->StrongRefNames[1] = "ibo";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int BatchIndexBuffer__get_DataType(BatchIndexBuffer* __this)
{
    return __this->dataType;
}

void BatchIndexBuffer__set_DataType(BatchIndexBuffer* __this, int value)
{
    if (__this->buf != NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Index type cannot be changed after buffer is written to")));
    }

    __this->dataType = value;
}

int BatchIndexBuffer__get_StrideInBytes(BatchIndexBuffer* __this)
{
    return ::app::Uno::Graphics::IndexTypeHelpers__GetStrideInBytes(NULL, __this->DataType());
}

::app::Uno::Buffer* BatchIndexBuffer__get_Buffer(BatchIndexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        __this->buf = ::app::Uno::Buffer__New_3(NULL, __this->maxIndices * __this->StrideInBytes());
    }

    return __this->buf;
}

::app::Uno::Graphics::IndexBuffer* BatchIndexBuffer__get_IndexBuffer(BatchIndexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        return NULL;
    }

    if (__this->ibo == NULL)
    {
        __this->ibo = ::app::Uno::Graphics::IndexBuffer__New_2(NULL, ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SizeInBytes(), __this->usage);
    }

    __this->Flush();
    return __this->ibo;
}

void BatchIndexBuffer__Write_1(BatchIndexBuffer* __this, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort(__this->_position, value, true);
    __this->_position = __this->_position + 2;
}

void BatchIndexBuffer__Flush(BatchIndexBuffer* __this)
{
    if ((__this->buf != NULL) && __this->isDirty)
    {
        ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->ibo)->Update(__this->buf);
        __this->isDirty = false;
    }
}

void BatchIndexBuffer___ObjInit(BatchIndexBuffer* __this, int type, int maxIndices, bool staticBatch)
{
    __this->isDirty = true;
    __this->dataType = type;
    __this->maxIndices = maxIndices;
    __this->usage = staticBatch ? 0 : 1;
}

BatchIndexBuffer* BatchIndexBuffer__New_1(::uStatic* __this, int type, int maxIndices, bool staticBatch)
{
    BatchIndexBuffer* inst = (::app::Fuse::Drawing::Batching::BatchIndexBuffer*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::BatchIndexBuffer), ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof());
    inst->_ObjInit(type, maxIndices, staticBatch);
    return inst;
}

void BatchIndexBuffer___ObjInit_1(BatchIndexBuffer* __this, int type, ::app::Uno::Buffer* data)
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

BatchIndexBuffer* BatchIndexBuffer__New_2(::uStatic* __this, int type, ::app::Uno::Buffer* data)
{
    BatchIndexBuffer* inst = (::app::Fuse::Drawing::Batching::BatchIndexBuffer*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::BatchIndexBuffer), ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof());
    inst->_ObjInit_1(type, data);
    return inst;
}

}}}}
