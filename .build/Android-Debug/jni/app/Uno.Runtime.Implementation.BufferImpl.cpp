// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Short.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

BufferImpl__uType* BufferImpl__typeof()
{
    static BufferImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BufferImpl__uType*)::uAllocClassType(sizeof(BufferImpl__uType), "Uno.Runtime.Implementation.BufferImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uShort BufferImpl__GetShort(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian)
{
    return uReadBytes<uShort>((uByte*)__buffer->_ptr + __offset, __littleEndian);
}

::uUShort BufferImpl__GetUShort(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian)
{
    return uReadBytes<uUShort>((uByte*)__buffer->_ptr + __offset, __littleEndian);
}

void BufferImpl__SetUShort(::uStatic* __this, ::uArray* __buffer, int __offset, ::uUShort __value, bool __littleEndian)
{
    uWriteBytes((uByte*)__buffer->_ptr + __offset, __value, __littleEndian);
}

int BufferImpl__GetInt(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian)
{
    return uReadBytes<int>((uByte*)__buffer->_ptr + __offset, __littleEndian);
}

void BufferImpl__SetInt(::uStatic* __this, ::uArray* __buffer, int __offset, int __value, bool __littleEndian)
{
    uWriteBytes((uByte*)__buffer->_ptr + __offset, __value, __littleEndian);
}

::uUInt BufferImpl__GetUInt(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian)
{
    return uReadBytes<uUInt>((uByte*)__buffer->_ptr + __offset, __littleEndian);
}

void BufferImpl__SetUInt(::uStatic* __this, ::uArray* __buffer, int __offset, ::uUInt __value, bool __littleEndian)
{
    uWriteBytes((uByte*)__buffer->_ptr + __offset, __value, __littleEndian);
}

float BufferImpl__GetFloat(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian)
{
    return uReadBytes<float>((uByte*)__buffer->_ptr + __offset, __littleEndian);
}

void BufferImpl__SetFloat(::uStatic* __this, ::uArray* __buffer, int __offset, float __value, bool __littleEndian)
{
    uWriteBytes((uByte*)__buffer->_ptr + __offset, __value, __littleEndian);
}

}}}}
