// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.TriangleMeshIntersecter.h>
#include <app/Uno.Float.h>
#include <app/Uno.Geometry.Collision.h>

namespace app {
namespace Fuse {
namespace Entities {

TriangleMeshIntersecter__uType* TriangleMeshIntersecter__typeof()
{
    static TriangleMeshIntersecter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TriangleMeshIntersecter__uType*)::uAllocClassType(sizeof(TriangleMeshIntersecter__uType), "Fuse.Entities.TriangleMeshIntersecter", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool TriangleMeshIntersecter__IntersectsRay(TriangleMeshIntersecter* __this, ::app::Uno::Geometry::Ray objRay, float* outDistance)
{
    float minDistance = 3.402823e+38f;
    bool hit = false;

    for (int t = 0; t < __this->_count; t++)
    {
        float distance = float();

        if (::app::Uno::Geometry::Collision__RayIntersectsTriangle(NULL, objRay, __this->GetTriangle(t), &distance))
        {
            hit = true;

            if (distance < minDistance)
            {
                minDistance = distance;
            }
        }
    }

    *outDistance = minDistance;
    return hit;
}

void TriangleMeshIntersecter___ObjInit(TriangleMeshIntersecter* __this, int count)
{
    __this->_count = count;
}

}}}
