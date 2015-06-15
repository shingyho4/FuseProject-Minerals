// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_INDEXED_ARRAY_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_INDEXED_ARRAY_MESH_INTERSECTER_H__

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Float3.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct IndexedArrayMeshIntersecter;

struct IndexedArrayMeshIntersecter__uType : ::app::Fuse::Entities::TriangleMeshIntersecter__uType
{
};

IndexedArrayMeshIntersecter__uType* IndexedArrayMeshIntersecter__typeof();

::app::Uno::Geometry::Triangle IndexedArrayMeshIntersecter__GetTriangle(IndexedArrayMeshIntersecter* __this, int t);

struct IndexedArrayMeshIntersecter : ::app::Fuse::Entities::TriangleMeshIntersecter
{
    ::uStrong< ::uArray*> _indices;
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
