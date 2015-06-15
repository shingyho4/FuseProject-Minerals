// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

MeshBuilder__uType* MeshBuilder__typeof()
{
    static MeshBuilder__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MeshBuilder__uType*)::uAllocClassType(sizeof(MeshBuilder__uType), "Fuse.Drawing.Tesselation.MeshBuilder", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(MeshBuilder, _mesh);
        type->StrongRefOffsets[1] = offsetof(MeshBuilder, _lastEdge);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_mesh";
        type->StrongRefNames[1] = "_lastEdge";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__CreateFromContours(::uStatic* __this, ::uObject* contours)
{
    MeshBuilder* b = MeshBuilder__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(contours)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::MeshBuilder*>(b)->NewContour();

        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Vertices())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Uno::Float2 v = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_124));
            ::uPtr< ::app::Fuse::Drawing::Tesselation::MeshBuilder*>(b)->AddVertex(v.X, v.Y);
        }
    }

    return ::uPtr< ::app::Fuse::Drawing::Tesselation::MeshBuilder*>(b)->Complete();
}

void MeshBuilder__NewContour(MeshBuilder* __this)
{
    __this->_lastEdge = NULL;
}

void MeshBuilder__AddVertex(MeshBuilder* __this, float x, float y)
{
    if ((x != x) || (y != y))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Vertex was NaN")));
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = (__this->_lastEdge != NULL) ? ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_lastEdge)->Split() : __this->CreateSelfLoop();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->S = (double)x;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->T = (double)y;
    e->Winding(1);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e->Sym())->Winding(-1);
    __this->_lastEdge = e;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* MeshBuilder__CreateSelfLoop(MeshBuilder* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->MakeEdge();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(e, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());
    return e;
}

::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__Complete(MeshBuilder* __this)
{
    return __this->_mesh;
}

void MeshBuilder___ObjInit(MeshBuilder* __this)
{
    __this->_mesh = ::app::Fuse::Drawing::Tesselation::Mesh__New_1(NULL);
}

MeshBuilder* MeshBuilder__New_1(::uStatic* __this)
{
    MeshBuilder* inst = (::app::Fuse::Drawing::Tesselation::MeshBuilder*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::MeshBuilder), ::app::Fuse::Drawing::Tesselation::MeshBuilder__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
