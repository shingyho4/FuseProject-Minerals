// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof()
{
    static ArrayEnumerator__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerator__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerator__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<float2>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))ArrayEnumerator__float2__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__float2__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__float2__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerator__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ArrayEnumerator__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ArrayEnumerator__float2__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerator__float2, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 ArrayEnumerator__float2__get_Current(ArrayEnumerator__float2* __this)
{
    return __this->_current;
}

void ArrayEnumerator__float2__Dispose(ArrayEnumerator__float2* __this)
{
}

bool ArrayEnumerator__float2__MoveNext(ArrayEnumerator__float2* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Float2>(__this->_iterator);
        return true;
    }

    return false;
}

void ArrayEnumerator__float2___ObjInit(ArrayEnumerator__float2* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

ArrayEnumerator__float2* ArrayEnumerator__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__float2* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
