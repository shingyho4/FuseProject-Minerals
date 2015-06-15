// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <app/Fuse.Drawing.Tesselation.Collections.Dict__Fuse_Drawing_Tessela-a8ad233a.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-4556c756.h>
#include <app/Fuse.Drawing.Tesselation.Collections.PriorityQueue__Fuse_Drawin-129e2459.h>
#include <app/Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.Sweep.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

Sweep__uType* Sweep__typeof()
{
    static Sweep__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Sweep__uType*)::uAllocClassType(sizeof(Sweep__uType), "Fuse.Drawing.Tesselation.Sweep", ::uObject__typeof(), 0, 4, 1);
        type->StrongRefOffsets[0] = offsetof(Sweep, _isWindingInside);
        type->StrongRefOffsets[1] = offsetof(Sweep, _dict);
        type->StrongRefOffsets[2] = offsetof(Sweep, _pq);
        type->StrongRefOffsets[3] = offsetof(Sweep, _event);
        type->WeakRefOffsets[0] = offsetof(Sweep, _mesh);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_isWindingInside";
        type->StrongRefNames[1] = "_dict";
        type->StrongRefNames[2] = "_pq";
        type->StrongRefNames[3] = "_event";
        type->WeakRefNames[0] = "_mesh";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Vertex* Sweep__get_Event(Sweep* __this)
{
    return __this->_event;
}

void Sweep__ComputeInterior(Sweep* __this)
{
    __this->RemoveDegenerateEdges();
    __this->InitPriorityQ();
    __this->InitEdgeDict();
    ::app::Fuse::Drawing::Tesselation::Vertex* v;

    while ((v = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Dequeue()) != NULL)
    {
        for (; ; )
        {
            ::app::Fuse::Drawing::Tesselation::Vertex* vNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Peek();

            if ((vNext == NULL) || !::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->VertEq(v))
            {
                break;
            }

            vNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Dequeue();
            __this->SpliceMergeVertices(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->AnEdge(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->AnEdge());
        }

        __this->SweepEvent(v);
    }

    __this->_event = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Min())->Key())->UpperEdge())->Origin();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
    __this->DoneEdgeDict();
    __this->RemoveDegenerateFaces();
}

void Sweep__RemoveDegenerateEdges(Sweep* __this)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNext;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eHead = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->EdgesHead;

    for (e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eHead)->Next(); e != eHead; e = eNext)
    {
        eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Next();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eLnext = e->LeftNext();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->VertEq(e->Destination()) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e->LeftNext())->LeftNext() != e))
        {
            __this->SpliceMergeVertices(eLnext, e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
            e = eLnext;
            eLnext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLnext)->LeftNext() == e)
        {
            if (eLnext != e)
            {
                if ((eLnext == eNext) || (eLnext == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym()))
                {
                    eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Next();
                }

                ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eLnext);
            }

            if ((e == eNext) || (e == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym()))
            {
                eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Next();
            }

            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
        }
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
}

void Sweep__RemoveDegenerateFaces(Sweep* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Faces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* f = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->AnEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext())->LeftNext() == e)
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(e);
        }
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
}

void Sweep__InitPriorityQ(Sweep* __this)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Vertices())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Tesselation::Vertex* v = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Vertex::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Enqueue(v);
    }
}

void Sweep__InitEdgeDict(Sweep* __this)
{
    __this->AddSentinel(-1e+18f);
    __this->AddSentinel(1e+18f);
}

void Sweep__AddSentinel(Sweep* __this, float t)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->MakeEdge();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->S = 9.9999998430674944e+17;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Origin())->T = (double)t;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Destination())->S = -9.9999998430674944e+17;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(e->Destination())->T = (double)t;
    __this->_event = e->Destination();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, e, true);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdgeDictNode(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Insert(reg));
}

