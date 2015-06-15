// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.ColorHelper.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

ColorHelper__uType* ColorHelper__typeof()
{
    static ColorHelper__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ColorHelper__uType*)::uAllocClassType(sizeof(ColorHelper__uType), "Uno.ColorHelper");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int ColorHelper__ParseBase(::uStatic* __this, ::uString* str, int radix)
{
    if ((radix < 2) || (radix > 36))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("base")));
    }

    if (::uPtr< ::uString*>(str)->Length() < 1)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("str.Length")));
    }

    int at = 0;
    bool neg = false;

    if (::uPtr< ::uString*>(str)->Item(0) == '-')
    {
        neg = true;
        at++;
    }
    else if (::uPtr< ::uString*>(str)->Item(0) == '+')
    {
        at++;
    }

    int value = 0;

    while (at < ::uPtr< ::uString*>(str)->Length())
    {
        int v = ColorHelper__BaseValue(NULL, ::uPtr< ::uString*>(str)->Item(at));

        if (v >= radix)
        {
            U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, str));
        }

        value = value * radix;
        value = value + v;
        at++;
    }

    if (neg)
    {
        value = -value;
    }

    return value;
}

int ColorHelper__BaseValue(::uStatic* __this, ::uChar c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return (int)c - 48;
    }
    else if ((c >= 'a') && (c <= 'z'))
    {
        return ((int)c - 97) + 10;
    }
    else if ((c >= 'A') && (c <= 'Z'))
    {
        return ((int)c - 65) + 10;
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("charBaseValue: "), ::uBox< ::uChar>(::app::Uno::Char__typeof(), c))));
}

}}
