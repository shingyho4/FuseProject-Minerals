// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int2.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Int2__uType* Int2__typeof()
{
    static Int2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Int2__uType*)::uAllocValueType(sizeof(Int2__uType), "Uno.Int2", sizeof(Int2));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int2__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Int2__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Int2__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Int2__Equals(Int2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Int2__typeof(), *__this), o);
}

int Int2__GetHashCode(Int2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Int2__typeof(), *__this));
}

::uString* Int2__ToString(Int2* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Int::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Y));
}

void Int2___ObjInit(Int2* __this, int xy)
{
    __this->X = __this->Y = xy;
}

Int2 Int2__New_1(::uStatic* __this, int xy)
{
    Int2 inst = ::uDefault< Int2>();
    inst._ObjInit(xy);
    return inst;
}

void Int2___ObjInit_1(Int2* __this, int x, int y)
{
    __this->X = x;
    __this->Y = y;
}

Int2 Int2__New_2(::uStatic* __this, int x, int y)
{
    Int2 inst = ::uDefault< Int2>();
    inst._ObjInit_1(x, y);
    return inst;
}

Int2 Int2__op_Addition(::uStatic* __this, Int2 a, Int2 b)
{
    return Int2__New_2(NULL, a.X + b.X, a.Y + b.Y);
}

Int2 Int2__op_Explicit(::uStatic* __this, ::app::Uno::Float2 v)
{
    return Int2__New_2(NULL, (int)v.X, (int)v.Y);
}

Int2 Int2__op_Subtraction(::uStatic* __this, Int2 a, Int2 b)
{
    return Int2__New_2(NULL, a.X - b.X, a.Y - b.Y);
}

bool Int2__op_Inequality(::uStatic* __this, Int2 a, Int2 b)
{
    return !::app::Uno::Generic__Equals__int2(NULL, a, b);
}

}}
