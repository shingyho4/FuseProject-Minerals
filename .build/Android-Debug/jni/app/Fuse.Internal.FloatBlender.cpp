// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.FloatBlender.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Internal {

FloatBlender__uType* FloatBlender__typeof()
{
    static FloatBlender__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FloatBlender__uType*)::uAllocClassType(sizeof(FloatBlender__uType), "Fuse.Internal.FloatBlender", ::app::Fuse::Internal::Blender__float__typeof());
        type->__fp_get_Zero = (float(*)(::app::Fuse::Internal::Blender__float*))FloatBlender__get_Zero;
        type->__fp_Weight = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Weight;
        type->__fp_Add = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Add;
        type->__fp_Sub = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Sub;
        type->__fp_Lerp = (float(*)(::app::Fuse::Internal::Blender__float*, float, float, float))FloatBlender__Lerp;
        type->__fp_ToUnit = (float(*)(::app::Fuse::Internal::Blender__float*, float, float*))FloatBlender__ToUnit;
        type->__fp_Length = (float(*)(::app::Fuse::Internal::Blender__float*, float))FloatBlender__Length;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float FloatBlender__get_Zero(FloatBlender* __this)
{
    return 0.0f;
}

float FloatBlender__Weight(FloatBlender* __this, float v, float w)
{
    return v * w;
}

float FloatBlender__Add(FloatBlender* __this, float a, float b)
{
    return a + b;
}

float FloatBlender__Sub(FloatBlender* __this, float a, float b)
{
    return a - b;
}

float FloatBlender__Lerp(FloatBlender* __this, float a, float b, float d)
{
    return a + ((b - a) * d);
}

float FloatBlender__ToUnit(FloatBlender* __this, float a, float* length)
{
    *length = ::app::Uno::Math__Abs_1(NULL, a);
    return (float)((a < 0.0f) ? -1 : 1);
}

float FloatBlender__Length(FloatBlender* __this, float a)
{
    return ::app::Uno::Math__Abs_1(NULL, a);
}

void FloatBlender___ObjInit_1(FloatBlender* __this)
{
    ::app::Fuse::Internal::Blender__float___ObjInit(__this);
}

FloatBlender* FloatBlender__New_1(::uStatic* __this)
{
    FloatBlender* inst = (::app::Fuse::Internal::FloatBlender*)::uAllocObject(sizeof(::app::Fuse::Internal::FloatBlender), ::app::Fuse::Internal::FloatBlender__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
