// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Float2Blender.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Internal {

Float2Blender__uType* Float2Blender__typeof()
{
    static Float2Blender__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float2Blender__uType*)::uAllocClassType(sizeof(Float2Blender__uType), "Fuse.Internal.Float2Blender", ::app::Fuse::Internal::Blender__float2__typeof());
        type->__fp_get_Zero = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*))Float2Blender__get_Zero;
        type->__fp_Weight = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, float))Float2Blender__Weight;
        type->__fp_Add = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Add;
        type->__fp_Sub = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Sub;
        type->__fp_Lerp = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2, float))Float2Blender__Lerp;
        type->__fp_ToUnit = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, float*))Float2Blender__ToUnit;
        type->__fp_Length = (float(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2))Float2Blender__Length;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 Float2Blender__get_Zero(Float2Blender* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Float2 Float2Blender__Weight(Float2Blender* __this, ::app::Uno::Float2 v, float w)
{
    return ::app::Uno::Float2__op_Multiply(NULL, v, w);
}

::app::Uno::Float2 Float2Blender__Add(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Addition(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__Sub(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Subtraction(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__Lerp(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float d)
{
    return ::app::Uno::Math__Lerp_2(NULL, a, b, d);
}

::app::Uno::Float2 Float2Blender__ToUnit(Float2Blender* __this, ::app::Uno::Float2 a, float* length)
{
    *length = ::app::Uno::Vector__Length(NULL, a);
    return ::app::Uno::Vector__Normalize(NULL, a);
}

float Float2Blender__Length(Float2Blender* __this, ::app::Uno::Float2 a)
{
    return ::app::Uno::Vector__Length(NULL, a);
}

void Float2Blender___ObjInit_1(Float2Blender* __this)
{
    ::app::Fuse::Internal::Blender__float2___ObjInit(__this);
}

Float2Blender* Float2Blender__New_1(::uStatic* __this)
{
    Float2Blender* inst = (::app::Fuse::Internal::Float2Blender*)::uAllocObject(sizeof(::app::Fuse::Internal::Float2Blender), ::app::Fuse::Internal::Float2Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