void Sweep__SweepEvent(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    __this->_event = vEvent;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->CheckConsistency();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->OutgoingEdges(), ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Drawing_Tesselation_HalfEdge__typeof(), (const void*)::app::Fuse::Drawing::Tesselation::Sweep__HasActiveRegion));

    if (e == NULL)
    {
        __this->ConnectLeftVertex(vEvent);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->ActiveRegion())->TopLeft();

    if (regUp == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft = __this->FinishLeftRegions(reg, NULL);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext() == eTopLeft)
    {
        __this->ConnectRightVertex(regUp, eBottomLeft);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    }
    else
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->CheckInvariants();
    }
}

bool Sweep__HasActiveRegion(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->ActiveRegion() != NULL;
}

void Sweep__ConnectLeftVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->GetRegionContaining(vEvent);
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), vEvent, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) == 0.0f)
    {
        __this->ConnectLeftDegenerate(regUp, vEvent);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination()) ? regUp : regLo;

    if (regUp->IsInside() || ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew;

        if (reg == regUp)
        {
            eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge())->Sym(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext());
        }
        else
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge* tempHalfEdge = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->DestinationNext(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge());
            eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(tempHalfEdge)->Sym();
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->FixUpperEdge(eNew);
        }
        else
        {
            __this->ComputeWinding(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->AddRegionBelow(regUp, eNew));
        }

        __this->SweepEvent(vEvent);
    }
    else
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), NULL, true);
    }
}

void Sweep__ConnectLeftDegenerate(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin())->VertEq(vEvent))
    {
        __this->SpliceMergeVertices(e, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge());
        return;
    }

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Destination())->VertEq(vEvent))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge(false);
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), e);
        __this->SweepEvent(vEvent);
        return;
    }

    regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopRight();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = regUp->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopRight = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Sym();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopRight)->OriginNext();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast = eTopLeft;

    if (reg->fixUpperEdge())
    {
        __this->DeleteRegion(reg);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eTopRight);
        eTopRight = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->OriginPrev();
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge(), eTopRight);

    if (!::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->GoesLeft())
    {
        eTopLeft = NULL;
    }

    __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopRight)->OriginNext(), eLast, eTopLeft, true);
}

void Sweep__SpliceMergeVertices(Sweep* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(e1, e2);
}

void Sweep__ConnectRightVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
    bool degenerate = false;

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())
    {
        __this->CheckForIntersect(regUp);
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertEq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eTopLeft)->OriginPrev(), eUp);
        regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopLeft();

        if (regUp == NULL)
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
        }

        eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge();
        __this->FinishLeftRegions(regUp->Below(), regLo);
        degenerate = true;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())->VertEq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eBottomLeft, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev());
        eBottomLeft = __this->FinishLeftRegions(regLo, NULL);
        degenerate = true;
    }

    if (degenerate)
    {
        __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        return;
    }

    ::app::Fuse::Drawing::Tesselation::HalfEdge* tmp = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) ? ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev() : eUp;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eNew = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eBottomLeft)->LeftPrev(), tmp);
    __this->AddRightEdges(regUp, eNew, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->OriginNext(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew)->OriginNext(), false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNew->Sym())->ActiveRegion())->fixUpperEdge(true);
    __this->WalkDirtyRegions(regUp);
}

void Sweep__WalkDirtyRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();

    while (true)
    {
        while (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty())
        {
            regUp = regLo;
            regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Below();
        }

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty())
        {
            regLo = regUp;
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above();

            if ((regUp == NULL) || !regUp->IsDirty())
            {
                return;
            }
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(false);
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination())
        {
            if (__this->CheckForLeftSplice(regUp))
            {
                if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->fixUpperEdge())
                {
                    __this->DeleteRegion(regLo);
                    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eLo);
                    regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
                    eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
                }
                else if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge())
                {
                    __this->DeleteRegion(regUp);
                    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eUp);
                    regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Above();
                    eUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->UpperEdge();
                }
            }
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())
        {
            if ((((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()) && !::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->fixUpperEdge()) && !::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->fixUpperEdge()) && ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() == __this->_event) || (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination() == __this->_event)))
            {
                if (__this->CheckForIntersect(regUp))
                {
                    return;
                }
            }
            else
            {
                __this->CheckForRightSplice(regUp);
            }
        }

        if ((::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) && (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()))
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, eLo, eUp);
            __this->DeleteRegion(regUp);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(eUp);
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->Above();
        }
    }
}

