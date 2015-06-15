// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_VERTEX_QUEUE_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_VERTEX_QUEUE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.PriorityQueue__Fuse_Drawin-129e2459.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct VertexQueue;

struct VertexQueue__uType : ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType
{
};

VertexQueue__uType* VertexQueue__typeof();

bool VertexQueue__Leq_1(VertexQueue* __this, ::app::Fuse::Drawing::Tesselation::Vertex* a, ::app::Fuse::Drawing::Tesselation::Vertex* b);
void VertexQueue___ObjInit_1(VertexQueue* __this);
VertexQueue* VertexQueue__New_1(::uStatic* __this);

struct VertexQueue : ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex
{
    void _ObjInit_1() { VertexQueue___ObjInit_1(this); }
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
