// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometry;

struct PathGeometry__uType : ::uClassType
{
    ::uObject*(*__fp_EvaluateLast)(PathGeometry*);
    ::app::Uno::Float2(*__fp_FindStartOfLastContour)(PathGeometry*);
    ::uString*(*__fp_Serialize)(PathGeometry*);
    bool(*__fp_get_HasLastBounds)(PathGeometry*);
    ::app::Uno::Rect(*__fp_get_LastBounds)(PathGeometry*);
    bool(*__fp_get_EndsContour)(PathGeometry*);
    ::app::Uno::Float2(*__fp_get_EndTangent)(PathGeometry*);
};

PathGeometry__uType* PathGeometry__typeof();

::app::Uno::Rect PathGeometry__get_Bounds(PathGeometry* __this);
bool PathGeometry__get_HasLastBounds(PathGeometry* __this);
::app::Uno::Rect PathGeometry__get_LastBounds(PathGeometry* __this);
bool PathGeometry__get_EndsContour(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__get_EndPosition(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__get_EndTangent(PathGeometry* __this);
PathGeometry* PathGeometry__Parse(::uStatic* __this, ::uString* pathDescription);
void PathGeometry__PathGeometryCtor(PathGeometry* __this, PathGeometry* previous, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__MoveTo(PathGeometry* __this, float x, float y);
PathGeometry* PathGeometry__MoveTo_1(PathGeometry* __this, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__LineTo(PathGeometry* __this, float x, float y);
PathGeometry* PathGeometry__LineTo_1(PathGeometry* __this, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__HorizontalLineTo(PathGeometry* __this, float x);
PathGeometry* PathGeometry__VerticalLineTo(PathGeometry* __this, float y);
PathGeometry* PathGeometry__CurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__SmoothCurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__ClosePath(PathGeometry* __this);
::app::Fuse::Drawing::Polygon* PathGeometry__ToPolygon(PathGeometry* __this, ::uDelegate* WindingRule, ::app::Uno::Float2 scale);
PathGeometry* PathGeometry__RemoveLast(PathGeometry* __this);
::app::Uno::Rect PathGeometry__CalculateBounds(PathGeometry* __this);
::uObject* PathGeometry__EvaluateLast(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__FindStartOfLastContour(PathGeometry* __this);
::uString* PathGeometry__ToString(PathGeometry* __this);
::uString* PathGeometry__Serialize(PathGeometry* __this);
void PathGeometry___ObjInit(PathGeometry* __this);
PathGeometry* PathGeometry__New_1(::uStatic* __this);

struct PathGeometry : ::uObject
{
    ::uStrong< PathGeometry*> _previous;
    ::app::Uno::Float2 _position;
    ::app::Uno::Rect _boundsCache;
    bool _hasBoundsCache;

    void PathGeometryCtor(PathGeometry* previous, ::app::Uno::Float2 position);
    PathGeometry* MoveTo(float x, float y) { return PathGeometry__MoveTo(this, x, y); }
    PathGeometry* MoveTo_1(::app::Uno::Float2 position);
    PathGeometry* LineTo(float x, float y) { return PathGeometry__LineTo(this, x, y); }
    PathGeometry* LineTo_1(::app::Uno::Float2 position);
    PathGeometry* HorizontalLineTo(float x) { return PathGeometry__HorizontalLineTo(this, x); }
    PathGeometry* VerticalLineTo(float y) { return PathGeometry__VerticalLineTo(this, y); }
    PathGeometry* CurveTo(::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
    PathGeometry* SmoothCurveTo(::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
    PathGeometry* ClosePath() { return PathGeometry__ClosePath(this); }
    ::app::Fuse::Drawing::Polygon* ToPolygon(::uDelegate* WindingRule, ::app::Uno::Float2 scale);
    PathGeometry* RemoveLast() { return PathGeometry__RemoveLast(this); }
    ::app::Uno::Rect CalculateBounds();
    ::uObject* EvaluateLast() { return (((PathGeometry__uType*)this->__obj_type)->__fp_EvaluateLast)(this); }
    ::app::Uno::Float2 FindStartOfLastContour();
    ::uString* Serialize() { return (((PathGeometry__uType*)this->__obj_type)->__fp_Serialize)(this); }
    void _ObjInit() { PathGeometry___ObjInit(this); }
    ::app::Uno::Rect Bounds();
    bool HasLastBounds() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_HasLastBounds)(this); }
    ::app::Uno::Rect LastBounds();
    bool EndsContour() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_EndsContour)(this); }
    ::app::Uno::Float2 EndPosition();
    ::app::Uno::Float2 EndTangent();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void PathGeometry::PathGeometryCtor(PathGeometry* previous, ::app::Uno::Float2 position) { PathGeometry__PathGeometryCtor(this, previous, position); }
inline PathGeometry* PathGeometry::MoveTo_1(::app::Uno::Float2 position) { return PathGeometry__MoveTo_1(this, position); }
inline PathGeometry* PathGeometry::LineTo_1(::app::Uno::Float2 position) { return PathGeometry__LineTo_1(this, position); }
inline PathGeometry* PathGeometry::CurveTo(::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { return PathGeometry__CurveTo(this, controlPointStart, controlPointEnd, position); }
inline PathGeometry* PathGeometry::SmoothCurveTo(::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { return PathGeometry__SmoothCurveTo(this, controlPointEnd, position); }
inline ::app::Fuse::Drawing::Polygon* PathGeometry::ToPolygon(::uDelegate* WindingRule, ::app::Uno::Float2 scale) { return PathGeometry__ToPolygon(this, WindingRule, scale); }
inline ::app::Uno::Rect PathGeometry::CalculateBounds() { return PathGeometry__CalculateBounds(this); }
inline ::app::Uno::Float2 PathGeometry::FindStartOfLastContour() { return (((PathGeometry__uType*)this->__obj_type)->__fp_FindStartOfLastContour)(this); }
inline ::app::Uno::Rect PathGeometry::Bounds() { return PathGeometry__get_Bounds(this); }
inline ::app::Uno::Rect PathGeometry::LastBounds() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_LastBounds)(this); }
inline ::app::Uno::Float2 PathGeometry::EndPosition() { return PathGeometry__get_EndPosition(this); }
inline ::app::Uno::Float2 PathGeometry::EndTangent() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_EndTangent)(this); }

}}}


#endif
