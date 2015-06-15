// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerable__float2__uType* ArrayEnumerable__float2__typeof()
{
    static ArrayEnumerable__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerable__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerable__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__float2__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerable__float2__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerable__float2, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ArrayEnumerable__float2__GetEnumerator(ArrayEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2__New_1(NULL, __this->_source);
}

void ArrayEnumerable__float2___ObjInit(ArrayEnumerable__float2* __this, ::uArray* source)
{
    __this->_source = source;
}

ArrayEnumerable__float2* ArrayEnumerable__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__float2* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
