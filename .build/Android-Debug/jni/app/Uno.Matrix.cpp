// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {

Matrix__uType* Matrix__typeof()
{
    static Matrix__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Matrix__uType*)::uAllocClassType(sizeof(Matrix__uType), "Uno.Matrix");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 Matrix__OrthoLH(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    float zRange = 1.0f / (zFar - zNear);
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = 2.0f / (right - left);
    result.M22 = 2.0f / (top - bottom);
    result.M33 = zRange;
    result.M41 = (left + right) / (left - right);
    result.M42 = (top + bottom) / (bottom - top);
    result.M43 = -zNear * zRange;
    return result;
}

::app::Uno::Float4x4 Matrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    ::app::Uno::Float4x4 result = Matrix__OrthoLH(NULL, width, height, zNear, zFar);
    result.M33 = result.M33 * -1.0f;
    return result;
}

::app::Uno::Float4x4 Matrix__PerspectiveRH(::uStatic* __this, float fovRadians, float aspect, float znear, float zfar)
{
    float yHalfScale = 0.5f / ::app::Uno::Math__Tan_1(NULL, fovRadians * 0.5f);
    float xHalfScale = yHalfScale / aspect;
    float width = znear / xHalfScale;
    float height = znear / yHalfScale;
    float length = zfar - znear;
    float znearDoubled = 2.0f * znear;
    ::app::Uno::Float4x4 result = ::uDefault< ::app::Uno::Float4x4>();
    result.M11 = znearDoubled / width;
    result.M22 = znearDoubled / height;
    result.M33 = (-zfar - znear) / length;
    result.M43 = (-znearDoubled * zfar) / length;
    result.M34 = -1.0f;
    return result;
}

::app::Uno::Float4x4 Matrix__Scaling(::uStatic* __this, ::app::Uno::Float3 scale)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

::app::Uno::Float4x4 Matrix__Scaling_1(::uStatic* __this, float x, float y, float z)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

::app::Uno::Float4x4 Matrix__Scaling_2(::uStatic* __this, float scale)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

::app::Uno::Float4x4 Matrix__Shear(::uStatic* __this, ::app::Uno::Float2 angle)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M12 = ::app::Uno::Math__Tan_1(NULL, angle.Y);
    result.M21 = ::app::Uno::Math__Tan_1(NULL, angle.X);
    return result;
}

::app::Uno::Float4x4 Matrix__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::app::Uno::Vector__Normalize_1(NULL, axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::app::Uno::Math__Cos_1(NULL, angleRadians);
    float s = ::app::Uno::Math__Sin_1(NULL, angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = xx + (c * (1.0f - xx));
    result.M12 = (xy - (c * xy)) + (s * z);
    result.M13 = (xz - (c * xz)) - (s * y);
    result.M21 = (xy - (c * xy)) - (s * z);
    result.M22 = yy + (c * (1.0f - yy));
    result.M23 = (yz - (c * yz)) + (s * x);
    result.M31 = (xz - (c * xz)) + (s * y);
    result.M32 = (yz - (c * yz)) - (s * x);
    result.M33 = zz + (c * (1.0f - zz));
    return result;
}

::app::Uno::Float4x4 Matrix__RotationZ(::uStatic* __this, float angleRadians)
{
    return Matrix__RotationAxis(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), angleRadians);
}

::app::Uno::Float4x4 Matrix__RotationQuaternion(::uStatic* __this, ::app::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = 1.0f - (2.0f * (yy + zz));
    result.M12 = 2.0f * (xy + zw);
    result.M13 = 2.0f * (zx - yw);
    result.M21 = 2.0f * (xy - zw);
    result.M22 = 1.0f - (2.0f * (zz + xx));
    result.M23 = 2.0f * (yz + xw);
    result.M31 = 2.0f * (zx + yw);
    result.M32 = 2.0f * (yz - xw);
    result.M33 = 1.0f - (2.0f * (yy + xx));
    return result;
}

::app::Uno::Float4x4 Matrix__Transpose_2(::uStatic* __this, ::app::Uno::Float4x4 m)
{
    return ::app::Uno::Float4x4__New_1(NULL, m.M11, m.M21, m.M31, m.M41, m.M12, m.M22, m.M32, m.M42, m.M13, m.M23, m.M33, m.M43, m.M14, m.M24, m.M34, m.M44);
}

