// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Cache__Fuse_Drawing_Contour.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.LineCapImpl.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-bf0e78b9.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-fabae529.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {

Polygon__uType* Polygon__typeof()
{
    static Polygon__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Polygon__uType*)::uAllocClassType(sizeof(Polygon__uType), "Fuse.Drawing.Polygon", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(Polygon, _windingRule);
        type->StrongRefOffsets[1] = offsetof(Polygon, _contours);
        type->StrongRefOffsets[2] = offsetof(Polygon, _boundaryContours);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_windingRule";
        type->StrongRefNames[1] = "_contours";
        type->StrongRefNames[2] = "_boundaryContours";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Polygon__get_Contours(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Items();
}

bool Polygon__get_IsDegenerate(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Length() < 1;
}

Polygon* Polygon__Stroke(Polygon* __this, float Width, float Offset, int StartCap, int EndCap)
{
    float _width = Width;
    float _offset = Offset - (Width * 0.5f);
    ::app::Uno::Collections::List__Fuse_Drawing_Contour* strokeContours = ::app::Uno::Collections::List__Fuse_Drawing_Contour__New_1(NULL);

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->Contours())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_125));
        int vertexCount = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->VertexCount();

        if (vertexCount < 2)
        {
            continue;
        }

        ::app::Uno::Collections::List__float2* outer = ::app::Uno::Collections::List__float2__New_1(NULL);
        ::app::Uno::Collections::List__float2* inner = ::app::Uno::Collections::List__float2__New_1(NULL);
        float dist = 0.0f;
        ::app::Uno::Float2 startInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 startOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (int i = 0; i < vertexCount; i++)
        {
            ::app::Uno::Float2 last = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i - 1);
            ::app::Uno::Float2 current = contour->Item(i);
            ::app::Uno::Float2 next = contour->Item(i + 1);
            ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction(NULL, current, last));
            ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
            ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction(NULL, next, current));
            ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
            float len = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction(NULL, last, current));

            if (i > 0)
            {
                dist = dist + len;
            }

            ::app::Uno::Float2 outerV = ::app::Uno::Float2();
            ::app::Uno::Float2 innerV = ::app::Uno::Float2();

            if (!contour->IsClosed() && (i == 0))
            {
                startInner = innerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, rvn, _offset));
                startOuter = outerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, rvn, _width + _offset));
            }
            else if (!contour->IsClosed() && (i == (vertexCount - 1)))
            {
                endInner = innerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, lvn, _offset));
                endOuter = outerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, lvn, _width + _offset));
            }
            else
            {
                ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition(NULL, rvn, lvn), 2.0f);
                ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_1(NULL, bn0.X) + ::app::Uno::Math__Abs_1(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
                float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

                if (((angle < 0.1f) || (angle > 3.04159284f)) || (len < 1.0f))
                {
                    outerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, bisectNormal, _width + _offset));
                    innerV = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, bisectNormal, _offset));
                }
                else
                {
                    ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition(NULL, last, ::app::Uno::Float2__op_Multiply(NULL, lvn, _width + _offset));
                    ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition(NULL, last, ::app::Uno::Float2__op_Multiply(NULL, lvn, _offset));
                    outerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal);
                    innerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal);
                }
            }

            ::uPtr< ::app::Uno::Collections::List__float2*>(outer)->Add(outerV);
            ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Add(innerV);
        }

        ::uArray* innerRev = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Count());

        for (int i = 0; i < inner->Count(); ++i)
        {
            innerRev->Item< ::app::Uno::Float2>(i) = inner->Item((inner->Count() - i) - 1);
        }

        if (contour->IsClosed())
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, (::uObject*)outer));
            strokeContours->Add(::app::Fuse::Drawing::Contour__New_1(NULL, true, innerRev));
        }
        else
        {
            ::uObject* start = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, StartCap))->Create(startInner, startOuter);
            ::uObject* end = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, EndCap))->Create(endOuter, endInner);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, start, (::uObject*)outer), end), (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, innerRev))));
        }
    }

    return Polygon__New_1(NULL, (::uObject*)strokeContours);
}

::uObject* Polygon__Triangulate(Polygon* __this)
{
    ::uArray* array_128;
    ::uArray* verts = __this->GetTriangleVertices();

    if (::uPtr< ::uArray*>(verts)->Length() < 3)
    {
        return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 0));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, (array_128 = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 1), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(0) = ::app::Fuse::Drawing::PolygonDrawable__New_1(NULL, verts), array_128));
}

::uArray* Polygon__GetTriangleVertices(Polygon* __this)
{
    ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
    mesh->TessellateInterior();
    ::uArray* vertices = ::uNewArray(::app::Uno::Float2__typeof(), ::app::Uno::Collections::EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(NULL, mesh->InteriorFaces()) * 3);
    int v = 0;

    for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(mesh->InteriorFaces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* face = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_126));

        for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->EdgeLoop())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge* vert = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_127));
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float2>(v++) = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(vert)->Origin())->Coords();
        }
    }

    mesh->Dispose();
    return vertices;
}

::uObject* Polygon__GetBoundaryContours(Polygon* __this)
{
    if (__this->IsDegenerate())
    {
        __this->_boundaryContours = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), 0);
    }

    if (__this->_boundaryContours == NULL)
    {
        ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
        mesh->SetWindingNumber(1);
        mesh->DeleteInternalEdges();
        __this->_boundaryContours = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Contour(NULL, mesh->GetContours());
        mesh->Dispose();
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__New_1(NULL, __this->_boundaryContours);
}

void Polygon___ObjInit(Polygon* __this, ::uObject* contours)
{
    __this->_ObjInit_1(::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero), contours);
}

Polygon* Polygon__New_1(::uStatic* __this, ::uObject* contours)
{
    Polygon* inst = (::app::Fuse::Drawing::Polygon*)::uAllocObject(sizeof(::app::Fuse::Drawing::Polygon), ::app::Fuse::Drawing::Polygon__typeof());
    inst->_ObjInit(contours);
    return inst;
}

void Polygon___ObjInit_1(Polygon* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    __this->_windingRule = windingRule;
    __this->_contours = ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__New_2(NULL, contours);
}

Polygon* Polygon__New_2(::uStatic* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    Polygon* inst = (::app::Fuse::Drawing::Polygon*)::uAllocObject(sizeof(::app::Fuse::Drawing::Polygon), ::app::Fuse::Drawing::Polygon__typeof());
    inst->_ObjInit_1(windingRule, contours);
    return inst;
}

}}}
