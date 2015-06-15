// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

EdgeLoopEnumerable__uType* EdgeLoopEnumerable__typeof()
{
    static EdgeLoopEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeLoopEnumerable__uType*)::uAllocClassType(sizeof(EdgeLoopEnumerable__uType), "Fuse.Drawing.Tesselation.EdgeLoopEnumerable", ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), 1);
        type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))EdgeLoopEnumerable__GetNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof();

        type->InterfaceOffsets[0] = offsetof(EdgeLoopEnumerable__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EdgeLoopEnumerable__GetNext(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext() == __this->_first) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(e)->LeftNext();
}

void EdgeLoopEnumerable___ObjInit_1(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, anEdge);
}

EdgeLoopEnumerable* EdgeLoopEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    EdgeLoopEnumerable* inst = (::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable), ::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable__typeof());
    inst->_ObjInit_1(anEdge);
    return inst;
}

}}}}
