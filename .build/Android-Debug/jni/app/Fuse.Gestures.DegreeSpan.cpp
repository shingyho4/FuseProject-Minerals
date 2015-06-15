// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Gestures {

DegreeSpan__uType* DegreeSpan__typeof()
{
    static DegreeSpan__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DegreeSpan__uType*)::uAllocClassType(sizeof(DegreeSpan__uType), "Fuse.Gestures.DegreeSpan", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool DegreeSpan__IsWithinBounds(DegreeSpan* __this, float x)
{
    float angle1 = __this->_a;
    float angle2 = __this->_b;
    float rAngle = ::app::Uno::Math__Mod_1(NULL, ::app::Uno::Math__Mod_1(NULL, angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
    {
        return (x >= angle1) && (x <= angle2);
    }
    else
    {
        return (x >= angle2) || (x <= angle2);
    }
}

void DegreeSpan___ObjInit(DegreeSpan* __this, float a, float b)
{
    __this->_a = a;
    __this->_b = b;
}

DegreeSpan* DegreeSpan__New_1(::uStatic* __this, float a, float b)
{
    DegreeSpan* inst = (::app::Fuse::Gestures::DegreeSpan*)::uAllocObject(sizeof(::app::Fuse::Gestures::DegreeSpan), ::app::Fuse::Gestures::DegreeSpan__typeof());
    inst->_ObjInit(a, b);
    return inst;
}

}}}
