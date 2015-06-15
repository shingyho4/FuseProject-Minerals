// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_DIRECT_ARRAY_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_DIRECT_ARRAY_MESH_INTERSECTER_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Float3.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct DirectArrayMeshIntersecter;

struct DirectArrayMeshIntersecter__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

DirectArrayMeshIntersecter__uType* DirectArrayMeshIntersecter__typeof();

::app::Uno::Geometry::Triangle DirectArrayMeshIntersecter__GetTriangle(DirectArrayMeshIntersecter* __this, int t);

struct DirectArrayMeshIntersecter : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::uArray*> _positions;
};

}}}

#include <app/Uno.Geometry.Triangle.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Entities {

}}}


#endif
