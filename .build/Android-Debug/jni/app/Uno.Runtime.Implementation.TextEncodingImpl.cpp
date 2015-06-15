// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

TextEncodingImpl__uType* TextEncodingImpl__typeof()
{
    static TextEncodingImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextEncodingImpl__uType*)::uAllocClassType(sizeof(TextEncodingImpl__uType), "Uno.Runtime.Implementation.TextEncodingImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* TextEncodingImpl__DecodeUtf8(::uStatic* __this, ::uArray* __value)
{
    return ::uNewStringUtf8((const char*)::uPtr(__value)->Ptr(), ::uPtr(__value)->Length());
}

::uArray* TextEncodingImpl__EncodeUtf8(::uStatic* __this, ::uString* __value)
{
    Xli::String str(::uStringToXliString(__value));
    return ::uNewArray(::app::Uno::Byte__typeof(), str.Length(), str.Ptr());
}

}}}}
