// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BUFFER_H__
#define __APP_UNO_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct SByte4; } }
namespace app { namespace Uno { struct Short2; } }
namespace app { namespace Uno { struct Short4; } }
namespace app { namespace Uno { struct UShort2; } }
namespace app { namespace Uno { struct UShort4; } }

namespace app {
namespace Uno {

struct Buffer;

struct Buffer__uType : ::uClassType
{
};

Buffer__uType* Buffer__typeof();

int Buffer__get_SizeInBytes(Buffer* __this);
::uArray* Buffer__get_GetHandle(Buffer* __this);
::uArray* Buffer__get_SetHandle(Buffer* __this);
::uByte Buffer__get_Item(Buffer* __this, int offset);
void Buffer__set_Item(Buffer* __this, int offset, ::uByte value);
::uSByte Buffer__GetSByte(Buffer* __this, int offset);
::app::Uno::SByte4 Buffer__GetSByte4(Buffer* __this, int offset);
::uByte Buffer__GetByte(Buffer* __this, int offset);
void Buffer__SetByte(Buffer* __this, int offset, ::uByte value);
::app::Uno::Byte4 Buffer__GetByte4(Buffer* __this, int offset);
void Buffer__SetByte4(Buffer* __this, int offset, ::app::Uno::Byte4 value);
::uShort Buffer__GetShort(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Short2 Buffer__GetShort2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::Short4 Buffer__GetShort4(Buffer* __this, int offset, bool littleEndian);
::uUShort Buffer__GetUShort(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetUShort(Buffer* __this, int offset, ::uUShort value, bool littleEndian);
::app::Uno::UShort2 Buffer__GetUShort2(Buffer* __this, int offset, bool littleEndian);
::app::Uno::UShort4 Buffer__GetUShort4(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetInt(Buffer* __this, int offset, int value, bool littleEndian);
::uUInt Buffer__GetUInt(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetUInt(Buffer* __this, int offset, ::uUInt value, bool littleEndian);
float Buffer__GetFloat(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetFloat(Buffer* __this, int offset, float value, bool littleEndian);
::app::Uno::Float2 Buffer__GetFloat2(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetFloat2(Buffer* __this, int offset, ::app::Uno::Float2 value, bool littleEndian);
::app::Uno::Float3 Buffer__GetFloat3(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetFloat3(Buffer* __this, int offset, ::app::Uno::Float3 value, bool littleEndian);
::app::Uno::Float4 Buffer__GetFloat4(Buffer* __this, int offset, bool littleEndian);
void Buffer__SetFloat4(Buffer* __this, int offset, ::app::Uno::Float4 value, bool littleEndian);
void Buffer___ObjInit(Buffer* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
Buffer* Buffer__New_1(::uStatic* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
void Buffer___ObjInit_1(Buffer* __this, ::uArray* data);
Buffer* Buffer__New_2(::uStatic* __this, ::uArray* data);
void Buffer___ObjInit_2(Buffer* __this, int sizeInBytes);
Buffer* Buffer__New_3(::uStatic* __this, int sizeInBytes);

struct Buffer : ::uObject
{
    int _offset;
    int _sizeInBytes;
    bool _isReadOnly;
    ::uStrong< ::uArray*> _data;

    ::uSByte GetSByte(int offset) { return Buffer__GetSByte(this, offset); }
    ::app::Uno::SByte4 GetSByte4(int offset);
    ::uByte GetByte(int offset) { return Buffer__GetByte(this, offset); }
    void SetByte(int offset, ::uByte value) { Buffer__SetByte(this, offset, value); }
    ::app::Uno::Byte4 GetByte4(int offset);
    void SetByte4(int offset, ::app::Uno::Byte4 value);
    ::uShort GetShort(int offset, bool littleEndian) { return Buffer__GetShort(this, offset, littleEndian); }
    ::app::Uno::Short2 GetShort2(int offset, bool littleEndian);
    ::app::Uno::Short4 GetShort4(int offset, bool littleEndian);
    ::uUShort GetUShort(int offset, bool littleEndian) { return Buffer__GetUShort(this, offset, littleEndian); }
    void SetUShort(int offset, ::uUShort value, bool littleEndian) { Buffer__SetUShort(this, offset, value, littleEndian); }
    ::app::Uno::UShort2 GetUShort2(int offset, bool littleEndian);
    ::app::Uno::UShort4 GetUShort4(int offset, bool littleEndian);
    void SetInt(int offset, int value, bool littleEndian) { Buffer__SetInt(this, offset, value, littleEndian); }
    ::uUInt GetUInt(int offset, bool littleEndian) { return Buffer__GetUInt(this, offset, littleEndian); }
    void SetUInt(int offset, ::uUInt value, bool littleEndian) { Buffer__SetUInt(this, offset, value, littleEndian); }
    float GetFloat(int offset, bool littleEndian) { return Buffer__GetFloat(this, offset, littleEndian); }
    void SetFloat(int offset, float value, bool littleEndian) { Buffer__SetFloat(this, offset, value, littleEndian); }
    ::app::Uno::Float2 GetFloat2(int offset, bool littleEndian);
    void SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian);
    ::app::Uno::Float3 GetFloat3(int offset, bool littleEndian);
    void SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian);
    ::app::Uno::Float4 GetFloat4(int offset, bool littleEndian);
    void SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian);
    void _ObjInit(::uArray* data, int offset, int sizeInBytes, bool isReadOnly) { Buffer___ObjInit(this, data, offset, sizeInBytes, isReadOnly); }
    void _ObjInit_1(::uArray* data) { Buffer___ObjInit_1(this, data); }
    void _ObjInit_2(int sizeInBytes) { Buffer___ObjInit_2(this, sizeInBytes); }
    int SizeInBytes() { return Buffer__get_SizeInBytes(this); }
    ::uArray* GetHandle() { return Buffer__get_GetHandle(this); }
    ::uArray* SetHandle() { return Buffer__get_SetHandle(this); }
    ::uByte Item(int offset) { return Buffer__get_Item(this, offset); }
    void Item(int offset, ::uByte value) { Buffer__set_Item(this, offset, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.SByte.h>
#include <app/Uno.SByte4.h>
#include <app/Uno.Short.h>
#include <app/Uno.Short2.h>
#include <app/Uno.Short4.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>
#include <app/Uno.UShort4.h>

namespace app {
namespace Uno {

inline ::app::Uno::SByte4 Buffer::GetSByte4(int offset) { return Buffer__GetSByte4(this, offset); }
inline ::app::Uno::Byte4 Buffer::GetByte4(int offset) { return Buffer__GetByte4(this, offset); }
inline void Buffer::SetByte4(int offset, ::app::Uno::Byte4 value) { Buffer__SetByte4(this, offset, value); }
inline ::app::Uno::Short2 Buffer::GetShort2(int offset, bool littleEndian) { return Buffer__GetShort2(this, offset, littleEndian); }
inline ::app::Uno::Short4 Buffer::GetShort4(int offset, bool littleEndian) { return Buffer__GetShort4(this, offset, littleEndian); }
inline ::app::Uno::UShort2 Buffer::GetUShort2(int offset, bool littleEndian) { return Buffer__GetUShort2(this, offset, littleEndian); }
inline ::app::Uno::UShort4 Buffer::GetUShort4(int offset, bool littleEndian) { return Buffer__GetUShort4(this, offset, littleEndian); }
inline ::app::Uno::Float2 Buffer::GetFloat2(int offset, bool littleEndian) { return Buffer__GetFloat2(this, offset, littleEndian); }
inline void Buffer::SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian) { Buffer__SetFloat2(this, offset, value, littleEndian); }
inline ::app::Uno::Float3 Buffer::GetFloat3(int offset, bool littleEndian) { return Buffer__GetFloat3(this, offset, littleEndian); }
inline void Buffer::SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian) { Buffer__SetFloat3(this, offset, value, littleEndian); }
inline ::app::Uno::Float4 Buffer::GetFloat4(int offset, bool littleEndian) { return Buffer__GetFloat4(this, offset, littleEndian); }
inline void Buffer::SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian) { Buffer__SetFloat4(this, offset, value, littleEndian); }

}}


#endif
