// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>
#include <app/Uno.Rect.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {

Rect__uType* Rect__typeof()
{
    static Rect__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Rect__uType*)::uAllocValueType(sizeof(Rect__uType), "Uno.Rect", sizeof(Rect));
        type->__fp_ToString_value = (::uString*(*)(void*))Rect__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 Rect__get_Minimum(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Top);
}

void Rect__set_Minimum(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Left = value.X;
    __this->Top = value.Y;
}

::app::Uno::Float2 Rect__get_Maximum(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Bottom);
}

void Rect__set_Maximum(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Right = value.X;
    __this->Bottom = value.Y;
}

::app::Uno::Float2 Rect__get_Center(Rect* __this)
{
    return ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__New_2(NULL, __this->Left + __this->Right, __this->Top + __this->Bottom), 0.5f);
}

::app::Uno::Float2 Rect__get_LeftTop(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Top);
}

::app::Uno::Float2 Rect__get_RightTop(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Top);
}

::app::Uno::Float2 Rect__get_LeftBottom(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Bottom);
}

::app::Uno::Float2 Rect__get_RightBottom(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Bottom);
}

::app::Uno::Float2 Rect__get_Position(Rect* __this)
{
    return __this->Minimum();
}

void Rect__set_Position(Rect* __this, ::app::Uno::Float2 value)
{
    ::app::Uno::Float2 dp = ::app::Uno::Float2__op_Subtraction(NULL, value, __this->Position());
    __this->Left = value.X;
    __this->Right = __this->Right + dp.X;
    __this->Top = value.Y;
    __this->Bottom = __this->Bottom + dp.Y;
}

::app::Uno::Float2 Rect__get_Size(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right - __this->Left, __this->Bottom - __this->Top);
}

void Rect__set_Size(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Right = __this->Left + value.X;
    __this->Bottom = __this->Top + value.Y;
}

bool Rect__Equals_2(::uStatic* __this, Rect rect1, Rect rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

bool Rect__Contains_1(Rect* __this, ::app::Uno::Float2 p)
{
    return (((__this->Left <= p.X) && (__this->Right >= p.X)) && (__this->Top <= p.Y)) && (__this->Bottom >= p.Y);
}

::uString* Rect__ToString(Rect* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Float::ToString(__this->Left), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Top)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Right)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Bottom));
}

Rect Rect__Union(::uStatic* __this, Rect a, Rect b)
{
    return Rect__New_1(NULL, ::app::Uno::Math__Min_1(NULL, a.Left, b.Left), ::app::Uno::Math__Min_1(NULL, a.Top, b.Top), ::app::Uno::Math__Max_1(NULL, a.Right, b.Right), ::app::Uno::Math__Max_1(NULL, a.Bottom, b.Bottom));
}

Rect Rect__Intersect(::uStatic* __this, Rect a, Rect b)
{
    return Rect__New_1(NULL, ::app::Uno::Math__Max_1(NULL, a.Left, b.Left), ::app::Uno::Math__Max_1(NULL, a.Top, b.Top), ::app::Uno::Math__Min_1(NULL, a.Right, b.Right), ::app::Uno::Math__Min_1(NULL, a.Bottom, b.Bottom));
}

Rect Rect__Transform(::uStatic* __this, Rect r, ::app::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints_1(NULL, ::app::Uno::Vector__TransformCoordinate_1(NULL, r.LeftTop(), matrix), ::app::Uno::Vector__TransformCoordinate_1(NULL, r.RightTop(), matrix), ::app::Uno::Vector__TransformCoordinate_1(NULL, r.RightBottom(), matrix), ::app::Uno::Vector__TransformCoordinate_1(NULL, r.LeftBottom(), matrix));
}

Rect Rect__Translate(::uStatic* __this, Rect r, ::app::Uno::Float2 offset)
{
    return Rect__New_1(NULL, r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}

Rect Rect__Scale(::uStatic* __this, Rect r, ::app::Uno::Float2 scale)
{
    return Rect__New_1(NULL, r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

Rect Rect__Scale_1(::uStatic* __this, Rect r, float scale)
{
    return Rect__Scale(NULL, r, ::app::Uno::Float2__New_2(NULL, scale, scale));
}

Rect Rect__Inflate(::uStatic* __this, Rect r, ::app::Uno::Float2 size)
{
    return Rect__New_1(NULL, r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

Rect Rect__Inflate_1(::uStatic* __this, Rect r, float size)
{
    return Rect__Inflate(NULL, r, ::app::Uno::Float2__New_2(NULL, size, size));
}

Rect Rect__ContainingPoints(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::app::Uno::Math__Min_1(NULL, minX, point1.X);
    maxX = ::app::Uno::Math__Max_1(NULL, maxX, point1.X);
    minY = ::app::Uno::Math__Min_1(NULL, minY, point1.Y);
    maxY = ::app::Uno::Math__Max_1(NULL, maxY, point1.Y);
    return Rect__New_1(NULL, minX, minY, maxX, maxY);
}

Rect Rect__ContainingPoints_1(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1, ::app::Uno::Float2 point2, ::app::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::app::Uno::Math__Min_1(NULL, minX, point1.X);
    maxX = ::app::Uno::Math__Max_1(NULL, maxX, point1.X);
    minY = ::app::Uno::Math__Min_1(NULL, minY, point1.Y);
    maxY = ::app::Uno::Math__Max_1(NULL, maxY, point1.Y);
    minX = ::app::Uno::Math__Min_1(NULL, minX, point2.X);
    maxX = ::app::Uno::Math__Max_1(NULL, maxX, point2.X);
    minY = ::app::Uno::Math__Min_1(NULL, minY, point2.Y);
    maxY = ::app::Uno::Math__Max_1(NULL, maxY, point2.Y);
    minX = ::app::Uno::Math__Min_1(NULL, minX, point3.X);
    maxX = ::app::Uno::Math__Max_1(NULL, maxX, point3.X);
    minY = ::app::Uno::Math__Min_1(NULL, minY, point3.Y);
    maxY = ::app::Uno::Math__Max_1(NULL, maxY, point3.Y);
    return Rect__New_1(NULL, minX, minY, maxX, maxY);
}

void Rect___ObjInit(Rect* __this, float left, float top, float right, float bottom)
{
    __this->Left = left;
    __this->Top = top;
    __this->Right = right;
    __this->Bottom = bottom;
}

Rect Rect__New_1(::uStatic* __this, float left, float top, float right, float bottom)
{
    Rect inst = ::uDefault< Rect>();
    inst._ObjInit(left, top, right, bottom);
    return inst;
}

void Rect___ObjInit_1(Rect* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size)
{
    __this->Left = pos.X;
    __this->Top = pos.Y;
    __this->Right = __this->Left + size.X;
    __this->Bottom = __this->Top + size.Y;
}

Rect Rect__New_2(::uStatic* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size)
{
    Rect inst = ::uDefault< Rect>();
    inst._ObjInit_1(pos, size);
    return inst;
}

}}
