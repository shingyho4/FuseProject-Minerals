// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_MEMORY_STREAM_H__
#define __APP_UNO_I_O_MEMORY_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct MemoryStream;

struct MemoryStream__uType : ::app::Uno::IO::Stream__uType
{
};

MemoryStream__uType* MemoryStream__typeof();

::uLong MemoryStream__get_Length(MemoryStream* __this);
int MemoryStream__get_Capacity(MemoryStream* __this);
::uLong MemoryStream__get_Position(MemoryStream* __this);
void MemoryStream__set_Position(MemoryStream* __this, ::uLong value);
void MemoryStream__Write(MemoryStream* __this, ::uArray* src, int byteOffset, int byteCount);
int MemoryStream__Read(MemoryStream* __this, ::uArray* dst, int byteOffset, int byteCount);
void MemoryStream__EnsureCapacity(MemoryStream* __this, int byteCount);
void MemoryStream__ResizeTo(MemoryStream* __this, int newSize);

struct MemoryStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::uArray*> _buffer;
    int _nextIncrease;
    ::uLong _length;
    ::uLong _Position;

    void EnsureCapacity(int byteCount) { MemoryStream__EnsureCapacity(this, byteCount); }
    void ResizeTo(int newSize) { MemoryStream__ResizeTo(this, newSize); }
    int Capacity() { return MemoryStream__get_Capacity(this); }
};

}}}

#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Uno {
namespace IO {

}}}


#endif
