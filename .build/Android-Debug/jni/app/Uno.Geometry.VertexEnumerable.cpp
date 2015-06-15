// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Geometry.Vertex.h>
#include <app/Uno.Geometry.VertexEnumerable.h>
#include <app/Uno.Geometry.VertexEnumerator.h>

namespace app {
namespace Uno {
namespace Geometry {

VertexEnumerable__uType* VertexEnumerable__typeof()
{
    static VertexEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexEnumerable__uType*)::uAllocClassType(sizeof(VertexEnumerable__uType), "Uno.Geometry.VertexEnumerable", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))VertexEnumerable__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(VertexEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(VertexEnumerable, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* VertexEnumerable__GetEnumerator(VertexEnumerable* __this)
{
    return (::uObject*)::app::Uno::Geometry::VertexEnumerator__New_1(NULL, __this->_head);
}

void VertexEnumerable___ObjInit(VertexEnumerable* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = head;
}

VertexEnumerable* VertexEnumerable__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerable* inst = (::app::Uno::Geometry::VertexEnumerable*)::uAllocObject(sizeof(::app::Uno::Geometry::VertexEnumerable), ::app::Uno::Geometry::VertexEnumerable__typeof());
    inst->_ObjInit(head);
    return inst;
}

}}}
