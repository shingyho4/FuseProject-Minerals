// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.UpdateListener.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_UpdateListener.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Fuse_UpdateListener__uType* List1_Enumerator__Fuse_UpdateListener__typeof()
{
    static List1_Enumerator__Fuse_UpdateListener__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Fuse_UpdateListener__uType*)::uAllocValueType(sizeof(List1_Enumerator__Fuse_UpdateListener__uType), "Uno.Collections.List1_Enumerator<Fuse.UpdateListener>", sizeof(List1_Enumerator__Fuse_UpdateListener), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_UpdateListener__Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_UpdateListener__MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Fuse_UpdateListener__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Fuse_UpdateListener__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Fuse_UpdateListener, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Fuse_UpdateListener, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::UpdateListener* List1_Enumerator__Fuse_UpdateListener__get_Current(List1_Enumerator__Fuse_UpdateListener* __this)
{
    return __this->_current;
}

void List1_Enumerator__Fuse_UpdateListener__Dispose(List1_Enumerator__Fuse_UpdateListener* __this)
{
}

bool List1_Enumerator__Fuse_UpdateListener__MoveNext(List1_Enumerator__Fuse_UpdateListener* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(__this->_source)->_data)->Item< ::app::Fuse::UpdateListener*>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Fuse_UpdateListener___ObjInit(List1_Enumerator__Fuse_UpdateListener* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Fuse_UpdateListener List1_Enumerator__Fuse_UpdateListener__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source)
{
    List1_Enumerator__Fuse_UpdateListener inst = ::uDefault< List1_Enumerator__Fuse_UpdateListener>();
    inst._ObjInit(source);
    return inst;
}

}}}
