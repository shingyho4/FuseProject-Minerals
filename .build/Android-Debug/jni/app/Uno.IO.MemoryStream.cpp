// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.IO.MemoryStream.h>

namespace app {
namespace Uno {
namespace IO {

MemoryStream__uType* MemoryStream__typeof()
{
    static MemoryStream__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MemoryStream__uType*)::uAllocClassType(sizeof(MemoryStream__uType), "Uno.IO.MemoryStream", ::app::Uno::IO::Stream__typeof(), 1, 1);
        type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Length;
        type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Position;
        type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))MemoryStream__set_Position;
        type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Write;
        type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Read;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(MemoryStream__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MemoryStream, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uLong MemoryStream__get_Length(MemoryStream* __this)
{
    return __this->_length;
}

int MemoryStream__get_Capacity(MemoryStream* __this)
{
    return ::uPtr< ::uArray*>(__this->_buffer)->Length();
}

::uLong MemoryStream__get_Position(MemoryStream* __this)
{
    return __this->_Position;
}

void MemoryStream__set_Position(MemoryStream* __this, ::uLong value)
{
    __this->_Position = value;
}

void MemoryStream__Write(MemoryStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    __this->EnsureCapacity(byteCount);

    for (int i = byteOffset; i < (byteOffset + byteCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position()) = ::uPtr< ::uArray*>(src)->Item< ::uByte>(i);
        __this->Position(__this->Position() + 1ll);
    }

    if (__this->Position() > __this->Length())
    {
        __this->_length = __this->Position();
    }
}

int MemoryStream__Read(MemoryStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    int i = 0;

    for (; (i < byteCount) && ((__this->Position() + (::uLong)i) < __this->Length()); i++)
    {
        ::uPtr< ::uArray*>(dst)->Item< ::uByte>(i + byteOffset) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position() + i);
    }

    __this->Position(__this->Position() + (::uLong)i);
    return i;
}

void MemoryStream__EnsureCapacity(MemoryStream* __this, int byteCount)
{
    if ((__this->Position() + (::uLong)byteCount) <= (::uLong)__this->Capacity())
    {
        return;
    }
    else if ((__this->Position() + (::uLong)byteCount) <= (::uLong)(__this->Capacity() + __this->_nextIncrease))
    {
        __this->ResizeTo(__this->Capacity() + __this->_nextIncrease);
    }
    else
    {
        __this->ResizeTo((int)__this->Position() + byteCount);
    }
}

void MemoryStream__ResizeTo(MemoryStream* __this, int newSize)
{
    ::uArray* newBuffer = ::uNewArray(::app::Uno::Byte__typeof(), newSize);
    ::app::Uno::Array__Copy__byte(NULL, __this->_buffer, newBuffer, ::uPtr< ::uArray*>(__this->_buffer)->Length());
    __this->_buffer = newBuffer;
    __this->_nextIncrease = __this->Capacity();
}

}}}
