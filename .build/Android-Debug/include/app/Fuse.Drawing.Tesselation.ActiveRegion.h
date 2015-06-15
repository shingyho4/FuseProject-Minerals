// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_ACTIVE_REGION_H__
#define __APP_FUSE_DRAWING_TESSELATION_ACTIVE_REGION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct ActiveRegion;

struct ActiveRegion__uType : ::uClassType
{
};

ActiveRegion__uType* ActiveRegion__typeof();

::app::Fuse::Drawing::Tesselation::HalfEdge* ActiveRegion__get_UpperEdge(ActiveRegion* __this);
void ActiveRegion__set_UpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value);
bool ActiveRegion__get_Sentinel(ActiveRegion* __this);
void ActiveRegion__set_Sentinel(ActiveRegion* __this, bool value);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* ActiveRegion__get_UpperEdgeDictNode(ActiveRegion* __this);
void ActiveRegion__set_UpperEdgeDictNode(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value);
int ActiveRegion__get_WindingNumber(ActiveRegion* __this);
void ActiveRegion__set_WindingNumber(ActiveRegion* __this, int value);
bool ActiveRegion__get_IsInside(ActiveRegion* __this);
void ActiveRegion__set_IsInside(ActiveRegion* __this, bool value);
bool ActiveRegion__get_IsDirty(ActiveRegion* __this);
void ActiveRegion__set_IsDirty(ActiveRegion* __this, bool value);
bool ActiveRegion__get_fixUpperEdge(ActiveRegion* __this);
void ActiveRegion__set_fixUpperEdge(ActiveRegion* __this, bool value);
ActiveRegion* ActiveRegion__get_TopLeft(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_TopRight(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_Below(ActiveRegion* __this);
ActiveRegion* ActiveRegion__get_Above(ActiveRegion* __this);
void ActiveRegion__FixUpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge);
::uString* ActiveRegion__ToString(ActiveRegion* __this);
void ActiveRegion___ObjInit(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);
ActiveRegion* ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);

struct ActiveRegion : ::uObject
{
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _upperEdge;
    ::uWeak< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _upperEdgeDictNode;
    bool _Sentinel;
    int _WindingNumber;
    bool _IsInside;
    bool _IsDirty;
    bool _fixUpperEdge;

    void FixUpperEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge) { ActiveRegion__FixUpperEdge(this, newEdge); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel) { ActiveRegion___ObjInit(this, mesh, upperEdge, sentinel); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* UpperEdge() { return ActiveRegion__get_UpperEdge(this); }
    void UpperEdge(::app::Fuse::Drawing::Tesselation::HalfEdge* value) { ActiveRegion__set_UpperEdge(this, value); }
    bool Sentinel() { return ActiveRegion__get_Sentinel(this); }
    void Sentinel(bool value) { ActiveRegion__set_Sentinel(this, value); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* UpperEdgeDictNode() { return ActiveRegion__get_UpperEdgeDictNode(this); }
    void UpperEdgeDictNode(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value) { ActiveRegion__set_UpperEdgeDictNode(this, value); }
    int WindingNumber() { return ActiveRegion__get_WindingNumber(this); }
    void WindingNumber(int value) { ActiveRegion__set_WindingNumber(this, value); }
    bool IsInside() { return ActiveRegion__get_IsInside(this); }
    void IsInside(bool value) { ActiveRegion__set_IsInside(this, value); }
    bool IsDirty() { return ActiveRegion__get_IsDirty(this); }
    void IsDirty(bool value) { ActiveRegion__set_IsDirty(this, value); }
    bool fixUpperEdge() { return ActiveRegion__get_fixUpperEdge(this); }
    void fixUpperEdge(bool value) { ActiveRegion__set_fixUpperEdge(this, value); }
    ActiveRegion* TopLeft() { return ActiveRegion__get_TopLeft(this); }
    ActiveRegion* TopRight() { return ActiveRegion__get_TopRight(this); }
    ActiveRegion* Below() { return ActiveRegion__get_Below(this); }
    ActiveRegion* Above() { return ActiveRegion__get_Above(this); }
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
