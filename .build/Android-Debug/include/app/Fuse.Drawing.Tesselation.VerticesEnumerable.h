// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_VERTICES_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_VERTICES_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-e3d55017.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct VerticesEnumerable;

struct VerticesEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType
{
};

VerticesEnumerable__uType* VerticesEnumerable__typeof();

::app::Fuse::Drawing::Tesselation::Vertex* VerticesEnumerable__GetNext(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* v);
void VerticesEnumerable___ObjInit_1(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head);
VerticesEnumerable* VerticesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head);

struct VerticesEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _head;

    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::Vertex* head) { VerticesEnumerable___ObjInit_1(this, head); }
};

}}}}


#endif
