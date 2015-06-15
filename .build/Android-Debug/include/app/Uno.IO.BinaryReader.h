// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_READER_H__
#define __APP_UNO_I_O_BINARY_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct BinaryReader;

struct BinaryReader__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryReader__uType* BinaryReader__typeof();

bool BinaryReader__get_LittleEndian(BinaryReader* __this);
void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value);
void BinaryReader__Dispose(BinaryReader* __this);
void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount);
::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount);
::uByte BinaryReader__ReadByte(BinaryReader* __this);
int BinaryReader__ReadInt(BinaryReader* __this);
int BinaryReader__Read7BitEncodedInt(BinaryReader* __this);
::uString* BinaryReader__ReadString(BinaryReader* __this);
void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream);
BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);

struct BinaryReader : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void Dispose() { BinaryReader__Dispose(this); }
    void FillBuffer(int byteCount) { BinaryReader__FillBuffer(this, byteCount); }
    ::uArray* ReadBytes(int byteCount) { return BinaryReader__ReadBytes(this, byteCount); }
    ::uByte ReadByte() { return BinaryReader__ReadByte(this); }
    int ReadInt() { return BinaryReader__ReadInt(this); }
    int Read7BitEncodedInt() { return BinaryReader__Read7BitEncodedInt(this); }
    ::uString* ReadString() { return BinaryReader__ReadString(this); }
    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryReader___ObjInit(this, stream); }
    bool LittleEndian() { return BinaryReader__get_LittleEndian(this); }
    void LittleEndian(bool value) { BinaryReader__set_LittleEndian(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace IO {

}}}


#endif
