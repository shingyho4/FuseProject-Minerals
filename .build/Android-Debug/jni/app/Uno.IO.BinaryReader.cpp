// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.EndOfStreamException.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace IO {

BinaryReader__uType* BinaryReader__typeof()
{
    static BinaryReader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BinaryReader__uType*)::uAllocClassType(sizeof(BinaryReader__uType), "Uno.IO.BinaryReader", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryReader__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(BinaryReader__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BinaryReader, _stream);
        type->StrongRefOffsets[1] = offsetof(BinaryReader, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_stream";
        type->StrongRefNames[1] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool BinaryReader__get_LittleEndian(BinaryReader* __this)
{
    return __this->_LittleEndian;
}

void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value)
{
    __this->_LittleEndian = value;
}

void BinaryReader__Dispose(BinaryReader* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose_1();
}

void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("byteCount")));
    }

    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(__this->_buffer, offset, byteCount - offset);

        if (read == 0)
        {
            U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
        }

        offset = offset + read;
    }
    while (offset < byteCount);
}

::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount)
{
    if (byteCount < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("byteCount")));
    }

    ::uArray* buffer = ::uNewArray(::app::Uno::Byte__typeof(), byteCount);
    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
        {
            break;
        }
    }
    while (offset < byteCount);

    if (offset == byteCount)
    {
        return buffer;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), offset);

    for (int i = 0; i < offset; i++)
    {
        ::uPtr< ::uArray*>(result)->Item< ::uByte>(i) = ::uPtr< ::uArray*>(buffer)->Item< ::uByte>(i);
    }

    return result;
}

::uByte BinaryReader__ReadByte(BinaryReader* __this)
{
    __this->FillBuffer(1);
    return ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0);
}

int BinaryReader__ReadInt(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian());
}

int BinaryReader__Read7BitEncodedInt(BinaryReader* __this)
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        ::uByte b = __this->ReadByte();
        count = count | ((b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
        {
            return count;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid 7 bit encoded int")));
}

::uString* BinaryReader__ReadString(BinaryReader* __this)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, __this->ReadBytes(__this->Read7BitEncodedInt()));
}

void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryReader* inst = (::app::Uno::IO::BinaryReader*)::uAllocObject(sizeof(::app::Uno::IO::BinaryReader), ::app::Uno::IO::BinaryReader__typeof());
    inst->_ObjInit(stream);
    return inst;
}

}}}
