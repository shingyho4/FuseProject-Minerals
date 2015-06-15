// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ClosePath.h>
#include <app/Fuse.Drawing.ContourEnumerable.h>
#include <app/Fuse.Drawing.CurveTo.h>
#include <app/Fuse.Drawing.HorizontalLineTo.h>
#include <app/Fuse.Drawing.LineTo.h>
#include <app/Fuse.Drawing.MoveTo.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryParser.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.SmoothCurveTo.h>
#include <app/Fuse.Drawing.VerticalLineTo.h>
#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

PathGeometry__uType* PathGeometry__typeof()
{
    static PathGeometry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PathGeometry__uType*)::uAllocClassType(sizeof(PathGeometry__uType), "Fuse.Drawing.PathGeometry", ::uObject__typeof(), 0, 1);
        type->__fp_get_HasLastBounds = PathGeometry__get_HasLastBounds;
        type->__fp_get_LastBounds = PathGeometry__get_LastBounds;
        type->__fp_get_EndsContour = PathGeometry__get_EndsContour;
        type->__fp_get_EndTangent = PathGeometry__get_EndTangent;
        type->__fp_EvaluateLast = PathGeometry__EvaluateLast;
        type->__fp_FindStartOfLastContour = PathGeometry__FindStartOfLastContour;
        type->__fp_ToString = (::uString*(*)(::uObject*))PathGeometry__ToString;
        type->__fp_Serialize = PathGeometry__Serialize;

        type->StrongRefOffsets[0] = offsetof(PathGeometry, _previous);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_previous";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect PathGeometry__get_Bounds(PathGeometry* __this)
{
    if (!__this->_hasBoundsCache)
    {
        __this->_hasBoundsCache = true;
        __this->_boundsCache = __this->CalculateBounds();
    }

    return __this->_boundsCache;
}

bool PathGeometry__get_HasLastBounds(PathGeometry* __this)
{
    return false;
}

::app::Uno::Rect PathGeometry__get_LastBounds(PathGeometry* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool PathGeometry__get_EndsContour(PathGeometry* __this)
{
    return false;
}

::app::Uno::Float2 PathGeometry__get_EndPosition(PathGeometry* __this)
{
    return __this->_position;
}

::app::Uno::Float2 PathGeometry__get_EndTangent(PathGeometry* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

PathGeometry* PathGeometry__Parse(::uStatic* __this, ::uString* pathDescription)
{
    return ::app::Fuse::Drawing::PathGeometryParser__Deserialize(NULL, pathDescription);
}

void PathGeometry__PathGeometryCtor(PathGeometry* __this, PathGeometry* previous, ::app::Uno::Float2 position)
{
    __this->_previous = previous;
    __this->_position = position;
}

PathGeometry* PathGeometry__MoveTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__MoveTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, position);
}

PathGeometry* PathGeometry__LineTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_2(NULL, __this, __this->EndPosition(), ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__LineTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_2(NULL, __this, __this->EndPosition(), position);
}

PathGeometry* PathGeometry__HorizontalLineTo(PathGeometry* __this, float x)
{
    return (PathGeometry*)::app::Fuse::Drawing::HorizontalLineTo__New_4(NULL, __this, __this->EndPosition(), x);
}

PathGeometry* PathGeometry__VerticalLineTo(PathGeometry* __this, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::VerticalLineTo__New_4(NULL, __this, __this->EndPosition(), y);
}

PathGeometry* PathGeometry__CurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::CurveTo__New_2(NULL, __this, __this->EndPosition(), controlPointStart, controlPointEnd, position);
}

PathGeometry* PathGeometry__SmoothCurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::SmoothCurveTo__New_4(NULL, __this, __this->EndPosition(), __this->EndTangent(), controlPointEnd, position);
}

PathGeometry* PathGeometry__ClosePath(PathGeometry* __this)
{
    return (PathGeometry*)::app::Fuse::Drawing::ClosePath__New_2(NULL, __this, __this->EndPosition());
}

::app::Fuse::Drawing::Polygon* PathGeometry__ToPolygon(PathGeometry* __this, ::uDelegate* WindingRule, ::app::Uno::Float2 scale)
{
    return ::app::Fuse::Drawing::Polygon__New_2(NULL, WindingRule, (::uObject*)::app::Fuse::Drawing::ContourEnumerable__New_1(NULL, __this, scale));
}

PathGeometry* PathGeometry__RemoveLast(PathGeometry* __this)
{
    return __this->_previous;
}

::app::Uno::Rect PathGeometry__CalculateBounds(PathGeometry* __this)
{
    PathGeometry* pg = __this;

    while ((pg != NULL) && !pg->HasLastBounds())
    {
        pg = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(pg)->_previous;
    }

    if (pg == NULL)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect rectUnion = pg->LastBounds();
    pg = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(pg)->_previous;

    while (pg != NULL)
    {
        if (::uPtr< ::app::Fuse::Drawing::PathGeometry*>(pg)->HasLastBounds())
        {
            rectUnion = ::app::Uno::Rect__Union(NULL, rectUnion, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(pg)->LastBounds());
        }

        pg = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(pg)->_previous;
    }

    return rectUnion;
}

::uObject* PathGeometry__EvaluateLast(PathGeometry* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

::app::Uno::Float2 PathGeometry__FindStartOfLastContour(PathGeometry* __this)
{
    return (__this->_previous != NULL) ? ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_previous)->FindStartOfLastContour() : ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

::uString* PathGeometry__ToString(PathGeometry* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, (__this->_previous == NULL) ? ::uGetConstString("") : ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_previous)->ToString(), ::uGetConstString(" ")), __this->Serialize());
}

::uString* PathGeometry__Serialize(PathGeometry* __this)
{
    return ::uGetConstString("");
}

void PathGeometry___ObjInit(PathGeometry* __this)
{
    __this->_previous = NULL;
    __this->_position = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

PathGeometry* PathGeometry__New_1(::uStatic* __this)
{
    PathGeometry* inst = (::app::Fuse::Drawing::PathGeometry*)::uAllocObject(sizeof(::app::Fuse::Drawing::PathGeometry), ::app::Fuse::Drawing::PathGeometry__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
