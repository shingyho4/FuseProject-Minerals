// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.UnionEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

UnionEnumerable__float2__uType* UnionEnumerable__float2__typeof()
{
    static UnionEnumerable__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UnionEnumerable__float2__uType*)::uAllocClassType(sizeof(UnionEnumerable__float2__uType), "Uno.Collections.UnionEnumerable<float2>", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__float2__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(UnionEnumerable__float2__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(UnionEnumerable__float2, _first);
        type->StrongRefOffsets[1] = offsetof(UnionEnumerable__float2, _second);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_first";
        type->StrongRefNames[1] = "_second";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* UnionEnumerable__float2__GetEnumerator(UnionEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

void UnionEnumerable__float2___ObjInit(UnionEnumerable__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

UnionEnumerable__float2* UnionEnumerable__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__float2* inst = (::app::Uno::Collections::UnionEnumerable__float2*)::uAllocObject(sizeof(::app::Uno::Collections::UnionEnumerable__float2), ::app::Uno::Collections::UnionEnumerable__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

}}}