bool Sweep__CheckForIntersect(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    bool ind_125 = bool();
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::Vertex* orgUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin();
    ::app::Fuse::Drawing::Tesselation::Vertex* orgLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin();
    ::app::Fuse::Drawing::Tesselation::Vertex* dstUp = eUp->Destination();
    ::app::Fuse::Drawing::Tesselation::Vertex* dstLo = eLo->Destination();

    if (orgUp == orgLo)
    {
        return false;
    }

    double tMinUp = ::app::Uno::Math__Min(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgUp)->T, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(dstUp)->T);
    double tMaxLo = ::app::Uno::Math__Max(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgLo)->T, ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(dstLo)->T);

    if (tMinUp > tMaxLo)
    {
        return false;
    }

    if (orgUp->VertLeq(orgLo))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, orgUp, orgLo) > 0.0f)
        {
            return false;
        }
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, orgLo, orgUp) < 0.0f)
        {
            return false;
        }
    }

    ::app::Fuse::Drawing::Tesselation::Vertex* isect = ::app::Fuse::Drawing::Tesselation::Geom__Intersect(NULL, dstUp, orgUp, dstLo, orgLo);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertLeq(__this->_event))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
        isect->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
    }

    ::app::Fuse::Drawing::Tesselation::Vertex* orgMin = orgUp->VertLeq(orgLo) ? orgUp : orgLo;

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgMin)->VertLeq(isect))
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(orgMin)->S;
        isect->T = orgMin->T;
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertEq(orgUp) || ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->VertEq(orgLo))
    {
        __this->CheckForRightSplice(regUp);
        return false;
    }

    if ((!dstUp->VertEq(__this->_event) && (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, __this->_event, isect) >= 0.0f)) || (!dstLo->VertEq(__this->_event) && (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, __this->_event, isect) <= 0.0f)))
    {
        if (dstLo == __this->_event)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym(), eUp);
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopLeft();

            if (regUp == NULL)
            {
                U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("longjmp(tess.env, 1);")));
            }

            eUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge();
            __this->FinishLeftRegions(regUp->Below(), regLo);
            __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->OriginPrev(), eUp, eUp, true);
            return true;
        }

        if (dstUp == __this->_event)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext(), eLo->OriginPrev());
            regLo = regUp;
            regUp = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->TopRight();
            ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp->Below())->UpperEdge())->RightPrev();
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge(eLo->OriginPrev());
            eLo = __this->FinishLeftRegions(regLo, NULL);
            __this->AddRightEdges(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginNext(), eUp->RightPrev(), e, true);
            return true;
        }

        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstUp, __this->_event, isect) >= 0.0f)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
        }

        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, dstLo, __this->_event, isect) <= 0.0f)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eLo->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->S;
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eLo->Origin())->T = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_event)->T;
        }

        return false;
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eLo->OriginPrev(), eUp);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->S = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(isect)->S;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(eUp->Origin())->T = isect->T;
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Enqueue(eUp->Origin());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((ind_125 = (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true), ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(ind_125), ind_125));
    return false;
}

