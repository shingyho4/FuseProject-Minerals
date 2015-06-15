// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {
namespace Geometry {

Ray__uType* Ray__typeof()
{
    static Ray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Ray__uType*)::uAllocValueType(sizeof(Ray__uType), "Uno.Geometry.Ray", sizeof(Ray));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Ray Ray__Transform(::uStatic* __this, Ray ray, ::app::Uno::Float4x4 transform)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    return Ray__New_1(NULL, (ind_123 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_7(NULL, ray.Position, 1.0f), transform), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal(NULL, ray.Direction, transform)));
}

void Ray___ObjInit(Ray* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    __this->Position = pos;
    __this->Direction = dir;
}

Ray Ray__New_1(::uStatic* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    Ray inst = ::uDefault< Ray>();
    inst._ObjInit(pos, dir);
    return inst;
}

}}}
