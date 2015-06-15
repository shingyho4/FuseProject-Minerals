// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__

#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct BufferImpl__uType : ::uClassType
{
};

BufferImpl__uType* BufferImpl__typeof();

::uShort BufferImpl__GetShort(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian);
::uUShort BufferImpl__GetUShort(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian);
void BufferImpl__SetUShort(::uStatic* __this, ::uArray* __buffer, int __offset, ::uUShort __value, bool __littleEndian);
int BufferImpl__GetInt(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian);
void BufferImpl__SetInt(::uStatic* __this, ::uArray* __buffer, int __offset, int __value, bool __littleEndian);
::uUInt BufferImpl__GetUInt(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian);
void BufferImpl__SetUInt(::uStatic* __this, ::uArray* __buffer, int __offset, ::uUInt __value, bool __littleEndian);
float BufferImpl__GetFloat(::uStatic* __this, ::uArray* __buffer, int __offset, bool __littleEndian);
void BufferImpl__SetFloat(::uStatic* __this, ::uArray* __buffer, int __offset, float __value, bool __littleEndian);

}}}}


#endif
