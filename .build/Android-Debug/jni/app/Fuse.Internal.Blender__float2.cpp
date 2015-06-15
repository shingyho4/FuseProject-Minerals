// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__float2.h>

namespace app {
namespace Fuse {
namespace Internal {

Blender__float2__uType* Blender__float2__typeof()
{
    static Blender__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Blender__float2__uType*)::uAllocClassType(sizeof(Blender__float2__uType), "Fuse.Internal.Blender<float2>", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 Blender__float2__UnitWeight(Blender__float2* __this, ::app::Uno::Float2 v, float w)
{
    float l = float();
    ::app::Uno::Float2 unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

void Blender__float2___ObjInit(Blender__float2* __this)
{
}

}}}
