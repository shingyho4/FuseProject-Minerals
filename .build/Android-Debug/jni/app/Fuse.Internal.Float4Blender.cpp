// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Float4Blender.h>

namespace app {
namespace Fuse {
namespace Internal {

Float4Blender__uType* Float4Blender__typeof()
{
    static Float4Blender__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float4Blender__uType*)::uAllocClassType(sizeof(Float4Blender__uType), "Fuse.Internal.Float4Blender", ::app::Fuse::Internal::Blender__float4__typeof());
        type->__fp_Weight = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, float))Float4Blender__Weight;
        type->__fp_Add = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4))Float4Blender__Add;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 Float4Blender__Weight(Float4Blender* __this, ::app::Uno::Float4 v, float w)
{
    return ::app::Uno::Float4__op_Multiply(NULL, v, w);
}

::app::Uno::Float4 Float4Blender__Add(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__op_Addition(NULL, a, b);
}

void Float4Blender___ObjInit_1(Float4Blender* __this)
{
    ::app::Fuse::Internal::Blender__float4___ObjInit(__this);
}

Float4Blender* Float4Blender__New_1(::uStatic* __this)
{
    Float4Blender* inst = (::app::Fuse::Internal::Float4Blender*)::uAllocObject(sizeof(::app::Fuse::Internal::Float4Blender), ::app::Fuse::Internal::Float4Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
