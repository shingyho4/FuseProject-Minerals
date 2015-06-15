// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.IO.CppXliStream.h>
#include <app/Uno.IO.CppXliStreamHandle.h>
#include <app/Uno.IO.IOException.h>
#include <Uno/XliInterop.h>

namespace app {
namespace Uno {
namespace IO {

CppXliStream__uType* CppXliStream__typeof()
{
    static CppXliStream__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CppXliStream__uType*)::uAllocClassType(sizeof(CppXliStream__uType), "Uno.IO.CppXliStream", ::app::Uno::IO::Stream__typeof(), 1);
        type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Length;
        type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Position;
        type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))CppXliStream__set_Position;
        type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Read;
        type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Write;
        type->__fp_Dispose = (void(*)(::app::Uno::IO::Stream*, bool))CppXliStream__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(CppXliStream__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uLong CppXliStream__get_Length(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetLength();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__get_Position(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetPosition();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__set_Position(CppXliStream* __this, ::uLong __value)
{
    try
    {
        __this->_handle->Seek((int)__value, Xli::SeekOriginBegin);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

int CppXliStream__Read(CppXliStream* __this, ::uArray* __dst, int __byteOffset, int __byteCount)
{
    try
    {
        // TODO: Bounds check
        return __this->_handle->Read((::uByte*)__dst->Ptr() + __byteOffset, 1, __byteCount);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__Write(CppXliStream* __this, ::uArray* __src, int __byteOffset, int __byteCount)
{
    try
    {
        // TODO: Bounds check
        __this->_handle->Write((const ::uByte*)__src->Ptr() + __byteOffset, 1, __byteCount);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__Dispose(CppXliStream* __this, bool __disposing)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

}}}
