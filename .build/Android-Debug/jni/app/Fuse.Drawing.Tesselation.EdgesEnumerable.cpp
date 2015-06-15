// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.EdgesEnumerable.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

EdgesEnumerable__uType* EdgesEnumerable__typeof()
{
    static EdgesEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgesEnumerable__uType*)::uAllocClassType(sizeof(EdgesEnumerable__uType), "Fuse.Drawing.Tesselation.EdgesEnumerable", ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), 1, 1);
        type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*))EdgesEnumerable__GetNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof();

        type->InterfaceOffsets[0] = offsetof(EdgesEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(EdgesEnumerable, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EdgesEnumerable__GetNext(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(v)->Next();
}

void EdgesEnumerable___ObjInit_1(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::HalfEdge*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(head)->Next());
    __this->_head = head;
}

EdgesEnumerable* EdgesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    EdgesEnumerable* inst = (::app::Fuse::Drawing::Tesselation::EdgesEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::EdgesEnumerable), ::app::Fuse::Drawing::Tesselation::EdgesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

}}}}