void Sweep__AddRightEdges(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp)
{
    bool firstTime = true;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* re = eFirst;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->AddRegionBelow(regUp, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(re)->Sym());
        re = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(re)->OriginNext();
    }
    while (re != eLast);

    if (eTopLeft == NULL)
    {
        eTopLeft = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below())->UpperEdge())->RightPrev();
    }

    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = NULL;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = NULL;
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regUp;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* ePrev = eTopLeft;

    for (; ; )
    {
        reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->Below();
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Sym();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Origin())
        {
            break;
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext() != ePrev)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginPrev(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->OriginPrev(), e);
        }

        reg->WindingNumber(regPrev->WindingNumber() - ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Winding());
        reg->IsInside(::uPtr< ::uDelegate*>(__this->_isWindingInside)->Invoke< bool, int>(reg->WindingNumber()));
        regPrev->IsDirty(true);

        if (!firstTime && __this->CheckForRightSplice(regPrev))
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge__AddWinding(NULL, e, ePrev);
            __this->DeleteRegion(regPrev);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(ePrev);
        }

        firstTime = false;
        regPrev = reg;
        ePrev = e;
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->IsDirty(true);

    if (cleanUp)
    {
        __this->WalkDirtyRegions(regPrev);
    }
}

bool Sweep__CheckForRightSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) > 0.0f)
        {
            return false;
        }

        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->VertEq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()))
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(eUp, eLo->OriginPrev());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
        }
        else if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin())
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*>(__this->_pq)->Remove(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin())->QueueHandle());
            __this->SpliceMergeVertices(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev(), eUp);
        }
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) < 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->SplitEdge(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Sym());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->OriginPrev(), eUp);
    }

    return true;
}

bool Sweep__CheckForLeftSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Below();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eLo = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->UpperEdge();

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination()))
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Origin()) < 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->Above())->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty(true), true));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Split();
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Sym(), e);
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left())->IsInside(regUp->IsInside());
    }
    else
    {
        if (::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Origin()) > 0.0f)
        {
            return false;
        }

        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regUp)->IsDirty((::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regLo)->IsDirty(true), true));
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eLo)->Split();
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eUp)->LeftNext(), eLo->Sym());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Right())->IsInside(regUp->IsInside());
    }

    return true;
}

void Sweep__ComputeWinding(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->WindingNumber(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Above())->WindingNumber() + ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->Winding());
    reg->IsInside(::uPtr< ::uDelegate*>(__this->_isWindingInside)->Invoke< bool, int>(reg->WindingNumber()));
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Sweep__FinishLeftRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regFirst;
    ::app::Fuse::Drawing::Tesselation::HalfEdge* ePrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regFirst)->UpperEdge();

    while (regPrev != regLast)
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regPrev)->fixUpperEdge(false);
        ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg = regPrev->Below();
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin() != ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Origin())
        {
            if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
            {
                __this->FinishRegion(regPrev);
                break;
            }

            e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->LeftPrev(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Sym());
            ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->FixUpperEdge(e);
        }

        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->OriginNext() != e)
        {
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginPrev(), e);
            ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Splice(ePrev, e);
        }

        __this->FinishRegion(regPrev);
        ePrev = reg->UpperEdge();
        regPrev = reg;
    }

    return ePrev;
}

void Sweep__FinishRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::Face* f = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(f)->IsInside(reg->IsInside());
    f->AnEdge(e);
    __this->DeleteRegion(reg);
}

void Sweep__DoneEdgeDict(Sweep* __this)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg;

    while ((reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Min())->Key()) != NULL)
    {
        if (!::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Sentinel())
        {
        }

        __this->DeleteRegion(reg);
    }
}

void Sweep__DeleteRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
    {
    }

    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->ActiveRegion(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*>(__this->_dict)->Delete(reg->UpperEdgeDictNode());
}

void Sweep___ObjInit(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule)
{
    __this->_mesh = mesh;
    __this->_isWindingInside = windingRule;
    __this->_dict = ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict__New_1(NULL, __this, __this->_mesh);
    __this->_pq = ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue__New_1(NULL);
}

Sweep* Sweep__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule)
{
    Sweep* inst = (::app::Fuse::Drawing::Tesselation::Sweep*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Sweep), ::app::Fuse::Drawing::Tesselation::Sweep__typeof());
    inst->_ObjInit(mesh, windingRule);
    return inst;
}

}}}}
