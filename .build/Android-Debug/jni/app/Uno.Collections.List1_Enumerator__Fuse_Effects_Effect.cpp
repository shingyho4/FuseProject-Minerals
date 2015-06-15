// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Effects.Effect.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Fuse_Effects_Effect__uType* List1_Enumerator__Fuse_Effects_Effect__typeof()
{
    static List1_Enumerator__Fuse_Effects_Effect__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Fuse_Effects_Effect__uType*)::uAllocValueType(sizeof(List1_Enumerator__Fuse_Effects_Effect__uType), "Uno.Collections.List1_Enumerator<Fuse.Effects.Effect>", sizeof(List1_Enumerator__Fuse_Effects_Effect), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Effects::Effect*(*)(void*))List1_Enumerator__Fuse_Effects_Effect__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Effects_Effect__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Effects_Effect__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Fuse_Effects_Effect, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Fuse_Effects_Effect, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Effects::Effect* List1_Enumerator__Fuse_Effects_Effect__get_Current(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    return __this->_current;
}

void List1_Enumerator__Fuse_Effects_Effect__Dispose(List1_Enumerator__Fuse_Effects_Effect* __this)
{
}

bool List1_Enumerator__Fuse_Effects_Effect__MoveNext(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_data)->Item< ::app::Fuse::Effects::Effect*>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Fuse_Effects_Effect___ObjInit(List1_Enumerator__Fuse_Effects_Effect* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Fuse_Effects_Effect List1_Enumerator__Fuse_Effects_Effect__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    List1_Enumerator__Fuse_Effects_Effect inst = ::uDefault< List1_Enumerator__Fuse_Effects_Effect>();
    inst._ObjInit(source);
    return inst;
}

}}}
