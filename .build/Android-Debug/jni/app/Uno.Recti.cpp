// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Math.h>
#include <app/Uno.Recti.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Recti__uType* Recti__typeof()
{
    static Recti__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Recti__uType*)::uAllocValueType(sizeof(Recti__uType), "Uno.Recti", sizeof(Recti));
        type->__fp_ToString_value = (::uString*(*)(void*))Recti__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 Recti__get_Minimum(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Left, __this->Top);
}

void Recti__set_Minimum(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Left = value.X;
    __this->Top = value.Y;
}

::app::Uno::Int2 Recti__get_Maximum(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Right, __this->Bottom);
}

void Recti__set_Maximum(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Right = value.X;
    __this->Bottom = value.Y;
}

::app::Uno::Int2 Recti__get_Position(Recti* __this)
{
    return __this->Minimum();
}

void Recti__set_Position(Recti* __this, ::app::Uno::Int2 value)
{
    ::app::Uno::Int2 dp = ::app::Uno::Int2__op_Subtraction(NULL, value, __this->Position());
    __this->Left = value.X;
    __this->Right = __this->Right + dp.X;
    __this->Top = value.Y;
    __this->Bottom = __this->Bottom + dp.Y;
}

::app::Uno::Int2 Recti__get_Size(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Right - __this->Left, __this->Bottom - __this->Top);
}

void Recti__set_Size(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Right = __this->Left + value.X;
    __this->Bottom = __this->Top + value.Y;
}

bool Recti__Equals_2(::uStatic* __this, Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

bool Recti__Intersects(Recti* __this, Recti r)
{
    return !((((r.Left > __this->Right) || (r.Right < __this->Left)) || (r.Top > __this->Bottom)) || (r.Bottom < __this->Top));
}

::uString* Recti__ToString(Recti* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Int::ToString(__this->Left), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Top)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Right)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Bottom));
}

Recti Recti__Intersect(::uStatic* __this, Recti a, Recti b)
{
    return Recti__New_1(NULL, ::app::Uno::Math__Max_8(NULL, a.Left, b.Left), ::app::Uno::Math__Max_8(NULL, a.Top, b.Top), ::app::Uno::Math__Min_8(NULL, a.Right, b.Right), ::app::Uno::Math__Min_8(NULL, a.Bottom, b.Bottom));
}

Recti Recti__Inflate(::uStatic* __this, Recti r, ::app::Uno::Int2 size)
{
    return Recti__New_1(NULL, r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

Recti Recti__Inflate_1(::uStatic* __this, Recti r, int size)
{
    return Recti__Inflate(NULL, r, ::app::Uno::Int2__New_2(NULL, size, size));
}

void Recti___ObjInit(Recti* __this, int left, int top, int right, int bottom)
{
    __this->Left = left;
    __this->Top = top;
    __this->Right = right;
    __this->Bottom = bottom;
}

Recti Recti__New_1(::uStatic* __this, int left, int top, int right, int bottom)
{
    Recti inst = ::uDefault< Recti>();
    inst._ObjInit(left, top, right, bottom);
    return inst;
}

void Recti___ObjInit_1(Recti* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size)
{
    __this->Left = pos.X;
    __this->Top = pos.Y;
    __this->Right = __this->Left + size.X;
    __this->Bottom = __this->Top + size.Y;
}

Recti Recti__New_2(::uStatic* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size)
{
    Recti inst = ::uDefault< Recti>();
    inst._ObjInit_1(pos, size);
    return inst;
}

}}
