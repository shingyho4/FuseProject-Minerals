// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.EmptyEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

EmptyEnumerable__float2__uType* EmptyEnumerable__float2__typeof()
{
    static EmptyEnumerable__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EmptyEnumerable__float2__uType*)::uAllocClassType(sizeof(EmptyEnumerable__float2__uType), "Uno.Collections.EmptyEnumerable<float2>", ::uObject__typeof(), 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))EmptyEnumerable__float2__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(EmptyEnumerable__float2__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* EmptyEnumerable__float2__GetEnumerator(EmptyEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerator__float2__New_1(NULL);
}

void EmptyEnumerable__float2___ObjInit(EmptyEnumerable__float2* __this)
{
}

EmptyEnumerable__float2* EmptyEnumerable__float2__New_1(::uStatic* __this)
{
    EmptyEnumerable__float2* inst = (::app::Uno::Collections::EmptyEnumerable__float2*)::uAllocObject(sizeof(::app::Uno::Collections::EmptyEnumerable__float2), ::app::Uno::Collections::EmptyEnumerable__float2__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
