// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.EdgesEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.FacesEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.Sweep.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.Tesselation.VerticesEnumerable.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

Mesh__uType* Mesh__typeof()
{
    static Mesh__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Mesh__uType*)::uAllocClassType(sizeof(Mesh__uType), "Fuse.Drawing.Tesselation.Mesh", ::uObject__typeof(), 0, 4);
        type->StrongRefOffsets[0] = offsetof(Mesh, VerticesHead);
        type->StrongRefOffsets[1] = offsetof(Mesh, FacesHead);
        type->StrongRefOffsets[2] = offsetof(Mesh, EdgesHead);
        type->StrongRefOffsets[3] = offsetof(Mesh, _edgesHeadSym);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "VerticesHead";
        type->StrongRefNames[1] = "FacesHead";
        type->StrongRefNames[2] = "EdgesHead";
        type->StrongRefNames[3] = "_edgesHeadSym";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Mesh__get_Vertices(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::VerticesEnumerable__New_1(NULL, __this->VerticesHead);
}

::uObject* Mesh__get_Faces(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::FacesEnumerable__New_1(NULL, __this->FacesHead);
}

::uObject* Mesh__get_InteriorFaces(Mesh* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(NULL, __this->Faces(), ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Drawing_Tesselation_Face__typeof(), (const void*)::app::Fuse::Drawing::Tesselation::Mesh__IsInside, __this));
}

::uObject* Mesh__get_Edges(Mesh* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::EdgesEnumerable__New_1(NULL, __this->EdgesHead);
}

void Mesh__ComputeInterior(Mesh* __this, ::uDelegate* windingRule)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(::app::Fuse::Drawing::Tesselation::Sweep__New_1(NULL, __this, windingRule))->ComputeInterior();
}

void Mesh__TessellateInterior(Mesh* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->Faces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* f = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->IsInside())
        {
            __this->TessellateMonoRegion(f);
        }
    }
}

void Mesh__TessellateMonoRegion(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* up = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->AnEdge();

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Origin()))
    {
        up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev();
    }

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(up->Origin())->VertLeq(up->Destination()))
    {
        up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftNext();
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* lo = up->LeftPrev();

    while (up->LeftNext() != lo)
    {
        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Origin()))
        {
            while ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext() != up) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->GoesLeft() || (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->Destination()) <= 0.0f)))
            {
                lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext(), lo))->Sym();
            }

            lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftPrev();
        }
        else
        {
            while ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext() != up) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev())->GoesRight() || (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev())->Origin()) >= 0.0f)))
            {
                up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(up, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftPrev()))->Sym();
            }

            up = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(up)->LeftNext();
        }
    }

    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext())->LeftNext() != up)
    {
        lo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(lo)->LeftNext(), lo))->Sym();
    }
}

void Mesh__SetWindingNumber(Mesh* __this, int value)
{
    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_125));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Winding(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->IsBoundaryEdge() ? (::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left())->IsInside() ? value : -value) : 0);
    }
}

void Mesh__DeleteInternalEdges(Mesh* __this)
{
    for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_126));

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->IsBoundaryEdge())
        {
            __this->DeleteEdge(e);
        }
    }
}

bool Mesh__IsInside(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* face)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->IsInside();
}

void Mesh__Dispose(Mesh* __this)
{
    for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->Edges())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* edge = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_127));
        ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, edge);
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, __this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Next(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Next(NULL);
}

::uObject* Mesh__GetContours(Mesh* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(NULL, __this->InteriorFaces(), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof(), (const void*)::app::Fuse::Drawing::Tesselation::Mesh__CreateContour, __this));
}

::app::Fuse::Drawing::Contour* Mesh__CreateContour(Mesh* __this, ::app::Fuse::Drawing::Tesselation::Face* f)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->ToContour();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__MakeEdge(Mesh* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Fuse::Drawing::Tesselation::HalfEdge__MakeEdge(NULL, __this->EdgesHead);
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, e, __this->VerticesHead);
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym(), __this->VerticesHead);
    ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, e, __this->FacesHead);
    return e;
}

