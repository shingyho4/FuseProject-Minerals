// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.Utf8.h>

namespace app {
namespace Uno {
namespace Text {

Utf8__uType* Utf8__typeof()
{
    static Utf8__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Utf8__uType*)::uAllocClassType(sizeof(Utf8__uType), "Uno.Text.Utf8");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uArray* Utf8__GetBytes(::uStatic* __this, ::uString* value)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
}

}}}
