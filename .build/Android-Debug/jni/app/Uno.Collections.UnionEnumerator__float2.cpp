// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.UnionEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

UnionEnumerator__float2__uType* UnionEnumerator__float2__typeof()
{
    static UnionEnumerator__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UnionEnumerator__float2__uType*)::uAllocClassType(sizeof(UnionEnumerator__float2__uType), "Uno.Collections.UnionEnumerator<float2>", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))UnionEnumerator__float2__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__float2__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__float2__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(UnionEnumerator__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(UnionEnumerator__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(UnionEnumerator__float2__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(UnionEnumerator__float2, _current);
        type->StrongRefOffsets[1] = offsetof(UnionEnumerator__float2, _first);
        type->StrongRefOffsets[2] = offsetof(UnionEnumerator__float2, _second);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_current";
        type->StrongRefNames[1] = "_first";
        type->StrongRefNames[2] = "_second";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 UnionEnumerator__float2__get_Current(UnionEnumerator__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_current));
}

void UnionEnumerator__float2__Dispose(UnionEnumerator__float2* __this)
{
}

bool UnionEnumerator__float2__MoveNext(UnionEnumerator__float2* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

void UnionEnumerator__float2___ObjInit(UnionEnumerator__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

UnionEnumerator__float2* UnionEnumerator__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__float2* inst = (::app::Uno::Collections::UnionEnumerator__float2*)::uAllocObject(sizeof(::app::Uno::Collections::UnionEnumerator__float2), ::app::Uno::Collections::UnionEnumerator__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

}}}
