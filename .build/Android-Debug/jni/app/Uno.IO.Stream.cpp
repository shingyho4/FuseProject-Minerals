// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.GC.h>
#include <app/Uno.IO.Stream.h>

namespace app {
namespace Uno {
namespace IO {

Stream__uType* Stream__typeof()
{
    static Stream__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Stream__uType*)::uAllocClassType(sizeof(Stream__uType), "Uno.IO.Stream", ::uObject__typeof(), 1);
        type->__fp_Dispose = Stream__Dispose;
        type->__fp_Close = Stream__Close;

        type->__interface_0.__fp_Dispose = (void(*)(void*))Stream__Dispose_1;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(Stream__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Stream__Dispose(Stream* __this, bool disposing)
{
}

void Stream__Close(Stream* __this)
{
    __this->Dispose(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void Stream__Dispose_1(Stream* __this)
{
    __this->Close();
}

}}}
