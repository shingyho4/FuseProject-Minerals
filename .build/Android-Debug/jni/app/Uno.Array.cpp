// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Array.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.ArrayCopyImpl.h>

namespace app {
namespace Uno {

Array__uType* Array__typeof()
{
    static Array__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Array__uType*)::uAllocClassType(sizeof(Array__uType), "Uno.Array");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Array__Copy__byte(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length)
{
    ::app::Uno::Runtime::Implementation::ArrayCopyImpl__Copy__byte(NULL, sourceArray, 0, destinationArray, 0, length);
}

}}
