// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.EmptyEnumerator__float2.h>
#include <app/Uno.InvalidOperationException.h>

namespace app {
namespace Uno {
namespace Collections {

EmptyEnumerator__float2__uType* EmptyEnumerator__float2__typeof()
{
    static EmptyEnumerator__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EmptyEnumerator__float2__uType*)::uAllocClassType(sizeof(EmptyEnumerator__float2__uType), "Uno.Collections.EmptyEnumerator<float2>", ::uObject__typeof(), 3);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))EmptyEnumerator__float2__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))EmptyEnumerator__float2__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))EmptyEnumerator__float2__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(EmptyEnumerator__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(EmptyEnumerator__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(EmptyEnumerator__float2__uType, __interface_2);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 EmptyEnumerator__float2__get_Current(EmptyEnumerator__float2* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

bool EmptyEnumerator__float2__MoveNext(EmptyEnumerator__float2* __this)
{
    return false;
}

void EmptyEnumerator__float2__Dispose(EmptyEnumerator__float2* __this)
{
}

void EmptyEnumerator__float2___ObjInit(EmptyEnumerator__float2* __this)
{
}

EmptyEnumerator__float2* EmptyEnumerator__float2__New_1(::uStatic* __this)
{
    EmptyEnumerator__float2* inst = (::app::Uno::Collections::EmptyEnumerator__float2*)::uAllocObject(sizeof(::app::Uno::Collections::EmptyEnumerator__float2), ::app::Uno::Collections::EmptyEnumerator__float2__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
