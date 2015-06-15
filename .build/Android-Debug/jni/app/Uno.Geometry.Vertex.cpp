// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Geometry.Vertex.h>

namespace app {
namespace Uno {
namespace Geometry {

Vertex__uType* Vertex__typeof()
{
    static Vertex__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Vertex__uType*)::uAllocClassType(sizeof(Vertex__uType), "Uno.Geometry.Vertex", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Vertex, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Vertex___ObjInit(Vertex* __this)
{
}

Vertex* Vertex__New_1(::uStatic* __this)
{
    Vertex* inst = (::app::Uno::Geometry::Vertex*)::uAllocObject(sizeof(::app::Uno::Geometry::Vertex), ::app::Uno::Geometry::Vertex__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
