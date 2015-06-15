// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <cmath>

namespace app {
namespace Uno {

Math__uType* Math__typeof()
{
    static Math__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Math__uType*)::uAllocClassType(sizeof(Math__uType), "Uno.Math");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Math__DegreesToRadians_1(::uStatic* __this, float degrees)
{
    return degrees * 0.0174532924f;
}

float Math__RadiansToDegrees_1(::uStatic* __this, float radians)
{
    return radians * 57.2957764f;
}

float Math__Sin_1(::uStatic* __this, float __radians)
{
    return sinf(__radians);
}

float Math__Cos_1(::uStatic* __this, float __radians)
{
    return cosf(__radians);
}

float Math__Tan_1(::uStatic* __this, float __radians)
{
    return tanf(__radians);
}

float Math__Asin_1(::uStatic* __this, float __radians)
{
    return asinf(__radians);
}

float Math__Acos_1(::uStatic* __this, float __radians)
{
    return acosf(__radians);
}

float Math__Atan2_1(::uStatic* __this, float __y, float __x)
{
    return atan2f(__y, __x);
}

double Math__Pow(::uStatic* __this, double __x, double __y)
{
    return pow(__x, __y);
}

float Math__Pow_1(::uStatic* __this, float __x, float __y)
{
    return powf(__x, __y);
}

float Math__Log_1(::uStatic* __this, float __x)
{
    return logf(__x);
}

double Math__Sqrt(::uStatic* __this, double __x)
{
    return sqrt(__x);
}

float Math__Sqrt_1(::uStatic* __this, float __x)
{
    return sqrtf(__x);
}

double Math__Abs(::uStatic* __this, double x)
{
    return (x >= 0.0) ? x : -x;
}

float Math__Abs_1(::uStatic* __this, float x)
{
    return (x >= 0.0f) ? x : -x;
}

::app::Uno::Float2 Math__Abs_2(::uStatic* __this, ::app::Uno::Float2 a)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Abs_1(NULL, a.X), Math__Abs_1(NULL, a.Y));
}

int Math__Abs_5(::uStatic* __this, int x)
{
    return (x >= 0) ? x : -x;
}

double Math__Floor(::uStatic* __this, double __x)
{
    return floor(__x);
}

float Math__Floor_1(::uStatic* __this, float __x)
{
    return floorf(__x);
}

::app::Uno::Float2 Math__Floor_2(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Floor_1(NULL, v.X), Math__Floor_1(NULL, v.Y));
}

double Math__Ceil(::uStatic* __this, double __x)
{
    return ceil(__x);
}

float Math__Ceil_1(::uStatic* __this, float __x)
{
    return ceilf(__x);
}

::app::Uno::Float2 Math__Ceil_2(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Ceil_1(NULL, v.X), Math__Ceil_1(NULL, v.Y));
}

double Math__Mod(::uStatic* __this, double x, double y)
{
    return x - (y * Math__Floor(NULL, x / y));
}

float Math__Mod_1(::uStatic* __this, float x, float y)
{
    return x - (y * Math__Floor_1(NULL, x / y));
}

double Math__Max(::uStatic* __this, double a, double b)
{
    return (a > b) ? a : b;
}

float Math__Max_1(::uStatic* __this, float a, float b)
{
    return (a > b) ? a : b;
}

::app::Uno::Float2 Math__Max_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Max_1(NULL, a.X, b.X), Math__Max_1(NULL, a.Y, b.Y));
}

::app::Uno::Float4 Math__Max_7(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__New_2(NULL, Math__Max_1(NULL, a.X, b.X), Math__Max_1(NULL, a.Y, b.Y), Math__Max_1(NULL, a.Z, b.Z), Math__Max_1(NULL, a.W, b.W));
}

int Math__Max_8(::uStatic* __this, int a, int b)
{
    return (a > b) ? a : b;
}

double Math__Min(::uStatic* __this, double a, double b)
{
    return (a < b) ? a : b;
}

float Math__Min_1(::uStatic* __this, float a, float b)
{
    return (a < b) ? a : b;
}

::app::Uno::Float2 Math__Min_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Min_1(NULL, a.X, b.X), Math__Min_1(NULL, a.Y, b.Y));
}

int Math__Min_8(::uStatic* __this, int a, int b)
{
    return (a < b) ? a : b;
}

double Math__Clamp(::uStatic* __this, double x, double minimum, double maximum)
{
    return Math__Max(NULL, Math__Min(NULL, x, maximum), minimum);
}

float Math__Clamp_1(::uStatic* __this, float x, float minimum, float maximum)
{
    return Math__Max_1(NULL, Math__Min_1(NULL, x, maximum), minimum);
}

::app::Uno::Float2 Math__Clamp_3(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 minimum, ::app::Uno::Float2 maximum)
{
    return Math__Max_3(NULL, Math__Min_3(NULL, x, maximum), minimum);
}

int Math__Clamp_8(::uStatic* __this, int x, int minimum, int maximum)
{
    return Math__Max_8(NULL, Math__Min_8(NULL, x, maximum), minimum);
}

float Math__Lerp_1(::uStatic* __this, float a, float b, float t)
{
    return a + ((b - a) * t);
}

::app::Uno::Float2 Math__Lerp_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float t)
{
    return ::app::Uno::Float2__op_Addition(NULL, a, ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__op_Subtraction(NULL, b, a), t));
}

::app::Uno::Float3 Math__Lerp_4(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float t)
{
    return ::app::Uno::Float3__op_Addition(NULL, a, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Subtraction(NULL, b, a), t));
}

float Math__Saturate_1(::uStatic* __this, float x)
{
    return Math__Clamp_1(NULL, x, 0.0f, 1.0f);
}

double Math__Round(::uStatic* __this, double x)
{
    return Math__Floor(NULL, x + 0.5);
}

float Math__Round_1(::uStatic* __this, float x)
{
    return Math__Floor_1(NULL, x + 0.5f);
}

::app::Uno::Float2 Math__Round_2(::uStatic* __this, ::app::Uno::Float2 x)
{
    return Math__Floor_2(NULL, ::app::Uno::Float2__op_Addition_1(NULL, x, 0.5f));
}

double Math__Round_6(::uStatic* __this, double d, int decimals)
{
    ::uLong multiplier = (::uLong)Math__Pow_1(NULL, 10.0f, (float)decimals);
    ::uLong intPart = (::uLong)d;
    double decimalPart = Math__Round(NULL, (d - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

int Math__NextPow2(::uStatic* __this, int x)
{
    int y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

bool Math__IsPow2(::uStatic* __this, int x)
{
    return x == (x & -x);
}

}}
