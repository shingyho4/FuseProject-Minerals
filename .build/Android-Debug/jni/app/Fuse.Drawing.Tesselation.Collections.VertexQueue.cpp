// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

VertexQueue__uType* VertexQueue__typeof()
{
    static VertexQueue__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexQueue__uType*)::uAllocClassType(sizeof(VertexQueue__uType), "Fuse.Drawing.Tesselation.Collections.VertexQueue", ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof());
        type->__fp_Leq_1 = (bool(*)(::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*))VertexQueue__Leq_1;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool VertexQueue__Leq_1(VertexQueue* __this, ::app::Fuse::Drawing::Tesselation::Vertex* a, ::app::Fuse::Drawing::Tesselation::Vertex* b)
{
    return !::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(a)->VertLeq(b);
}

void VertexQueue___ObjInit_1(VertexQueue* __this)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* collection_123;
    ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex___ObjInit(__this, (collection_123 = ::app::Fuse::Drawing::Tesselation::Vertex__New_1(NULL), ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(collection_123)->S = 3.4028230607370965e+38, collection_123));
}

VertexQueue* VertexQueue__New_1(::uStatic* __this)
{
    VertexQueue* inst = (::app::Fuse::Drawing::Tesselation::Collections::VertexQueue*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Collections::VertexQueue), ::app::Fuse::Drawing::Tesselation::Collections::VertexQueue__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}}
