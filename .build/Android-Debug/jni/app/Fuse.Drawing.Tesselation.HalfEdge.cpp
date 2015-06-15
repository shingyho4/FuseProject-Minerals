// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

HalfEdge__uType* HalfEdge__typeof()
{
    static HalfEdge__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HalfEdge__uType*)::uAllocClassType(sizeof(HalfEdge__uType), "Fuse.Drawing.Tesselation.HalfEdge", ::uObject__typeof(), 0, 7);
        type->__fp_ToString = (::uString*(*)(::uObject*))HalfEdge__ToString;

        type->StrongRefOffsets[0] = offsetof(HalfEdge, _ActiveRegion);
        type->StrongRefOffsets[1] = offsetof(HalfEdge, _Next);
        type->StrongRefOffsets[2] = offsetof(HalfEdge, _Sym);
        type->StrongRefOffsets[3] = offsetof(HalfEdge, _Origin);
        type->StrongRefOffsets[4] = offsetof(HalfEdge, _OriginNext);
        type->StrongRefOffsets[5] = offsetof(HalfEdge, _Left);
        type->StrongRefOffsets[6] = offsetof(HalfEdge, _LeftNext);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_ActiveRegion";
        type->StrongRefNames[1] = "_Next";
        type->StrongRefNames[2] = "_Sym";
        type->StrongRefNames[3] = "_Origin";
        type->StrongRefNames[4] = "_OriginNext";
        type->StrongRefNames[5] = "_Left";
        type->StrongRefNames[6] = "_LeftNext";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* HalfEdge__get_ActiveRegion(HalfEdge* __this)
{
    return __this->_ActiveRegion;
}

void HalfEdge__set_ActiveRegion(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    __this->_ActiveRegion = value;
}

HalfEdge* HalfEdge__get_Next(HalfEdge* __this)
{
    return __this->_Next;
}

void HalfEdge__set_Next(HalfEdge* __this, HalfEdge* value)
{
    __this->_Next = value;
}

int HalfEdge__get_Winding(HalfEdge* __this)
{
    return __this->_Winding;
}

void HalfEdge__set_Winding(HalfEdge* __this, int value)
{
    __this->_Winding = value;
}

HalfEdge* HalfEdge__get_Sym(HalfEdge* __this)
{
    return __this->_Sym;
}

void HalfEdge__set_Sym(HalfEdge* __this, HalfEdge* value)
{
    __this->_Sym = value;
}

::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Origin(HalfEdge* __this)
{
    return __this->_Origin;
}

void HalfEdge__set_Origin(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value)
{
    __this->_Origin = value;
}

HalfEdge* HalfEdge__get_OriginNext(HalfEdge* __this)
{
    return __this->_OriginNext;
}

void HalfEdge__set_OriginNext(HalfEdge* __this, HalfEdge* value)
{
    __this->_OriginNext = value;
}

HalfEdge* HalfEdge__get_OriginPrev(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->LeftNext();
}

::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Left(HalfEdge* __this)
{
    return __this->_Left;
}

void HalfEdge__set_Left(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value)
{
    __this->_Left = value;
}

HalfEdge* HalfEdge__get_LeftNext(HalfEdge* __this)
{
    return __this->_LeftNext;
}

void HalfEdge__set_LeftNext(HalfEdge* __this, HalfEdge* value)
{
    __this->_LeftNext = value;
}

HalfEdge* HalfEdge__get_LeftPrev(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->OriginNext())->Sym();
}

::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Right(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->Left();
}

void HalfEdge__set_Right(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->Left(value);
}

HalfEdge* HalfEdge__get_RightPrev(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->OriginNext();
}

::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Destination(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->Origin();
}

void HalfEdge__set_Destination(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->Origin(value);
}

HalfEdge* HalfEdge__get_DestinationNext(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->RightPrev())->Sym();
}

bool HalfEdge__get_GoesLeft(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->Destination())->VertLeq(__this->Origin());
}

bool HalfEdge__get_GoesRight(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->Origin())->VertLeq(__this->Destination());
}

bool HalfEdge__get_IsBoundaryEdge(HalfEdge* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->Right())->IsInside() != ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(__this->Left())->IsInside();
}

