// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_MESH_BUILDER_H__
#define __APP_FUSE_DRAWING_TESSELATION_MESH_BUILDER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct MeshBuilder;

struct MeshBuilder__uType : ::uClassType
{
};

MeshBuilder__uType* MeshBuilder__typeof();

::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__CreateFromContours(::uStatic* __this, ::uObject* contours);
void MeshBuilder__NewContour(MeshBuilder* __this);
void MeshBuilder__AddVertex(MeshBuilder* __this, float x, float y);
::app::Fuse::Drawing::Tesselation::HalfEdge* MeshBuilder__CreateSelfLoop(MeshBuilder* __this);
::app::Fuse::Drawing::Tesselation::Mesh* MeshBuilder__Complete(MeshBuilder* __this);
void MeshBuilder___ObjInit(MeshBuilder* __this);
MeshBuilder* MeshBuilder__New_1(::uStatic* __this);

struct MeshBuilder : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _lastEdge;

    void NewContour() { MeshBuilder__NewContour(this); }
    void AddVertex(float x, float y) { MeshBuilder__AddVertex(this, x, y); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* CreateSelfLoop() { return MeshBuilder__CreateSelfLoop(this); }
    ::app::Fuse::Drawing::Tesselation::Mesh* Complete() { return MeshBuilder__Complete(this); }
    void _ObjInit() { MeshBuilder___ObjInit(this); }
};

}}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

}}}}


#endif
