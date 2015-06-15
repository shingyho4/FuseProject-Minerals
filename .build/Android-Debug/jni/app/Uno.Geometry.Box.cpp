// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Geometry.Box.h>

namespace app {
namespace Uno {
namespace Geometry {

Box__uType* Box__typeof()
{
    static Box__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Box__uType*)::uAllocValueType(sizeof(Box__uType), "Uno.Geometry.Box", sizeof(Box));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Box___ObjInit(Box* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    __this->Minimum = min;
    __this->Maximum = max;
}

Box Box__New_1(::uStatic* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    Box inst = ::uDefault< Box>();
    inst._ObjInit(min, max);
    return inst;
}

}}}
