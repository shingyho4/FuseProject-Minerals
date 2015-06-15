// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_WRITER_H__
#define __APP_UNO_I_O_BINARY_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct BinaryWriter;

struct BinaryWriter__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryWriter__uType* BinaryWriter__typeof();

bool BinaryWriter__get_LittleEndian(BinaryWriter* __this);
void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value);
void BinaryWriter__Dispose(BinaryWriter* __this);
void BinaryWriter__Write(BinaryWriter* __this, ::uArray* value);
void BinaryWriter__Write_2(BinaryWriter* __this, ::uByte value);
void BinaryWriter__Write_5(BinaryWriter* __this, int value);
void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value);
void BinaryWriter__Write_27(BinaryWriter* __this, ::uString* value);
void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream);
BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);

struct BinaryWriter : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void Dispose() { BinaryWriter__Dispose(this); }
    void Write(::uArray* value) { BinaryWriter__Write(this, value); }
    void Write_2(::uByte value) { BinaryWriter__Write_2(this, value); }
    void Write_5(int value) { BinaryWriter__Write_5(this, value); }
    void Write7BitEncodedInt(int value) { BinaryWriter__Write7BitEncodedInt(this, value); }
    void Write_27(::uString* value) { BinaryWriter__Write_27(this, value); }
    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryWriter___ObjInit(this, stream); }
    bool LittleEndian() { return BinaryWriter__get_LittleEndian(this); }
    void LittleEndian(bool value) { BinaryWriter__set_LittleEndian(this, value); }
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
