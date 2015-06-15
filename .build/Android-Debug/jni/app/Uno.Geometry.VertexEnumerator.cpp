// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Geometry.Vertex.h>
#include <app/Uno.Geometry.VertexEnumerator.h>

namespace app {
namespace Uno {
namespace Geometry {

VertexEnumerator__uType* VertexEnumerator__typeof()
{
    static VertexEnumerator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexEnumerator__uType*)::uAllocClassType(sizeof(VertexEnumerator__uType), "Uno.Geometry.VertexEnumerator", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))VertexEnumerator__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))VertexEnumerator__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))VertexEnumerator__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(VertexEnumerator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(VertexEnumerator__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(VertexEnumerator__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(VertexEnumerator, _head);
        type->StrongRefOffsets[1] = offsetof(VertexEnumerator, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 VertexEnumerator__get_Current(VertexEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->X, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Y);
}

bool VertexEnumerator__MoveNext(VertexEnumerator* __this)
{
    return (__this->_current = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Next) != NULL;
}

void VertexEnumerator__Dispose(VertexEnumerator* __this)
{
}

void VertexEnumerator___ObjInit(VertexEnumerator* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = __this->_current = head;
}

VertexEnumerator* VertexEnumerator__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerator* inst = (::app::Uno::Geometry::VertexEnumerator*)::uAllocObject(sizeof(::app::Uno::Geometry::VertexEnumerator), ::app::Uno::Geometry::VertexEnumerator__typeof());
    inst->_ObjInit(head);
    return inst;
}

}}}
