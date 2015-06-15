// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Cache.ProxyStream.h>
#include <app/Uno.Byte.h>
#include <app/Uno.NotSupportedException.h>

namespace app {
namespace Experimental {
namespace Cache {

ProxyStream__uType* ProxyStream__typeof()
{
    static ProxyStream__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProxyStream__uType*)::uAllocClassType(sizeof(ProxyStream__uType), "Experimental.Cache.ProxyStream", ::app::Uno::IO::Stream__typeof(), 1, 1);
        type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Length;
        type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Position;
        type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))ProxyStream__set_Position;
        type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Read;
        type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Write;
        type->__fp_Dispose = (void(*)(::app::Uno::IO::Stream*, bool))ProxyStream__Dispose;
        type->__fp_Close = (void(*)(::app::Uno::IO::Stream*))ProxyStream__Close;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(ProxyStream__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ProxyStream, Backing);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Backing";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uLong ProxyStream__get_Length(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Length();
}

::uLong ProxyStream__get_Position(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Position();
}

void ProxyStream__set_Position(ProxyStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

int ProxyStream__Read(ProxyStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Read(dst, byteOffset, byteCount);
}

void ProxyStream__Write(ProxyStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Write(src, byteOffset, byteCount);
}

void ProxyStream__Dispose(ProxyStream* __this, bool disposing)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Dispose(disposing);
}

void ProxyStream__Close(ProxyStream* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Close();
}

}}}
