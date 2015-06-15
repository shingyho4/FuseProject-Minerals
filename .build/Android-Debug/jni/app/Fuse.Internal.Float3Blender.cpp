// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Float3Blender.h>

namespace app {
namespace Fuse {
namespace Internal {

Float3Blender__uType* Float3Blender__typeof()
{
    static Float3Blender__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float3Blender__uType*)::uAllocClassType(sizeof(Float3Blender__uType), "Fuse.Internal.Float3Blender", ::app::Fuse::Internal::Blender__float3__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Float3Blender___ObjInit_1(Float3Blender* __this)
{
    ::app::Fuse::Internal::Blender__float3___ObjInit(__this);
}

Float3Blender* Float3Blender__New_1(::uStatic* __this)
{
    Float3Blender* inst = (::app::Fuse::Internal::Float3Blender*)::uAllocObject(sizeof(::app::Fuse::Internal::Float3Blender), ::app::Fuse::Internal::Float3Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
