// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Fuse_Entities_Entry__uType* List1_Enumerator__Fuse_Entities_Entry__typeof()
{
    static List1_Enumerator__Fuse_Entities_Entry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Fuse_Entities_Entry__uType*)::uAllocValueType(sizeof(List1_Enumerator__Fuse_Entities_Entry__uType), "Uno.Collections.List1_Enumerator<Fuse.Entities.Entry>", sizeof(List1_Enumerator__Fuse_Entities_Entry), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Entities_Entry__Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Entities_Entry__MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Fuse_Entities_Entry__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Fuse_Entities_Entry__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Fuse_Entities_Entry, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Fuse_Entities_Entry, _current.Mesh);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current.Mesh";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Entities::Entry List1_Enumerator__Fuse_Entities_Entry__get_Current(List1_Enumerator__Fuse_Entities_Entry* __this)
{
    return __this->_current;
}

void List1_Enumerator__Fuse_Entities_Entry__Dispose(List1_Enumerator__Fuse_Entities_Entry* __this)
{
}

bool List1_Enumerator__Fuse_Entities_Entry__MoveNext(List1_Enumerator__Fuse_Entities_Entry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(__this->_source)->_data)->Item< ::app::Fuse::Entities::Entry>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Fuse_Entities_Entry___ObjInit(List1_Enumerator__Fuse_Entities_Entry* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entry*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Fuse_Entities_Entry List1_Enumerator__Fuse_Entities_Entry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source)
{
    List1_Enumerator__Fuse_Entities_Entry inst = ::uDefault< List1_Enumerator__Fuse_Entities_Entry>();
    inst._ObjInit(source);
    return inst;
}

}}}
