// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-4556c756.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

ActiveRegion__uType* ActiveRegion__typeof()
{
    static ActiveRegion__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ActiveRegion__uType*)::uAllocClassType(sizeof(ActiveRegion__uType), "Fuse.Drawing.Tesselation.ActiveRegion", ::uObject__typeof(), 0, 0, 3);
        type->__fp_ToString = (::uString*(*)(::uObject*))ActiveRegion__ToString;

        type->WeakRefOffsets[0] = offsetof(ActiveRegion, _mesh);
        type->WeakRefOffsets[1] = offsetof(ActiveRegion, _upperEdge);
        type->WeakRefOffsets[2] = offsetof(ActiveRegion, _upperEdgeDictNode);
#ifdef U_DEBUG_MEM
        type->WeakRefNames[0] = "_mesh";
        type->WeakRefNames[1] = "_upperEdge";
        type->WeakRefNames[2] = "_upperEdgeDictNode";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* ActiveRegion__get_UpperEdge(ActiveRegion* __this)
{
    return __this->_upperEdge;
}

void ActiveRegion__set_UpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->_upperEdge = value;
}

bool ActiveRegion__get_Sentinel(ActiveRegion* __this)
{
    return __this->_Sentinel;
}

void ActiveRegion__set_Sentinel(ActiveRegion* __this, bool value)
{
    __this->_Sentinel = value;
}

::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* ActiveRegion__get_UpperEdgeDictNode(ActiveRegion* __this)
{
    return __this->_upperEdgeDictNode;
}

void ActiveRegion__set_UpperEdgeDictNode(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_upperEdgeDictNode = value;
}

int ActiveRegion__get_WindingNumber(ActiveRegion* __this)
{
    return __this->_WindingNumber;
}

void ActiveRegion__set_WindingNumber(ActiveRegion* __this, int value)
{
    __this->_WindingNumber = value;
}

bool ActiveRegion__get_IsInside(ActiveRegion* __this)
{
    return __this->_IsInside;
}

void ActiveRegion__set_IsInside(ActiveRegion* __this, bool value)
{
    __this->_IsInside = value;
}

bool ActiveRegion__get_IsDirty(ActiveRegion* __this)
{
    return __this->_IsDirty;
}

void ActiveRegion__set_IsDirty(ActiveRegion* __this, bool value)
{
    __this->_IsDirty = value;
}

bool ActiveRegion__get_fixUpperEdge(ActiveRegion* __this)
{
    return __this->_fixUpperEdge;
}

void ActiveRegion__set_fixUpperEdge(ActiveRegion* __this, bool value)
{
    __this->_fixUpperEdge = value;
}

ActiveRegion* ActiveRegion__get_TopLeft(ActiveRegion* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* org = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->UpperEdge())->Origin();
    ActiveRegion* reg = __this;

    do
    {
        reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Above();
    }
    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(reg->UpperEdge())->Origin() == org);

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->fixUpperEdge())
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* e = ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->Connect(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Below())->UpperEdge())->Sym(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->UpperEdge())->LeftNext());
        reg->FixUpperEdge(e);
        reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Above();
    }

    return reg;
}

ActiveRegion* ActiveRegion__get_TopRight(ActiveRegion* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* dst = ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(__this->UpperEdge())->Destination();
    ActiveRegion* reg = __this;

    do
    {
        reg = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg)->Above();
    }
    while (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(reg->UpperEdge())->Destination() == dst);

    return reg;
}

ActiveRegion* ActiveRegion__get_Below(ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->UpperEdgeDictNode())->Prev())->Key();
}

ActiveRegion* ActiveRegion__get_Above(ActiveRegion* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->UpperEdgeDictNode())->Next())->Key();
}

void ActiveRegion__FixUpperEdge(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* newEdge)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(__this->_mesh)->DeleteEdge(__this->UpperEdge());
    __this->fixUpperEdge(false);
    __this->UpperEdge(newEdge);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(newEdge)->ActiveRegion(__this);
}

::uString* ActiveRegion__ToString(ActiveRegion* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Region of "), (::uObject*)__this->UpperEdge()), __this->fixUpperEdge() ? ::uGetConstString(" NEEDS FIX") : ::uGetConstString(""));
}

void ActiveRegion___ObjInit(ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    __this->_mesh = mesh;
    __this->UpperEdge(upperEdge);
    __this->Sentinel(sentinel);
}

ActiveRegion* ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Mesh* mesh, ::app::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    ActiveRegion* inst = (::app::Fuse::Drawing::Tesselation::ActiveRegion*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::ActiveRegion), ::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof());
    inst->_ObjInit(mesh, upperEdge, sentinel);
    return inst;
}

}}}}
