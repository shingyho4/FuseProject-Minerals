// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.Tesselation.VerticesEnumerable.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

VerticesEnumerable__uType* VerticesEnumerable__typeof()
{
    static VerticesEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VerticesEnumerable__uType*)::uAllocClassType(sizeof(VerticesEnumerable__uType), "Fuse.Drawing.Tesselation.VerticesEnumerable", ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof(), 1, 1);
        type->__fp_GetNext = (::app::Fuse::Drawing::Tesselation::Vertex*(*)(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*))VerticesEnumerable__GetNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof();

        type->InterfaceOffsets[0] = offsetof(VerticesEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(VerticesEnumerable, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Vertex* VerticesEnumerable__GetNext(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* v)
{
    return (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->Next() == __this->_head) ? (::app::Fuse::Drawing::Tesselation::Vertex*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(v)->Next();
}

void VerticesEnumerable___ObjInit_1(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex___ObjInit(__this, (::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(head)->Next() == head) ? (::app::Fuse::Drawing::Tesselation::Vertex*)NULL : ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(head)->Next());
    __this->_head = head;
}

VerticesEnumerable* VerticesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head)
{
    VerticesEnumerable* inst = (::app::Fuse::Drawing::Tesselation::VerticesEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::VerticesEnumerable), ::app::Fuse::Drawing::Tesselation::VerticesEnumerable__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

}}}}
