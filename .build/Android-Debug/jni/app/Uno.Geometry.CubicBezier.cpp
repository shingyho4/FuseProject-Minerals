// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Geometry.Vertex.h>
#include <app/Uno.Geometry.VertexEnumerable.h>
#include <app/Uno.Math.h>

namespace app {
namespace Uno {
namespace Geometry {

CubicBezier__uType* CubicBezier__typeof()
{
    static CubicBezier__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CubicBezier__uType*)::uAllocClassType(sizeof(CubicBezier__uType), "Uno.Geometry.CubicBezier", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(CubicBezier, _head);
        type->StrongRefOffsets[1] = offsetof(CubicBezier, _last);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
        type->StrongRefNames[1] = "_last";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* CubicBezier__Subdivide(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 p2, ::app::Uno::Float2 p3, ::app::Uno::Float2 p4, float maxError)
{
    CubicBezier* s = CubicBezier__New_1(NULL, maxError);
    ::uPtr< ::app::Uno::Geometry::CubicBezier*>(s)->AddPoint(p1.X, p1.Y);
    s->SubdivideRecursive(p1.X, p1.Y, p2.X, p2.Y, p3.X, p3.Y, p4.X, p4.Y, 0);
    s->AddPoint(p4.X, p4.Y);
    return (::uObject*)::app::Uno::Geometry::VertexEnumerable__New_1(NULL, s->_head);
}

void CubicBezier__SubdivideRecursive(CubicBezier* __this, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level)
{
    if ((((((::app::Uno::Math__Abs_1(NULL, x1 - x2) <= 1e-05f) && (::app::Uno::Math__Abs_1(NULL, x2 - x3) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, x3 - x4) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y1 - y2) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y2 - y3) <= 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, y3 - y4) <= 1e-05f))
    {
        return;
    }

    float x12 = (x1 + x2) / 2.0f;
    float y12 = (y1 + y2) / 2.0f;
    float x23 = (x2 + x3) / 2.0f;
    float y23 = (y2 + y3) / 2.0f;
    float x34 = (x3 + x4) / 2.0f;
    float y34 = (y3 + y4) / 2.0f;
    float x123 = (x12 + x23) / 2.0f;
    float y123 = (y12 + y23) / 2.0f;
    float x234 = (x23 + x34) / 2.0f;
    float y234 = (y23 + y34) / 2.0f;
    float x1234 = (x123 + x234) / 2.0f;
    float y1234 = (y123 + y234) / 2.0f;
    float dx = x4 - x1;
    float dy = y4 - y1;
    float d2 = ::app::Uno::Math__Abs_1(NULL, ((x2 - x4) * dy) - ((y2 - y4) * dx));
    float d3 = ::app::Uno::Math__Abs_1(NULL, ((x3 - x4) * dy) - ((y3 - y4) * dx));

    if (((d2 + d3) * (d2 + d3)) < (__this->_maxErrorSquared * ((dx * dx) + (dy * dy))))
    {
        __this->AddPoint(x1234, y1234);
        return;
    }

    __this->SubdivideRecursive(x1, y1, x12, y12, x123, y123, x1234, y1234, level + 1);
    __this->SubdivideRecursive(x1234, y1234, x234, y234, x34, y34, x4, y4, level + 1);
}

void CubicBezier__AddPoint(CubicBezier* __this, float x, float y)
{
    ::app::Uno::Geometry::Vertex* collection_123;
    __this->_last = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_last)->Next = (collection_123 = ::app::Uno::Geometry::Vertex__New_1(NULL), ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->X = x, ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->Y = y, collection_123);
}

void CubicBezier___ObjInit(CubicBezier* __this, float maxError)
{
    __this->_head = __this->_last = ::app::Uno::Geometry::Vertex__New_1(NULL);
    __this->_maxErrorSquared = maxError * maxError;
}

CubicBezier* CubicBezier__New_1(::uStatic* __this, float maxError)
{
    CubicBezier* inst = (::app::Uno::Geometry::CubicBezier*)::uAllocObject(sizeof(::app::Uno::Geometry::CubicBezier), ::app::Uno::Geometry::CubicBezier__typeof());
    inst->_ObjInit(maxError);
    return inst;
}

}}}
