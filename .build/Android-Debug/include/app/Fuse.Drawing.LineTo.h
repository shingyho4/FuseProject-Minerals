// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINE_TO_H__
#define __APP_FUSE_DRAWING_LINE_TO_H__

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LineTo;

struct LineTo__uType : ::app::Fuse::Drawing::PathGeometry__uType
{
};

LineTo__uType* LineTo__typeof();

bool LineTo__get_HasLastBounds(LineTo* __this);
::app::Uno::Rect LineTo__get_LastBounds(LineTo* __this);
void LineTo__LineToCtor(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
::uObject* LineTo__EvaluateLast(LineTo* __this);
::uString* LineTo__Serialize(LineTo* __this);
void LineTo___ObjInit_1(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
LineTo* LineTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
void LineTo___ObjInit_2(LineTo* __this);

struct LineTo : ::app::Fuse::Drawing::PathGeometry
{
    ::app::Uno::Float2 _lastPosition;

    void LineToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
    void _ObjInit_1(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
    void _ObjInit_2() { LineTo___ObjInit_2(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void LineTo::LineToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position) { LineTo__LineToCtor(this, prev, lastPosition, position); }
inline void LineTo::_ObjInit_1(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position) { LineTo___ObjInit_1(this, prev, lastPosition, position); }

}}}


#endif
