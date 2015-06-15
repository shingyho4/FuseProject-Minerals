// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_HALF_EDGE_H__
#define __APP_FUSE_DRAWING_TESSELATION_HALF_EDGE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct HalfEdge;

struct HalfEdge__uType : ::uClassType
{
};

HalfEdge__uType* HalfEdge__typeof();

::app::Fuse::Drawing::Tesselation::ActiveRegion* HalfEdge__get_ActiveRegion(HalfEdge* __this);
void HalfEdge__set_ActiveRegion(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value);
HalfEdge* HalfEdge__get_Next(HalfEdge* __this);
void HalfEdge__set_Next(HalfEdge* __this, HalfEdge* value);
int HalfEdge__get_Winding(HalfEdge* __this);
void HalfEdge__set_Winding(HalfEdge* __this, int value);
HalfEdge* HalfEdge__get_Sym(HalfEdge* __this);
void HalfEdge__set_Sym(HalfEdge* __this, HalfEdge* value);
::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Origin(HalfEdge* __this);
void HalfEdge__set_Origin(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value);
HalfEdge* HalfEdge__get_OriginNext(HalfEdge* __this);
void HalfEdge__set_OriginNext(HalfEdge* __this, HalfEdge* value);
HalfEdge* HalfEdge__get_OriginPrev(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Left(HalfEdge* __this);
void HalfEdge__set_Left(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value);
HalfEdge* HalfEdge__get_LeftNext(HalfEdge* __this);
void HalfEdge__set_LeftNext(HalfEdge* __this, HalfEdge* value);
HalfEdge* HalfEdge__get_LeftPrev(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Face* HalfEdge__get_Right(HalfEdge* __this);
void HalfEdge__set_Right(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Face* value);
HalfEdge* HalfEdge__get_RightPrev(HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::Vertex* HalfEdge__get_Destination(HalfEdge* __this);
void HalfEdge__set_Destination(HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::Vertex* value);
HalfEdge* HalfEdge__get_DestinationNext(HalfEdge* __this);
bool HalfEdge__get_GoesLeft(HalfEdge* __this);
bool HalfEdge__get_GoesRight(HalfEdge* __this);
bool HalfEdge__get_IsBoundaryEdge(HalfEdge* __this);
HalfEdge* HalfEdge__Split(HalfEdge* __this);
HalfEdge* HalfEdge__AddEdgeVertex(HalfEdge* __this);
void HalfEdge__AddWinding(::uStatic* __this, HalfEdge* eDst, HalfEdge* eSrc);
HalfEdge* HalfEdge__MakeEdge(::uStatic* __this, HalfEdge* eNext);
void HalfEdge__ExchangeOriginNextAkaSplice(::uStatic* __this, HalfEdge* a, HalfEdge* b);
void HalfEdge__KillEdge(::uStatic* __this, HalfEdge* eDel);
::uString* HalfEdge__ToString(HalfEdge* __this);
void HalfEdge___ObjInit(HalfEdge* __this, bool isFirst);
HalfEdge* HalfEdge__New_1(::uStatic* __this, bool isFirst);

struct HalfEdge : ::uObject
{
    bool _isFirst;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::ActiveRegion*> _ActiveRegion;
    ::uStrong< HalfEdge*> _Next;
    int _Winding;
    ::uStrong< HalfEdge*> _Sym;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _Origin;
    ::uStrong< HalfEdge*> _OriginNext;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _Left;
    ::uStrong< HalfEdge*> _LeftNext;

    HalfEdge* Split() { return HalfEdge__Split(this); }
    HalfEdge* AddEdgeVertex() { return HalfEdge__AddEdgeVertex(this); }
    void _ObjInit(bool isFirst) { HalfEdge___ObjInit(this, isFirst); }
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegion() { return HalfEdge__get_ActiveRegion(this); }
    void ActiveRegion(::app::Fuse::Drawing::Tesselation::ActiveRegion* value) { HalfEdge__set_ActiveRegion(this, value); }
    HalfEdge* Next() { return HalfEdge__get_Next(this); }
    void Next(HalfEdge* value) { HalfEdge__set_Next(this, value); }
    int Winding() { return HalfEdge__get_Winding(this); }
    void Winding(int value) { HalfEdge__set_Winding(this, value); }
    HalfEdge* Sym() { return HalfEdge__get_Sym(this); }
    void Sym(HalfEdge* value) { HalfEdge__set_Sym(this, value); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Origin() { return HalfEdge__get_Origin(this); }
    void Origin(::app::Fuse::Drawing::Tesselation::Vertex* value) { HalfEdge__set_Origin(this, value); }
    HalfEdge* OriginNext() { return HalfEdge__get_OriginNext(this); }
    void OriginNext(HalfEdge* value) { HalfEdge__set_OriginNext(this, value); }
    HalfEdge* OriginPrev() { return HalfEdge__get_OriginPrev(this); }
    ::app::Fuse::Drawing::Tesselation::Face* Left() { return HalfEdge__get_Left(this); }
    void Left(::app::Fuse::Drawing::Tesselation::Face* value) { HalfEdge__set_Left(this, value); }
    HalfEdge* LeftNext() { return HalfEdge__get_LeftNext(this); }
    void LeftNext(HalfEdge* value) { HalfEdge__set_LeftNext(this, value); }
    HalfEdge* LeftPrev() { return HalfEdge__get_LeftPrev(this); }
    ::app::Fuse::Drawing::Tesselation::Face* Right() { return HalfEdge__get_Right(this); }
    void Right(::app::Fuse::Drawing::Tesselation::Face* value) { HalfEdge__set_Right(this, value); }
    HalfEdge* RightPrev() { return HalfEdge__get_RightPrev(this); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Destination() { return HalfEdge__get_Destination(this); }
    void Destination(::app::Fuse::Drawing::Tesselation::Vertex* value) { HalfEdge__set_Destination(this, value); }
    HalfEdge* DestinationNext() { return HalfEdge__get_DestinationNext(this); }
    bool GoesLeft() { return HalfEdge__get_GoesLeft(this); }
    bool GoesRight() { return HalfEdge__get_GoesRight(this); }
    bool IsBoundaryEdge() { return HalfEdge__get_IsBoundaryEdge(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

}}}}


#endif
