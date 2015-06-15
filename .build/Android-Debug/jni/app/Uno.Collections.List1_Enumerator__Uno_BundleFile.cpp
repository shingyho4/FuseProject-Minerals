// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.List__Uno_BundleFile.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_BundleFile.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Uno_BundleFile__uType* List1_Enumerator__Uno_BundleFile__typeof()
{
    static List1_Enumerator__Uno_BundleFile__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Uno_BundleFile__uType*)::uAllocValueType(sizeof(List1_Enumerator__Uno_BundleFile__uType), "Uno.Collections.List1_Enumerator<Uno.BundleFile>", sizeof(List1_Enumerator__Uno_BundleFile), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Uno::BundleFile*(*)(void*))List1_Enumerator__Uno_BundleFile__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_BundleFile__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_BundleFile__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Uno_BundleFile__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Uno_BundleFile__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Uno_BundleFile__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List1_Enumerator__Uno_BundleFile__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Uno_BundleFile, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Uno_BundleFile, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* List1_Enumerator__Uno_BundleFile__get_Current(List1_Enumerator__Uno_BundleFile* __this)
{
    return __this->_current;
}

void List1_Enumerator__Uno_BundleFile__Dispose(List1_Enumerator__Uno_BundleFile* __this)
{
}

bool List1_Enumerator__Uno_BundleFile__MoveNext(List1_Enumerator__Uno_BundleFile* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_BundleFile*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_BundleFile*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_BundleFile*>(__this->_source)->_data)->Item< ::app::Uno::BundleFile*>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Uno_BundleFile___ObjInit(List1_Enumerator__Uno_BundleFile* __this, ::app::Uno::Collections::List__Uno_BundleFile* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_BundleFile*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Uno_BundleFile List1_Enumerator__Uno_BundleFile__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_BundleFile* source)
{
    List1_Enumerator__Uno_BundleFile inst = ::uDefault< List1_Enumerator__Uno_BundleFile>();
    inst._ObjInit(source);
    return inst;
}

}}}
