// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {

Vector__uType* Vector__typeof()
{
    static Vector__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Vector__uType*)::uAllocClassType(sizeof(Vector__uType), "Uno.Vector");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Vector__LengthSquared(::uStatic* __this, ::app::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

float Vector__LengthSquared_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

float Vector__LengthSquared_2(::uStatic* __this, ::app::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

float Vector__Length(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared(NULL, v));
}

float Vector__Length_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared_1(NULL, v));
}

float Vector__Length_2(::uStatic* __this, ::app::Uno::Float4 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared_2(NULL, v));
}

::app::Uno::Float2 Vector__Normalize(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__op_Division_1(NULL, v, Vector__Length(NULL, v));
}

::app::Uno::Float3 Vector__Normalize_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ::app::Uno::Float3__op_Division(NULL, v, Vector__Length_1(NULL, v));
}

::app::Uno::Float4 Vector__Normalize_2(::uStatic* __this, ::app::Uno::Float4 v)
{
    return ::app::Uno::Float4__op_Division_1(NULL, v, Vector__Length_2(NULL, v));
}

float Vector__Dot(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

float Vector__Dot_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    return ((a.X * b.X) + (a.Y * b.Y)) + (a.Z * b.Z);
}

::app::Uno::Float3 Vector__Cross(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right)
{
    return ::app::Uno::Float3__New_2(NULL, (left.Y * right.Z) - (left.Z * right.Y), (left.Z * right.X) - (left.X * right.Z), (left.X * right.Y) - (left.Y * right.X));
}

::app::Uno::Float2 Vector__Transform_2(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2x2 matrix)
{
    return ::app::Uno::Float2__New_2(NULL, (vector.X * matrix.M11) + (vector.Y * matrix.M21), (vector.X * matrix.M12) + (vector.Y * matrix.M22));
}

::app::Uno::Float4 Vector__Transform_3(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, (((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + (vector.W * matrix.M41), (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + (vector.W * matrix.M42), (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + (vector.W * matrix.M43), (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + (vector.W * matrix.M44));
}

::app::Uno::Float4 Vector__Transform_4(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, ((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

::app::Uno::Float4 Vector__Transform_5(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, (((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

::app::Uno::Float3 Vector__TransformCoordinate(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    ::app::Uno::Float4 tmp = Vector__Transform_5(NULL, vector, matrix);
    return ::app::Uno::Float3__op_Division(NULL, ::app::Uno::Float3__New_2(NULL, tmp.X, tmp.Y, tmp.Z), tmp.W);
}

::app::Uno::Float3 Vector__TransformNormal(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float3__New_2(NULL, ((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31), ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32), ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33));
}

::app::Uno::Float2 Vector__TransformCoordinate_1(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix)
{
    ::app::Uno::Float4 tmp = Vector__Transform_4(NULL, vector, matrix);
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, tmp.X, tmp.Y), tmp.W);
}

}}
