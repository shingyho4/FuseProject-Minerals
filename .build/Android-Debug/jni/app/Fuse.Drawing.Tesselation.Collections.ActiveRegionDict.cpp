// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-4556c756.h>
#include <app/Fuse.Drawing.Tesselation.Geom.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.Sweep.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

ActiveRegionDict__uType* ActiveRegionDict__typeof()
{
    static ActiveRegionDict__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ActiveRegionDict__uType*)::uAllocClassType(sizeof(ActiveRegionDict__uType), "Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", ::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof(), 0, 0, 2);
        type->__fp_Leq = (bool(*)(::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*, ::app::Fuse::Drawing::Tesselation::ActiveRegion*))ActiveRegionDict__Leq;

        type->WeakRefOffsets[0] = offsetof(ActiveRegionDict, _mesh);
        type->WeakRefOffsets[1] = offsetof(ActiveRegionDict, _sweep);
#ifdef U_DEBUG_MEM
        type->WeakRefNames[0] = "_mesh";
        type->WeakRefNames[1] = "_sweep";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ActiveRegionDict__CheckInvariants(ActiveRegionDict* __this)
{
}

bool ActiveRegionDict__Leq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::app::Fuse::Drawing::Tesselation::ActiveRegion* reg2)
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e1 = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg1)->UpperEdge();
    ::app::Fuse::Drawing::Tesselation::HalfEdge* e2 = ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(reg2)->UpperEdge();
    return __this->EdgeLeq(e1, e2);
}

bool ActiveRegionDict__EdgeLeq(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e1, ::app::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
    {
        if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
        {
            if (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin())->VertLeq(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()))
            {
                return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()) <= 0.0f;
            }
            else
            {
                return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin()) >= 0.0f;
            }
        }
        else
        {
            return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin()) <= 0.0f;
        }
    }

    if (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination() == ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event())
    {
        return ::app::Fuse::Drawing::Tesselation::Geom__EdgeSign(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin()) >= 0.0f;
    }

    float t1 = ::app::Fuse::Drawing::Tesselation::Geom__EdgeEval(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e1)->Origin());
    float t2 = ::app::Fuse::Drawing::Tesselation::Geom__EdgeEval(NULL, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Destination(), ::uPtr< ::app::Fuse::Drawing::Tesselation::Sweep*>(__this->_sweep)->Event(), ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e2)->Origin());
    return t1 >= t2;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__AddRegionBelow(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::app::Fuse::Drawing::Tesselation::HalfEdge* eNewUp)
{
    ::app::Fuse::Drawing::Tesselation::ActiveRegion* regNew = ::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, eNewUp, false);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regNew)->UpperEdgeDictNode(__this->InsertBefore(::uPtr< ::app::Fuse::Drawing::Tesselation::ActiveRegion*>(regAbove)->UpperEdgeDictNode(), regNew));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(eNewUp)->ActiveRegion(regNew);
    return regNew;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict__GetRegionContaining(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Search(::app::Fuse::Drawing::Tesselation::ActiveRegion__New_1(NULL, __this->_mesh, ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(vEvent)->AnEdge())->Sym(), false)))->Key();
}

void ActiveRegionDict___ObjInit_1(ActiveRegionDict* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(__this);
    __this->_mesh = mesh;
    __this->_sweep = sweep;
}

ActiveRegionDict* ActiveRegionDict__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Sweep* sweep, ::app::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ActiveRegionDict* inst = (::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict), ::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict__typeof());
    inst->_ObjInit_1(sweep, mesh);
    return inst;
}

}}}}}
