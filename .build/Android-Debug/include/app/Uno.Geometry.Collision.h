// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_COLLISION_H__
#define __APP_UNO_GEOMETRY_COLLISION_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle; } } }

namespace app {
namespace Uno {
namespace Geometry {

struct Collision__uType : ::uClassType
{
};

Collision__uType* Collision__typeof();

bool Collision__RayIntersectsTriangle(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Triangle triangle, float* distance);
bool Collision__RayIntersectsBox(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance);

}}}


#endif
