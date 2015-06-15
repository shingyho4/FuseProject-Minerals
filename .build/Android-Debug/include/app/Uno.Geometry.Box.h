// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_BOX_H__
#define __APP_UNO_GEOMETRY_BOX_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Geometry {

struct Box;

struct Box__uType : ::uValueType
{
};

Box__uType* Box__typeof();

void Box___ObjInit(Box* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max);
Box Box__New_1(::uStatic* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max);

struct Box
{
    ::app::Uno::Float3 Minimum;
    ::app::Uno::Float3 Maximum;

    void _ObjInit(::app::Uno::Float3 min, ::app::Uno::Float3 max) { Box___ObjInit(this, min, max); }
};

}}}


#endif
