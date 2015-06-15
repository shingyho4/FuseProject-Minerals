// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_TRIANGLE_MESH_INTERSECTER_H__
#define __APP_FUSE_ENTITIES_TRIANGLE_MESH_INTERSECTER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct TriangleMeshIntersecter;

struct TriangleMeshIntersecter__uType : ::uClassType
{
    ::app::Uno::Geometry::Triangle(*__fp_GetTriangle)(TriangleMeshIntersecter*, int);
};

TriangleMeshIntersecter__uType* TriangleMeshIntersecter__typeof();

bool TriangleMeshIntersecter__IntersectsRay(TriangleMeshIntersecter* __this, ::app::Uno::Geometry::Ray objRay, float* outDistance);
void TriangleMeshIntersecter___ObjInit(TriangleMeshIntersecter* __this, int count);

struct TriangleMeshIntersecter : ::uObject
{
    int _count;

    bool IntersectsRay(::app::Uno::Geometry::Ray objRay, float* outDistance);
    ::app::Uno::Geometry::Triangle GetTriangle(int index);
    void _ObjInit(int count) { TriangleMeshIntersecter___ObjInit(this, count); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Triangle.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Entities {

inline bool TriangleMeshIntersecter::IntersectsRay(::app::Uno::Geometry::Ray objRay, float* outDistance) { return TriangleMeshIntersecter__IntersectsRay(this, objRay, outDistance); }
inline ::app::Uno::Geometry::Triangle TriangleMeshIntersecter::GetTriangle(int index) { return (((TriangleMeshIntersecter__uType*)this->__obj_type)->__fp_GetTriangle)(this, index); }

}}}


#endif