::app::Uno::Float4x4 Matrix__Translation(::uStatic* __this, ::app::Uno::Float3 offset)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}

::app::Uno::Float4x4 Matrix__Translation_1(::uStatic* __this, float x, float y, float z)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

::app::Uno::Float4x4 Matrix__Mul_7(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d)
{
    return Matrix__Mul_11(NULL, Matrix__Mul_8(NULL, a, b, c), d);
}

::app::Uno::Float4x4 Matrix__Mul_8(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c)
{
    return Matrix__Mul_11(NULL, Matrix__Mul_11(NULL, a, b), c);
}

::app::Uno::Float4x4 Matrix__Mul_11(::uStatic* __this, ::app::Uno::Float4x4 left, ::app::Uno::Float4x4 right)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4();
    result.M11 = (((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41);
    result.M12 = (((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42);
    result.M13 = (((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43);
    result.M14 = (((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44);
    result.M21 = (((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41);
    result.M22 = (((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42);
    result.M23 = (((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43);
    result.M24 = (((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44);
    result.M31 = (((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41);
    result.M32 = (((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42);
    result.M33 = (((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43);
    result.M34 = (((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44);
    result.M41 = (((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41);
    result.M42 = (((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42);
    result.M43 = (((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43);
    result.M44 = (((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44);
    return result;
}

::app::Uno::Float4x4 Matrix__Invert(::uStatic* __this, ::app::Uno::Float4x4 value)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);

    if (::app::Uno::Math__Abs_1(NULL, det) <= 1e-05f)
    {
        return ::app::Uno::Float4x4__get_Identity(NULL);
    }

    det = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4();
    result.M11 = d11 * det;
    result.M12 = -d21 * det;
    result.M13 = d31 * det;
    result.M14 = -d41 * det;
    result.M21 = -d12 * det;
    result.M22 = d22 * det;
    result.M23 = -d32 * det;
    result.M24 = d42 * det;
    result.M31 = d13 * det;
    result.M32 = -d23 * det;
    result.M33 = d33 * det;
    result.M34 = -d43 * det;
    result.M41 = -d14 * det;
    result.M42 = d24 * det;
    result.M43 = -d34 * det;
    result.M44 = d44 * det;
    return result;
}

bool Matrix__Decompose(::uStatic* __this, ::app::Uno::Float4x4 value, ::app::Uno::Float3* scale, ::app::Uno::Float4* rotationQuaternion, ::app::Uno::Float3* translation)
{
    (*translation).X = value.M41;
    (*translation).Y = value.M42;
    (*translation).Z = value.M43;
    (*scale).X = ::app::Uno::Math__Sqrt_1(NULL, ((value.M11 * value.M11) + (value.M12 * value.M12)) + (value.M13 * value.M13));
    (*scale).Y = ::app::Uno::Math__Sqrt_1(NULL, ((value.M21 * value.M21) + (value.M22 * value.M22)) + (value.M23 * value.M23));
    (*scale).Z = ::app::Uno::Math__Sqrt_1(NULL, ((value.M31 * value.M31) + (value.M32 * value.M32)) + (value.M33 * value.M33));

    if (((::app::Uno::Math__Abs_1(NULL, (*scale).X) < 1e-05f) || (::app::Uno::Math__Abs_1(NULL, (*scale).Y) < 1e-05f)) || (::app::Uno::Math__Abs_1(NULL, (*scale).Z) < 1e-05f))
    {
        *rotationQuaternion = ::app::Uno::Float4__get_Identity(NULL);
        return false;
    }

    ::app::Uno::Float3x3 rotationMatrix = ::app::Uno::Float3x3__New_1(NULL, value.M11 / (*scale).X, value.M12 / (*scale).X, value.M13 / (*scale).X, value.M21 / (*scale).Y, value.M22 / (*scale).Y, value.M23 / (*scale).Y, value.M31 / (*scale).Z, value.M32 / (*scale).Z, value.M33 / (*scale).Z);
    *rotationQuaternion = ::app::Uno::Quaternion__RotationMatrix(NULL, rotationMatrix);
    return true;
}

::app::Uno::Float3 Matrix__GetTranslation(::uStatic* __this, ::app::Uno::Float4x4 value)
{
    return ::app::Uno::Float3__New_2(NULL, value.M41, value.M42, value.M43);
}

}}
