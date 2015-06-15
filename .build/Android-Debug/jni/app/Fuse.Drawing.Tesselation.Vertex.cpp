// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.OriginEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

Vertex__uType* Vertex__typeof()
{
    static Vertex__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Vertex__uType*)::uAllocClassType(sizeof(Vertex__uType), "Fuse.Drawing.Tesselation.Vertex", ::uObject__typeof(), 0, 1, 2);
        type->__fp_ToString = (::uString*(*)(::uObject*))Vertex__ToString;

        type->StrongRefOffsets[0] = offsetof(Vertex, _Next);
        type->WeakRefOffsets[0] = offsetof(Vertex, _prev);
        type->WeakRefOffsets[1] = offsetof(Vertex, _anEdge);
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

Vertex* Vertex__get_Next(Vertex* __this)
{
    return __this->_Next;
}

void Vertex__set_Next(Vertex* __this, Vertex* value)
{
    __this->_Next = value;
}

Vertex* Vertex__get_Prev(Vertex* __this)
{
    return __this->_prev;
}

void Vertex__set_Prev(Vertex* __this, Vertex* value)
{
    __this->_prev = value;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* Vertex__get_AnEdge(Vertex* __this)
{
    return __this->_anEdge;
}

void Vertex__set_AnEdge(Vertex* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_anEdge = value;
}

::uObject* Vertex__get_OutgoingEdges(Vertex* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::OriginEnumerable__New_1(NULL, __this->AnEdge());
}

::app::Uno::Float2 Vertex__get_Coords(Vertex* __this)
{
    return ::app::Uno::Float2__New_2(NULL, (float)__this->S, (float)__this->T);
}

Vertex* Vertex__get_QueueHandle(Vertex* __this)
{
    return __this;
}

bool Vertex__VertEq(Vertex* __this, Vertex* v)
{
    return (__this->S == ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S) && (__this->T == ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T);
}

bool Vertex__VertLeq(Vertex* __this, Vertex* v)
{
    return (__this->S < ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S) || ((__this->S == ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->S) && (__this->T <= ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->T));
}

Vertex* Vertex__MakeVertex(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext)
{
    Vertex* vNew = Vertex__New_1(NULL);
    Vertex* vPrev = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->Prev();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNew)->Prev(vPrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vPrev)->Next(vNew);
    vNew->Next(vNext);
    vNext->Prev(vNew);
    vNew->AnEdge(eOrig);
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin(vNew);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext();
    }
    while (e != eOrig);

    return vNew;
}

void Vertex__KillVertex(::uStatic* __this, Vertex* vDel, Vertex* newOrg)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* eStart = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vDel)->AnEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->Origin(newOrg);
        e = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->OriginNext();
    }
    while (e != eStart);

    Vertex* vPrev = vDel->Prev();
    Vertex* vNext = vDel->Next();
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vNext)->Prev(vPrev);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vPrev)->Next(vNext);
}

::uString* Vertex__ToString(Vertex* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("["), ::uBox(::app::Uno::Double__typeof(), __this->S)), ::uGetConstString(", ")), ::uBox(::app::Uno::Double__typeof(), __this->T)), ::uGetConstString("]"));
}

void Vertex___ObjInit(Vertex* __this)
{
}

Vertex* Vertex__New_1(::uStatic* __this)
{
    Vertex* inst = (::app::Fuse::Drawing::Tesselation::Vertex*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Vertex), ::app::Fuse::Drawing::Tesselation::Vertex__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
