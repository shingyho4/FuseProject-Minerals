// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_SWEEP_H__
#define __APP_FUSE_DRAWING_TESSELATION_SWEEP_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct ActiveRegionDict; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct VertexQueue; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Sweep;

struct Sweep__uType : ::uClassType
{
};

Sweep__uType* Sweep__typeof();

::app::Fuse::Drawing::Tesselation::Vertex* Sweep__get_Event(Sweep* __this);
void Sweep__ComputeInterior(Sweep* __this);
void Sweep__RemoveDegenerateEdges(Sweep* __this);
void Sweep__RemoveDegenerateFaces(Sweep* __this);
void Sweep__InitPriorityQ(Sweep* __this);
void Sweep__InitEdgeDict(Sweep* __this);
void Sweep__AddSentinel(Sweep* __this, float t);
void Sweep__SweepEvent(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
bool Sweep__HasActiveRegion(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e);
void Sweep__ConnectLeftVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__ConnectLeftDegenerate(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__SpliceMergeVertices(Sweep* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2);
void Sweep__ConnectRightVertex(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft);
void Sweep__WalkDirtyRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
bool Sweep__CheckForIntersect(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
void Sweep__AddRightEdges(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp);
bool Sweep__CheckForRightSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
bool Sweep__CheckForLeftSplice(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
void Sweep__ComputeWinding(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
::app::Fuse::Drawing::Tesselation::HalfEdge* Sweep__FinishLeftRegions(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast);
void Sweep__FinishRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__DoneEdgeDict(Sweep* __this);
void Sweep__DeleteRegion(Sweep* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep___ObjInit(Sweep* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule);
Sweep* Sweep__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule);

struct Sweep : ::uObject
{
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uStrong< ::uDelegate*> _isWindingInside;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*> _dict;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*> _pq;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _event;

    void ComputeInterior() { Sweep__ComputeInterior(this); }
    void RemoveDegenerateEdges() { Sweep__RemoveDegenerateEdges(this); }
    void RemoveDegenerateFaces() { Sweep__RemoveDegenerateFaces(this); }
    void InitPriorityQ() { Sweep__InitPriorityQ(this); }
    void InitEdgeDict() { Sweep__InitEdgeDict(this); }
    void AddSentinel(float t) { Sweep__AddSentinel(this, t); }
    void SweepEvent(::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__SweepEvent(this, vEvent); }
    void ConnectLeftVertex(::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__ConnectLeftVertex(this, vEvent); }
    void ConnectLeftDegenerate(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { Sweep__ConnectLeftDegenerate(this, regUp, vEvent); }
    void SpliceMergeVertices(::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2) { Sweep__SpliceMergeVertices(this, e1, e2); }
    void ConnectRightVertex(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft) { Sweep__ConnectRightVertex(this, regUp, eBottomLeft); }
    void WalkDirtyRegions(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { Sweep__WalkDirtyRegions(this, regUp); }
    bool CheckForIntersect(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForIntersect(this, regUp); }
    void AddRightEdges(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::app::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::app::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::app::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp) { Sweep__AddRightEdges(this, regUp, eFirst, eLast, eTopLeft, cleanUp); }
    bool CheckForRightSplice(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForRightSplice(this, regUp); }
    bool CheckForLeftSplice(::app::Fuse::Drawing::Tesselation::ActiveRegion* regUp) { return Sweep__CheckForLeftSplice(this, regUp); }
    void ComputeWinding(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__ComputeWinding(this, reg); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* FinishLeftRegions(::app::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regLast) { return Sweep__FinishLeftRegions(this, regFirst, regLast); }
    void FinishRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__FinishRegion(this, reg); }
    void DoneEdgeDict() { Sweep__DoneEdgeDict(this); }
    void DeleteRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* reg) { Sweep__DeleteRegion(this, reg); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::uDelegate* windingRule) { Sweep___ObjInit(this, mesh, windingRule); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Event() { return Sweep__get_Event(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

}}}}


#endif
