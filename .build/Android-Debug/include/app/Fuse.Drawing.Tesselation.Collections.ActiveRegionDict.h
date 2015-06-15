// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_ACTIVE_REGION_DICT_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_ACTIVE_REGION_DICT_H__

#include <app/Fuse.Drawing.Tesselation.Collections.Dict__Fuse_Drawing_Tessela-a8ad233a.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Sweep; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct ActiveRegionDict;

struct ActiveRegionDict__uType : ::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType
{
};

ActiveRegionDict__uType* ActiveRegionDict__typeof();

void ActiveRegionDict__CheckInvariants(ActiveRegionDict* __this);
bool ActiveRegionDict__Leq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg2);
bool ActiveRegionDict__EdgeLeq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2);
::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__AddRegionBelow(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewUp);
::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__GetRegionContaining(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent);
void ActiveRegionDict___ObjInit_1(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh);
ActiveRegionDict* ActiveRegionDict__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh);

struct ActiveRegionDict : ::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion
{
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Sweep*> _sweep;

    void CheckInvariants() { ActiveRegionDict__CheckInvariants(this); }
    bool EdgeLeq(::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2) { return ActiveRegionDict__EdgeLeq(this, e1, e2); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* AddRegionBelow(::app::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewUp) { return ActiveRegionDict__AddRegionBelow(this, regAbove, eNewUp); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* GetRegionContaining(::app::Fuse::Drawing::Tesselation::Vertex* vEvent) { return ActiveRegionDict__GetRegionContaining(this, vEvent); }
    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh) { ActiveRegionDict___ObjInit_1(this, sweep, mesh); }
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

}}}}}


#endif
