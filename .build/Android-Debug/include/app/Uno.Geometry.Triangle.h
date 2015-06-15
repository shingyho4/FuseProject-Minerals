// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_TRIANGLE_H__
#define __APP_UNO_GEOMETRY_TRIANGLE_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Triangle;

struct Triangle__uType : ::uValueType
{
};

Triangle__uType* Triangle__typeof();

void Triangle___ObjInit(Triangle* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c);
Triangle Triangle__New_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c);

struct Triangle
{
    ::app::Uno::Float3 A;
    ::app::Uno::Float3 B;
    ::app::Uno::Float3 C;

    void _ObjInit(::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c) { Triangle___ObjInit(this, a, b, c); }
};

}}}


#endif
