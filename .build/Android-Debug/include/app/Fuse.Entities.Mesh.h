// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MESH_H__
#define __APP_FUSE_ENTITIES_MESH_H__

#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Mesh;

struct Mesh__uType : ::uClassType
{
};

Mesh__uType* Mesh__typeof();

::app::Uno::Content::Models::ModelMesh* Mesh__get_ModelMesh(Mesh* __this);
::app::Uno::Geometry::Box Mesh__get_BoundingBox(Mesh* __this);
::uArray* Mesh__get_Batches(Mesh* __this);
void Mesh__Flush(Mesh* __this);

struct Mesh : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelDrawable*> _drawable;
    bool _meshBoxDirty;
    ::app::Uno::Geometry::Box _meshBox;
    bool isDirty;
    ::uStrong< ::uArray*> batches;
    ::uStrong< ::app::Fuse::Drawing::Batching::MeshBatcher*> batcher;

    void Flush() { Mesh__Flush(this); }
    ::app::Uno::Content::Models::ModelMesh* ModelMesh() { return Mesh__get_ModelMesh(this); }
    ::app::Uno::Geometry::Box BoundingBox() { return Mesh__get_BoundingBox(this); }
    ::uArray* Batches() { return Mesh__get_Batches(this); }
};

}}}


#endif
