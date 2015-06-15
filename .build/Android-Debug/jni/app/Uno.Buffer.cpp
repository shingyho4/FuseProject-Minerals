// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Buffer.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Buffer__uType* Buffer__typeof()
{
    static Buffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Buffer__uType*)::uAllocClassType(sizeof(Buffer__uType), "Uno.Buffer", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Buffer, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Buffer__get_SizeInBytes(Buffer* __this)
{
    return __this->_sizeInBytes;
}

::uArray* Buffer__get_GetHandle(Buffer* __this)
{
    return __this->_data;
}

::uArray* Buffer__get_SetHandle(Buffer* __this)
{
    if (__this->_isReadOnly)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Buffer is read only")));
    }

    return __this->_data;
}

::uByte Buffer__get_Item(Buffer* __this, int offset)
{
    return __this->GetByte(offset);
}

void Buffer__set_Item(Buffer* __this, int offset, ::uByte value)
{
    __this->SetByte(offset, value);
}

::uSByte Buffer__GetSByte(Buffer* __this, int offset)
{
    return (::uSByte)::uPtr< ::uArray*>(__this->GetHandle())->Item< ::uByte>(__this->_offset + offset);
}

::app::Uno::SByte4 Buffer__GetSByte4(Buffer* __this, int offset)
{
    return ::app::Uno::SByte4__New_2(NULL, __this->GetSByte(offset), __this->GetSByte(offset + 1), __this->GetSByte(offset + 2), __this->GetSByte(offset + 3));
}

::uByte Buffer__GetByte(Buffer* __this, int offset)
{
    return ::uPtr< ::uArray*>(__this->GetHandle())->Item< ::uByte>(__this->_offset + offset);
}

void Buffer__SetByte(Buffer* __this, int offset, ::uByte value)
{
    ::uPtr< ::uArray*>(__this->SetHandle())->Item< ::uByte>(__this->_offset + offset) = value;
}

::app::Uno::Byte4 Buffer__GetByte4(Buffer* __this, int offset)
{
    return ::app::Uno::Byte4__New_1(NULL, __this->GetByte(offset), __this->GetByte(offset + 1), __this->GetByte(offset + 2), __this->GetByte(offset + 3));
}

void Buffer__SetByte4(Buffer* __this, int offset, ::app::Uno::Byte4 value)
{
    __this->SetByte(offset, value.X);
    __this->SetByte(offset + 1, value.Y);
    __this->SetByte(offset + 2, value.Z);
    __this->SetByte(offset + 3, value.W);
}

::uShort Buffer__GetShort(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetShort(NULL, __this->GetHandle(), __this->_offset + offset, littleEndian);
}

::app::Uno::Short2 Buffer__GetShort2(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Short2__New_2(NULL, __this->GetShort(offset, littleEndian), __this->GetShort(offset + 2, littleEndian));
}

::app::Uno::Short4 Buffer__GetShort4(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Short4__New_2(NULL, __this->GetShort(offset, littleEndian), __this->GetShort(offset + 2, littleEndian), __this->GetShort(offset + 4, littleEndian), __this->GetShort(offset + 6, littleEndian));
}

::uUShort Buffer__GetUShort(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetUShort(NULL, __this->GetHandle(), __this->_offset + offset, littleEndian);
}

void Buffer__SetUShort(Buffer* __this, int offset, ::uUShort value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetUShort(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

::app::Uno::UShort2 Buffer__GetUShort2(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::UShort2__New_2(NULL, __this->GetUShort(offset, littleEndian), __this->GetUShort(offset + 2, littleEndian));
}

::app::Uno::UShort4 Buffer__GetUShort4(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::UShort4__New_2(NULL, __this->GetUShort(offset, littleEndian), __this->GetUShort(offset + 2, littleEndian), __this->GetUShort(offset + 4, littleEndian), __this->GetUShort(offset + 6, littleEndian));
}

void Buffer__SetInt(Buffer* __this, int offset, int value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

::uUInt Buffer__GetUInt(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetUInt(NULL, __this->GetHandle(), __this->_offset + offset, littleEndian);
}

void Buffer__SetUInt(Buffer* __this, int offset, ::uUInt value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetUInt(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

float Buffer__GetFloat(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetFloat(NULL, __this->GetHandle(), __this->_offset + offset, littleEndian);
}

void Buffer__SetFloat(Buffer* __this, int offset, float value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

::app::Uno::Float2 Buffer__GetFloat2(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Float2__New_2(NULL, __this->GetFloat(offset, littleEndian), __this->GetFloat(offset + 4, littleEndian));
}

void Buffer__SetFloat2(Buffer* __this, int offset, ::app::Uno::Float2 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
}

::app::Uno::Float3 Buffer__GetFloat3(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Float3__New_2(NULL, __this->GetFloat(offset, littleEndian), __this->GetFloat(offset + 4, littleEndian), __this->GetFloat(offset + 8, littleEndian));
}

void Buffer__SetFloat3(Buffer* __this, int offset, ::app::Uno::Float3 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
    __this->SetFloat(offset + 8, value.Z, littleEndian);
}

::app::Uno::Float4 Buffer__GetFloat4(Buffer* __this, int offset, bool littleEndian)
{
    return ::app::Uno::Float4__New_2(NULL, __this->GetFloat(offset, littleEndian), __this->GetFloat(offset + 4, littleEndian), __this->GetFloat(offset + 8, littleEndian), __this->GetFloat(offset + 12, littleEndian));
}

void Buffer__SetFloat4(Buffer* __this, int offset, ::app::Uno::Float4 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
    __this->SetFloat(offset + 8, value.Z, littleEndian);
    __this->SetFloat(offset + 12, value.W, littleEndian);
}

void Buffer___ObjInit(Buffer* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    __this->_data = data;
    __this->_offset = offset;
    __this->_sizeInBytes = sizeInBytes;
    __this->_isReadOnly = isReadOnly;
}

Buffer* Buffer__New_1(::uStatic* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    Buffer* inst = (::app::Uno::Buffer*)::uAllocObject(sizeof(::app::Uno::Buffer), ::app::Uno::Buffer__typeof());
    inst->_ObjInit(data, offset, sizeInBytes, isReadOnly);
    return inst;
}

void Buffer___ObjInit_1(Buffer* __this, ::uArray* data)
{
    __this->_ObjInit(data, 0, ::uPtr< ::uArray*>(data)->Length(), true);
}

Buffer* Buffer__New_2(::uStatic* __this, ::uArray* data)
{
    Buffer* inst = (::app::Uno::Buffer*)::uAllocObject(sizeof(::app::Uno::Buffer), ::app::Uno::Buffer__typeof());
    inst->_ObjInit_1(data);
    return inst;
}

void Buffer___ObjInit_2(Buffer* __this, int sizeInBytes)
{
    __this->_ObjInit(::uNewArray(::app::Uno::Byte__typeof(), sizeInBytes), 0, sizeInBytes, false);
}

Buffer* Buffer__New_3(::uStatic* __this, int sizeInBytes)
{
    Buffer* inst = (::app::Uno::Buffer*)::uAllocObject(sizeof(::app::Uno::Buffer), ::app::Uno::Buffer__typeof());
    inst->_ObjInit_2(sizeInBytes);
    return inst;
}

}}
