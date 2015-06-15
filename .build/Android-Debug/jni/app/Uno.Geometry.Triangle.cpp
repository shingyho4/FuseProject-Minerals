// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Geometry.Triangle.h>

namespace app {
namespace Uno {
namespace Geometry {

Triangle__uType* Triangle__typeof()
{
    static Triangle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Triangle__uType*)::uAllocValueType(sizeof(Triangle__uType), "Uno.Geometry.Triangle", sizeof(Triangle));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Triangle___ObjInit(Triangle* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c)
{
    __this->A = a;
    __this->B = b;
    __this->C = c;
}

Triangle Triangle__New_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, ::app::Uno::Float3 c)
{
    Triangle inst = ::uDefault< Triangle>();
    inst._ObjInit(a, b, c);
    return inst;
}

}}}
