// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CURVE_TO_H__
#define __APP_FUSE_DRAWING_CURVE_TO_H__

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct CurveTo;

struct CurveTo__uType : ::app::Fuse::Drawing::PathGeometry__uType
{
};

CurveTo__uType* CurveTo__typeof();

::app::Uno::Float2 CurveTo__get_EndTangent(CurveTo* __this);
bool CurveTo__get_HasLastBounds(CurveTo* __this);
::app::Uno::Rect CurveTo__get_LastBounds(CurveTo* __this);
::app::Uno::Float2 CurveTo__get_ControlPointEnd(CurveTo* __this);
void CurveTo__CurveToCtor(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
::uObject* CurveTo__EvaluateLast(CurveTo* __this);
::uString* CurveTo__Serialize(CurveTo* __this);
void CurveTo___ObjInit_1(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
CurveTo* CurveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
void CurveTo___ObjInit_2(CurveTo* __this);

struct CurveTo : ::app::Fuse::Drawing::PathGeometry
{
    ::app::Uno::Float2 _lastPosition;
    ::app::Uno::Float2 _controlPointStart;
    ::app::Uno::Float2 _controlPointEnd;

    void CurveToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
    void _ObjInit_1(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
    void _ObjInit_2() { CurveTo___ObjInit_2(this); }
    ::app::Uno::Float2 ControlPointEnd();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void CurveTo::CurveToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { CurveTo__CurveToCtor(this, prev, lastPosition, controlPointStart, controlPointEnd, position); }
inline void CurveTo::_ObjInit_1(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { CurveTo___ObjInit_1(this, prev, lastPosition, controlPointStart, controlPointEnd, position); }
inline ::app::Uno::Float2 CurveTo::ControlPointEnd() { return CurveTo__get_ControlPointEnd(this); }

}}}


#endif
