// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Char.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

Char__uType* Char__typeof()
{
    static Char__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Char__uType*)::uAllocValueType(sizeof(Char__uType), "Uno.Char", sizeof(::uChar));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Char__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Char__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Char__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Char__Equals(::uChar* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uChar>(Char__typeof(), *__this), o);
}

int Char__GetHashCode(::uChar* __this)
{
    return (int)*__this;
}

::uString* Char__ToString(::uChar* __this)
{
    uString* result = uAllocString(1);
    result->_ptr[0] = *__this;
    return result;
}

::uChar Char__ToUpper(::uStatic* __this, ::uChar __c)
{
    return Xli::Unicode::ToUpper(__c);
}

::uChar Char__ToLower(::uStatic* __this, ::uChar __c)
{
    return Xli::Unicode::ToLower(__c);
}

bool Char__IsWhiteSpace(::uStatic* __this, ::uChar c)
{
    ::uString* whitespace = ::uGetConstString(" \341\232\200\341\240\216\342\200\200\342\200\201\342\200\202\342\200\203\342\200\204\342\200\205\342\200\206\342\200\207\342\200\210\342\200\211\342\200\212\342\200\257\342\201\237\343\200\200\342\200\250\342\200\251\t\n\v\f\r\302\205\302\240");
    return ::app::Uno::String::IndexOf(::uPtr< ::uString*>(whitespace), c, 0) != -1;
}

}}
