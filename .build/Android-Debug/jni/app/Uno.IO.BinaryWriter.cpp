// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace IO {

BinaryWriter__uType* BinaryWriter__typeof()
{
    static BinaryWriter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BinaryWriter__uType*)::uAllocClassType(sizeof(BinaryWriter__uType), "Uno.IO.BinaryWriter", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryWriter__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(BinaryWriter__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BinaryWriter, _stream);
        type->StrongRefOffsets[1] = offsetof(BinaryWriter, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_stream";
        type->StrongRefNames[1] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool BinaryWriter__get_LittleEndian(BinaryWriter* __this)
{
    return __this->_LittleEndian;
}

void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value)
{
    __this->_LittleEndian = value;
}

void BinaryWriter__Dispose(BinaryWriter* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose_1();
}

void BinaryWriter__Write(BinaryWriter* __this, ::uArray* value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(value, 0, ::uPtr< ::uArray*>(value)->Length());
}

void BinaryWriter__Write_2(BinaryWriter* __this, ::uByte value)
{
    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) = value;
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 1);
}

void BinaryWriter__Write_5(BinaryWriter* __this, int value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value)
{
    ::uUInt v = (::uUInt)value;

    while (v >= 128u)
    {
        __this->Write_2((::uByte)(v | 128u));
        v = v >> 7;
    }

    __this->Write_2((::uByte)v);
}

void BinaryWriter__Write_27(BinaryWriter* __this, ::uString* value)
{
    __this->Write7BitEncodedInt(::uPtr< ::uString*>(value)->Length());
    __this->Write(::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value));
}

void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryWriter* inst = (::app::Uno::IO::BinaryWriter*)::uAllocObject(sizeof(::app::Uno::IO::BinaryWriter), ::app::Uno::IO::BinaryWriter__typeof());
    inst->_ObjInit(stream);
    return inst;
}

}}}
