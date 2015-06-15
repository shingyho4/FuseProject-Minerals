// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_VERTEX_H__
#define __APP_FUSE_DRAWING_TESSELATION_VERTEX_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Vertex;

struct Vertex__uType : ::uClassType
{
};

Vertex__uType* Vertex__typeof();

Vertex* Vertex__get_Next(Vertex* __this);
void Vertex__set_Next(Vertex* __this, Vertex* value);
Vertex* Vertex__get_Prev(Vertex* __this);
void Vertex__set_Prev(Vertex* __this, Vertex* value);
::app::Fuse::Drawing::Tesselation::HalfEdge* Vertex__get_AnEdge(Vertex* __this);
void Vertex__set_AnEdge(Vertex* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value);
::uObject* Vertex__get_OutgoingEdges(Vertex* __this);
::app::Uno::Float2 Vertex__get_Coords(Vertex* __this);
Vertex* Vertex__get_QueueHandle(Vertex* __this);
bool Vertex__VertEq(Vertex* __this, Vertex* v);
bool Vertex__VertLeq(Vertex* __this, Vertex* v);
Vertex* Vertex__MakeVertex(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext);
void Vertex__KillVertex(::uStatic* __this, Vertex* vDel, Vertex* newOrg);
::uString* Vertex__ToString(Vertex* __this);
void Vertex___ObjInit(Vertex* __this);
Vertex* Vertex__New_1(::uStatic* __this);

struct Vertex : ::uObject
{
    ::uWeak< Vertex*> _prev;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _anEdge;
    double S;
    double T;
    ::uStrong< Vertex*> _Next;

    bool VertEq(Vertex* v) { return Vertex__VertEq(this, v); }
    bool VertLeq(Vertex* v) { return Vertex__VertLeq(this, v); }
    void _ObjInit() { Vertex___ObjInit(this); }
    Vertex* Next() { return Vertex__get_Next(this); }
    void Next(Vertex* value) { Vertex__set_Next(this, value); }
    Vertex* Prev() { return Vertex__get_Prev(this); }
    void Prev(Vertex* value) { Vertex__set_Prev(this, value); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* AnEdge() { return Vertex__get_AnEdge(this); }
    void AnEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* value) { Vertex__set_AnEdge(this, value); }
    ::uObject* OutgoingEdges() { return Vertex__get_OutgoingEdges(this); }
    ::app::Uno::Float2 Coords();
    Vertex* QueueHandle() { return Vertex__get_QueueHandle(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

inline ::app::Uno::Float2 Vertex::Coords() { return Vertex__get_Coords(this); }

}}}}


#endif
