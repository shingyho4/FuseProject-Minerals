// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

Face__uType* Face__typeof()
{
    static Face__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Face__uType*)::uAllocClassType(sizeof(Face__uType), "Fuse.Drawing.Tesselation.Face", ::uObject__typeof(), 0, 1, 2);
        type->StrongRefOffsets[0] = offsetof(Face, _Next);
        type->WeakRefOffsets[0] = offsetof(Face, _prev);
        type->WeakRefOffsets[1] = offsetof(Face, _anEdge);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Next";
        type->WeakRefNames[0] = "_prev";
        type->WeakRefNames[1] = "_anEdge";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Face* Face__get_Next(Face* __this)
{
    return __this->_Next;
}

void Face__set_Next(Face* __this, Face* value)
{
    __this->_Next = value;
}

Face* Face__get_Prev(Face* __this)
{
    return __this->_prev;
}

void Face__set_Prev(Face* __this, Face* value)
{
    __this->_prev = value;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Face__get_AnEdge(Face* __this)
{
    return __this->_anEdge;
}

void Face__set_AnEdge(Face* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_anEdge = value;
}

::uObject* Face__get_EdgeLoop(Face* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable__New_1(NULL, __this->AnEdge());
}

bool Face__get_IsInside(Face* __this)
{
    return __this->_IsInside;
}

void Face__set_IsInside(Face* __this, bool value)
{
    __this->_IsInside = value;
}

::app::Fuse::Drawing::Contour* Face__ToContour(Face* __this)
{
    return ::app::Fuse::Drawing::Contour__New_2(NULL, true, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(NULL, __this->EdgeLoop(), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof(), (const void*)::app::Fuse::Drawing::Tesselation::Face__Coords)));
}

::app::Uno::Float2 Face__Coords(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->Origin())->Coords();
}

Face* Face__MakeFace(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext)
{
    Face* fNew = Face__New_1(NULL);
    Face* fPrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fNext)->Prev();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fNew)->Prev(fPrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fPrev)->Next(fNew);
    fNew->Next(fNext);
    fNext->Prev(fNew);
    fNew->AnEdge(eOrig);
    fNew->IsInside(fNext->IsInside());
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left(fNew);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
    }
    while (e != eOrig);

    return fNew;
}

void Face__KillFace(::uStatic* __this, Face* fDel, Face* newLface)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eStart = ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fDel)->AnEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Left(newLface);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
    }
    while (e != eStart);

    Face* fPrev = fDel->Prev();
    Face* fNext = fDel->Next();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fNext)->Prev(fPrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(fPrev)->Next(fNext);
}

void Face___ObjInit(Face* __this)
{
}

Face* Face__New_1(::uStatic* __this)
{
    Face* inst = (::app::Fuse::Drawing::Tesselation::Face*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Face), ::app::Fuse::Drawing::Tesselation::Face__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
