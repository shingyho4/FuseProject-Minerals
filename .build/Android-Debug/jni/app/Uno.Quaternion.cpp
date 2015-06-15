// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Math.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {

Quaternion__uType* Quaternion__typeof()
{
    static Quaternion__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Quaternion__uType*)::uAllocClassType(sizeof(Quaternion__uType), "Uno.Quaternion");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 Quaternion__Mul(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right)
{
    float lx = left.X;
    float ly = left.Y;
    float lz = left.Z;
    float lw = left.W;
    float rx = right.X;
    float ry = right.Y;
    float rz = right.Z;
    float rw = right.W;
    return ::app::Uno::Float4__New_2(NULL, (((rx * lw) + (lx * rw)) + (ry * lz)) - (rz * ly), (((ry * lw) + (ly * rw)) + (rz * lx)) - (rx * lz), (((rz * lw) + (lz * rw)) + (rx * ly)) - (ry * lx), (rw * lw) - (((rx * lx) + (ry * ly)) + (rz * lz)));
}

::app::Uno::Float4 Quaternion__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::app::Uno::Vector__Normalize_1(NULL, axisNormalized);
    float h = angleRadians * 0.5f;
    float s = ::app::Uno::Math__Sin_1(NULL, h);
    float c = ::app::Uno::Math__Cos_1(NULL, h);
    return ::app::Uno::Float4__New_2(NULL, axisNormalized.X * s, axisNormalized.Y * s, axisNormalized.Z * s, c);
}

::app::Uno::Float3 Quaternion__ToEulerAngle(::uStatic* __this, ::app::Uno::Float4 q1)
{
    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = ((sqx + sqy) + sqz) + sqw;
    float test = (q1.X * q1.W) - (q1.Y * q1.Z);
    ::app::Uno::Float3 v = ::app::Uno::Float3();

    if (test > (0.4995f * unit))
    {
        v.Y = 2.0f * ::app::Uno::Math__Atan2_1(NULL, q1.Y, q1.X);
        v.X = 1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    if (test < (-0.4995f * unit))
    {
        v.Y = -2.0f * ::app::Uno::Math__Atan2_1(NULL, q1.Y, q1.X);
        v.X = -1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    ::app::Uno::Float4 q = ::app::Uno::Float4__New_2(NULL, q1.W, q1.Z, q1.X, q1.Y);
    v.Y = ::app::Uno::Math__Atan2_1(NULL, ((2.0f * q.X) * q.W) + ((2.0f * q.Y) * q.Z), 1.0f - (2.0f * ((q.Z * q.Z) + (q.W * q.W))));
    v.X = ::app::Uno::Math__Asin_1(NULL, 2.0f * ((q.X * q.Z) - (q.W * q.Y)));
    v.Z = ::app::Uno::Math__Atan2_1(NULL, ((2.0f * q.X) * q.Y) + ((2.0f * q.Z) * q.W), 1.0f - (2.0f * ((q.Y * q.Y) + (q.Z * q.Z))));
    return v;
}

::app::Uno::Float3 Quaternion__ToEulerAngleDegrees(::uStatic* __this, ::app::Uno::Float4 q1)
{
    ::app::Uno::Float3 v = Quaternion__ToEulerAngle(NULL, q1);
    return Quaternion__NormalizeAnglesDegrees(NULL, ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_1(NULL, v.X), ::app::Uno::Math__RadiansToDegrees_1(NULL, v.Y), ::app::Uno::Math__RadiansToDegrees_1(NULL, v.Z)));
}

::app::Uno::Float3 Quaternion__NormalizeAnglesDegrees(::uStatic* __this, ::app::Uno::Float3 angles)
{
    angles.X = Quaternion__NormalizeAngleDegrees(NULL, angles.X);
    angles.Y = Quaternion__NormalizeAngleDegrees(NULL, angles.Y);
    angles.Z = Quaternion__NormalizeAngleDegrees(NULL, angles.Z);
    return angles;
}

float Quaternion__NormalizeAngleDegrees(::uStatic* __this, float angle)
{
    while (angle > 360.0f)
    {
        angle = angle - 360.0f;
    }

    while (angle < 0.0f)
    {
        angle = angle + 360.0f;
    }

    return angle;
}

::app::Uno::Float4 Quaternion__RotationMatrix(::uStatic* __this, ::app::Uno::Float3x3 matrix)
{
    float sqrt = float();
    float halff = float();
    float scale = (matrix.M11 + matrix.M22) + matrix.M33;
    ::app::Uno::Float4 result = ::app::Uno::Float4();

    if (scale > 0.0f)
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, scale + 1.0f);
        result.W = sqrt * 0.5f;
        sqrt = 0.5f / sqrt;
        result.X = (matrix.M23 - matrix.M32) * sqrt;
        result.Y = (matrix.M31 - matrix.M13) * sqrt;
        result.Z = (matrix.M12 - matrix.M21) * sqrt;
    }
    else if ((matrix.M11 >= matrix.M22) && (matrix.M11 >= matrix.M33))
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M11) - matrix.M22) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = 0.5f * sqrt;
        result.Y = (matrix.M12 + matrix.M21) * halff;
        result.Z = (matrix.M13 + matrix.M31) * halff;
        result.W = (matrix.M23 - matrix.M32) * halff;
    }
    else if (matrix.M22 > matrix.M33)
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M22) - matrix.M11) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = (matrix.M21 + matrix.M12) * halff;
        result.Y = 0.5f * sqrt;
        result.Z = (matrix.M32 + matrix.M23) * halff;
        result.W = (matrix.M31 - matrix.M13) * halff;
    }
    else
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M33) - matrix.M11) - matrix.M22);
        halff = 0.5f / sqrt;
        result.X = (matrix.M31 + matrix.M13) * halff;
        result.Y = (matrix.M32 + matrix.M23) * halff;
        result.Z = 0.5f * sqrt;
        result.W = (matrix.M12 - matrix.M21) * halff;
    }

    return result;
}

}}
