// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.OriginEnumerable.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

OriginEnumerable__uType* OriginEnumerable__typeof()
{
    static OriginEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (OriginEnumerable__uType*)::uAllocClassType(sizeof(OriginEnumerable__uType), "Fuse.Drawing.Tesselation.OriginEnumerable", ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), 1);
        type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))OriginEnumerable__GetNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof();

        type->InterfaceOffsets[0] = offsetof(OriginEnumerable__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* OriginEnumerable__GetNext(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->OriginNext() == __this->_first) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(edge)->OriginNext();
}

void OriginEnumerable___ObjInit_1(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, anEdge);
}

OriginEnumerable* OriginEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    OriginEnumerable* inst = (::app::Fuse::Drawing::Tesselation::OriginEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::OriginEnumerable), ::app::Fuse::Drawing::Tesselation::OriginEnumerable__typeof());
    inst->_ObjInit_1(anEdge);
    return inst;
}

}}}}
