// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATH_H__
#define __APP_UNO_MATH_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Math__uType : ::uClassType
{
};

Math__uType* Math__typeof();

float Math__DegreesToRadians_1(::uStatic* __this, float degrees);
float Math__RadiansToDegrees_1(::uStatic* __this, float radians);
float Math__Sin_1(::uStatic* __this, float __radians);
float Math__Cos_1(::uStatic* __this, float __radians);
float Math__Tan_1(::uStatic* __this, float __radians);
float Math__Asin_1(::uStatic* __this, float __radians);
float Math__Acos_1(::uStatic* __this, float __radians);
float Math__Atan2_1(::uStatic* __this, float __y, float __x);
double Math__Pow(::uStatic* __this, double __x, double __y);
float Math__Pow_1(::uStatic* __this, float __x, float __y);
float Math__Log_1(::uStatic* __this, float __x);
double Math__Sqrt(::uStatic* __this, double __x);
float Math__Sqrt_1(::uStatic* __this, float __x);
double Math__Abs(::uStatic* __this, double x);
float Math__Abs_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Abs_2(::uStatic* __this, ::app::Uno::Float2 a);
int Math__Abs_5(::uStatic* __this, int x);
double Math__Floor(::uStatic* __this, double __x);
float Math__Floor_1(::uStatic* __this, float __x);
::app::Uno::Float2 Math__Floor_2(::uStatic* __this, ::app::Uno::Float2 v);
double Math__Ceil(::uStatic* __this, double __x);
float Math__Ceil_1(::uStatic* __this, float __x);
::app::Uno::Float2 Math__Ceil_2(::uStatic* __this, ::app::Uno::Float2 v);
double Math__Mod(::uStatic* __this, double x, double y);
float Math__Mod_1(::uStatic* __this, float x, float y);
double Math__Max(::uStatic* __this, double a, double b);
float Math__Max_1(::uStatic* __this, float a, float b);
::app::Uno::Float2 Math__Max_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float4 Math__Max_7(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
int Math__Max_8(::uStatic* __this, int a, int b);
double Math__Min(::uStatic* __this, double a, double b);
float Math__Min_1(::uStatic* __this, float a, float b);
::app::Uno::Float2 Math__Min_3(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
int Math__Min_8(::uStatic* __this, int a, int b);
double Math__Clamp(::uStatic* __this, double x, double minimum, double maximum);
float Math__Clamp_1(::uStatic* __this, float x, float minimum, float maximum);
::app::Uno::Float2 Math__Clamp_3(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 minimum, ::app::Uno::Float2 maximum);
int Math__Clamp_8(::uStatic* __this, int x, int minimum, int maximum);
float Math__Lerp_1(::uStatic* __this, float a, float b, float t);
::app::Uno::Float2 Math__Lerp_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float t);
::app::Uno::Float3 Math__Lerp_4(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float t);
float Math__Saturate_1(::uStatic* __this, float x);
double Math__Round(::uStatic* __this, double x);
float Math__Round_1(::uStatic* __this, float x);
::app::Uno::Float2 Math__Round_2(::uStatic* __this, ::app::Uno::Float2 x);
double Math__Round_6(::uStatic* __this, double d, int decimals);
int Math__NextPow2(::uStatic* __this, int x);
bool Math__IsPow2(::uStatic* __this, int x);

}}


#endif