void Mesh__CheckConsistency(Mesh* __this)
{
}

void Mesh__DeleteEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDel)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("eDel.Origin was null"), ::uBox(::app::Uno::Float2__typeof(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Destination())->Coords()))));
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Destination() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("eDel.Destination was null "), ::uBox(::app::Uno::Float2__typeof(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin())->Coords()))));
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* eDelSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Sym();
    bool joiningLoops = false;

    if (eDel->Left() != eDel->Right())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Right());
    }

    if (eDel->OriginNext() == eDel)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Origin(), NULL);
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Right())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->OriginPrev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eDel->Origin())->AnEdge(eDel->OriginNext());
        ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDel, eDel->OriginPrev());

        if (!joiningLoops)
        {
            ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eDel, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left());
        }
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->OriginNext() == eDelSym)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->Origin(), NULL);
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, eDelSym->Left(), NULL);
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Left())->AnEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDelSym)->OriginPrev());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eDelSym->Origin())->AnEdge(eDelSym->OriginNext());
        ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDelSym, eDelSym->OriginPrev());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__KillEdge(NULL, eDel);
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__SplitEdge(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Split();
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Mesh__Connect(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    ::app::Fuse::Drawing::Tesselation::Face* ind_128;
    bool joiningLoops = false;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew = ::app::Fuse::Drawing::Tesselation::HalfEdge__MakeEdge(NULL, eOrg);
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->Sym();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->LeftNext());
    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eNewSym, eDst);
    eNew->Origin(eOrg->Destination());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNewSym)->Origin(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin());
    eNew->Left((ind_128 = eOrg->Left(), eNewSym->Left(ind_128), ind_128));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(eOrg->Left())->AnEdge(eNewSym);

    if (!joiningLoops)
    {
        ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    return eNew;
}

void Mesh__Splice(Mesh* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::app::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    bool joiningLoops = false;
    bool joiningVertices = false;

    if (eOrg == eDst)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin())
    {
        joiningVertices = true;
        ::app::Fuse::Drawing::Tesselation::Vertex__KillVertex(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin());
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left())
    {
        joiningLoops = true;
        ::app::Fuse::Drawing::Tesselation::Face__KillFace(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge__ExchangeOriginNextAkaSplice(NULL, eDst, eOrg);

    if (!joiningVertices)
    {
        ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, eDst, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Origin());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eOrg->Origin())->AnEdge(eOrg);
    }

    if (!joiningLoops)
    {
        ::app::Fuse::Drawing::Tesselation::Face__MakeFace(NULL, eDst, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eOrg)->Left());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(eOrg->Left())->AnEdge(eOrg);
    }
}

void Mesh___ObjInit(Mesh* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* ind_129;
    ::app::Fuse::Drawing::Tesselation::Face* ind_130;
    __this->VerticesHead = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL);
    __this->FacesHead = ::app::Fuse::Drawing::Tesselation::Face__New_1(NULL);
    __this->EdgesHead = ::app::Fuse::Drawing::Tesselation::HalfEdge__New_1(NULL, true);
    __this->_edgesHeadSym = ::app::Fuse::Drawing::Tesselation::HalfEdge__New_1(NULL, false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Next((ind_129 = __this->VerticesHead, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->Prev(ind_129), ind_129));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->VerticesHead)->AnEdge(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Next((ind_130 = __this->FacesHead, ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->Prev(ind_130), ind_130));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->AnEdge(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->FacesHead)->IsInside(false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Next(__this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Sym(__this->_edgesHeadSym);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->OriginNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->LeftNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Origin(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Left(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->Winding(0);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->EdgesHead)->ActiveRegion(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Next(__this->_edgesHeadSym);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Sym(__this->EdgesHead);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->OriginNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->LeftNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Origin(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Left(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->Winding(0);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->_edgesHeadSym)->ActiveRegion(NULL);
}

Mesh* Mesh__New_1(::uStatic* __this)
{
    Mesh* inst = (::app::Fuse::Drawing::Tesselation::Mesh*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Mesh), ::app::Fuse::Drawing::Tesselation::Mesh__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