HalfEdge* HalfEdge__Split(HalfEdge* __this)
{
    HalfEdge* tempHalfEdge = __this->AddEdgeVertex();
    HalfEdge* newEdge = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(tempHalfEdge)->Sym();
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, __this->Sym(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->OriginPrev());
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, __this->Sym(), newEdge);
    __this->Destination(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(newEdge)->Origin());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(newEdge->Destination())->AnEdge(newEdge->Sym());
    newEdge->Right(__this->Right());
    newEdge->Winding(__this->Winding());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(newEdge->Sym())->Winding(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->Sym())->Winding());
    return newEdge;
}

HalfEdge* HalfEdge__AddEdgeVertex(HalfEdge* __this)
{
    ::app::Fuse::Drawing::Tesselation::Face* ind_123;
    HalfEdge* newEdge = HalfEdge__MakeEdge(NULL, __this);
    HalfEdge* eNewSym = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(newEdge)->Sym();
    HalfEdge__ExchangeOriginNextAkaSplice(NULL, newEdge, __this->LeftNext());
    newEdge->Origin(__this->Destination());
    ::app::Fuse::Drawing::Tesselation::Vertex__MakeVertex(NULL, eNewSym, newEdge->Origin());
    newEdge->Left((ind_123 = __this->Left(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNewSym)->Left(ind_123), ind_123));
    return newEdge;
}

void HalfEdge__AddWinding(::uStatic* __this, HalfEdge* eDst, HalfEdge* eSrc)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Winding(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst)->Winding() + ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSrc)->Winding());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst->Sym())->Winding(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDst->Sym())->Winding() + ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSrc->Sym())->Winding());
}

HalfEdge* HalfEdge__MakeEdge(::uStatic* __this, HalfEdge* eNext)
{
    HalfEdge* e = HalfEdge__New_1(NULL, true);
    HalfEdge* eSym = HalfEdge__New_1(NULL, false);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym())->_isFirst)
    {
        eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym();
    }

    HalfEdge* ePrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym())->Next();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eSym)->Next(ePrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Sym())->Next(e);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Next(eNext);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext->Sym())->Next(eSym);
    e->Sym(eSym);
    e->OriginNext(e);
    e->LeftNext(eSym);
    e->Origin(NULL);
    e->Left(NULL);
    e->Winding(0);
    e->ActiveRegion(NULL);
    eSym->Sym(e);
    eSym->OriginNext(eSym);
    eSym->LeftNext(e);
    eSym->Origin(NULL);
    eSym->Left(NULL);
    eSym->Winding(0);
    eSym->ActiveRegion(NULL);
    return e;
}

void HalfEdge__ExchangeOriginNextAkaSplice(::uStatic* __this, HalfEdge* a, HalfEdge* b)
{
    HalfEdge* aOnext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(a)->OriginNext();
    HalfEdge* bOnext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(b)->OriginNext();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(aOnext)->Sym())->LeftNext(b);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(bOnext)->Sym())->LeftNext(a);
    a->OriginNext(bOnext);
    b->OriginNext(aOnext);
}

void HalfEdge__KillEdge(::uStatic* __this, HalfEdge* eDel)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Sym())->_isFirst)
    {
        eDel = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Sym();
    }

    HalfEdge* eNext = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel)->Next();
    HalfEdge* ePrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->Next();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNext)->Sym())->Next(ePrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(ePrev)->Sym())->Next(eNext);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->Sym(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->Next(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->Origin(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->OriginNext(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->Left(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eDel->Sym())->LeftNext(NULL);
    eDel->Sym(NULL);
    eDel->Next(NULL);
    eDel->Origin(NULL);
    eDel->OriginNext(NULL);
    eDel->Left(NULL);
    eDel->LeftNext(NULL);
}

::uString* HalfEdge__ToString(HalfEdge* __this)
{
    return __this->GoesLeft() ? ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Left edge "), (::uObject*)__this->Destination()), ::uGetConstString(" <= ")), (::uObject*)__this->Origin()) : ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Right edge "), (::uObject*)__this->Origin()), ::uGetConstString(" => ")), (::uObject*)__this->Destination());
}

void HalfEdge___ObjInit(HalfEdge* __this, bool isFirst)
{
    __this->_isFirst = isFirst;
}

HalfEdge* HalfEdge__New_1(::uStatic* __this, bool isFirst)
{
    HalfEdge* inst = (::app::Fuse::Drawing::Tesselation::HalfEdge*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::HalfEdge), ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof());
    inst->_ObjInit(isFirst);
    return inst;
}

}}}}
