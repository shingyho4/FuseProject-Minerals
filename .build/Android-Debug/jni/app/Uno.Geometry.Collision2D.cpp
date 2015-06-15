// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {
namespace Geometry {

Collision2D__uType* Collision2D__typeof()
{
    static Collision2D__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Collision2D__uType*)::uAllocClassType(sizeof(Collision2D__uType), "Uno.Geometry.Collision2D");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Collision2D__TriangleContainsPoint(::uStatic* __this, ::app::Uno::Float2 A, ::app::Uno::Float2 B, ::app::Uno::Float2 C, ::app::Uno::Float2 P)
{
    ::app::Uno::Float2 v0 = ::app::Uno::Float2__op_Subtraction(NULL, C, A);
    ::app::Uno::Float2 v1 = ::app::Uno::Float2__op_Subtraction(NULL, B, A);
    ::app::Uno::Float2 v2 = ::app::Uno::Float2__op_Subtraction(NULL, P, A);
    float dot00 = ::app::Uno::Vector__Dot(NULL, v0, v0);
    float dot01 = ::app::Uno::Vector__Dot(NULL, v0, v1);
    float dot02 = ::app::Uno::Vector__Dot(NULL, v0, v2);
    float dot11 = ::app::Uno::Vector__Dot(NULL, v1, v1);
    float dot12 = ::app::Uno::Vector__Dot(NULL, v1, v2);
    float denom = (dot00 * dot11) - (dot01 * dot01);

    if (denom < 1e-05f)
    {
        return false;
    }

    float invDenom = 1.0f / denom;
    float u = ((dot11 * dot02) - (dot01 * dot12)) * invDenom;
    float v = ((dot00 * dot12) - (dot01 * dot02)) * invDenom;
    bool r = ((u >= 0.0f) && (v >= 0.0f)) && ((u + v) < 1.0f);
    return r;
}

::app::Uno::Float2 Collision2D__LineIntersectionPointVector(::uStatic* __this, ::app::Uno::Float2 ps1, ::app::Uno::Float2 v1, ::app::Uno::Float2 ps2, ::app::Uno::Float2 v2)
{
    float A1 = v1.Y;
    float B1 = -v1.X;
    float C1 = (A1 * ps1.X) + (B1 * ps1.Y);
    float A2 = v2.Y;
    float B2 = -v2.X;
    float C2 = (A2 * ps2.X) + (B2 * ps2.Y);
    float delta = (A1 * B2) - (A2 * B1);

    if (::app::Uno::Math__Abs_1(NULL, delta) < 1e-05f)
    {
        return ps1;
    }

    return ::app::Uno::Float2__New_2(NULL, ((B2 * C1) - (B1 * C2)) / delta, ((A1 * C2) - (A2 * C1)) / delta);
}

float Collision2D__AngleBetween(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    float d = ::app::Uno::Vector__Dot(NULL, a, b);
    float l = ::app::Uno::Vector__Length(NULL, a) * ::app::Uno::Vector__Length(NULL, b);

    if (l < 1e-05f)
    {
        return 0.0f;
    }

    return ::app::Uno::Math__Acos_1(NULL, d / l);
}

}}}
