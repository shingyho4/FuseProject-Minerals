// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_H__
#define __APP_FUSE_ENTITIES_MODEL_MESH_COLLISION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct ModelMeshCollision;

struct ModelMeshCollision__uType : ::uClassType
{
};

ModelMeshCollision__uType* ModelMeshCollision__typeof();

bool ModelMeshCollision__RayIntersectsModelMesh(::uStatic* __this, ::app::Uno::Geometry::Ray objRay, ::app::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance);

struct ModelMeshCollision : ::uObject
{
};

}}}


#endif
