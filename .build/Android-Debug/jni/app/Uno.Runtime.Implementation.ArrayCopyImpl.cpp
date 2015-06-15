// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

ArrayCopyImpl__uType* ArrayCopyImpl__typeof()
{
    static ArrayCopyImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayCopyImpl__uType*)::uAllocClassType(sizeof(ArrayCopyImpl__uType), "Uno.Runtime.Implementation.ArrayCopyImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ArrayCopyImpl__Copy__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length)
{
    ArrayCopyImpl__ValidateArguments__byte(NULL, sourceArray, sourceIndex, destinationArray, destinationIndex, length);

    for (int i = 0; i < length; i++)
    {
        ::uPtr< ::uArray*>(destinationArray)->Item< ::uByte>(destinationIndex + i) = ::uPtr< ::uArray*>(sourceArray)->Item< ::uByte>(sourceIndex + i);
    }
}

void ArrayCopyImpl__ValidateArguments__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length)
{
    if (sourceArray == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("sourceArray")));
    }

    if (destinationArray == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("destinationArray")));
    }

    if (sourceIndex < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("sourceIndex")));
    }

    if (destinationIndex < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("destinationIndex")));
    }

    if (length < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("length")));
    }

    if (::uPtr< ::uArray*>(sourceArray)->Length() < (sourceIndex + length))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds."), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(sourceArray)->Length())), ::uGetConstString(", ")), ::uBox< int>(::app::Uno::Int__typeof(), destinationIndex)), ::uGetConstString(", ")), ::uBox< int>(::app::Uno::Int__typeof(), length))));
    }

    if (::uPtr< ::uArray*>(destinationArray)->Length() < (destinationIndex + length))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.")));
    }
}

}}}}
