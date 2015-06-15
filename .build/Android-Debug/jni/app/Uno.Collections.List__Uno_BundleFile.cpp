// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.List__Uno_BundleFile.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Uno_BundleFile__uType* List__Uno_BundleFile__typeof()
{
    static List__Uno_BundleFile__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Uno_BundleFile__uType*)::uAllocClassType(sizeof(List__Uno_BundleFile__uType), "Uno.Collections.List<Uno.BundleFile>", ::uObject__typeof(), 2, 1);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::BundleFile*))List__Uno_BundleFile__Add;

        type->Implements[0] = ::app::Uno::Collections::IList__Uno_BundleFile__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Uno_BundleFile__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Uno_BundleFile__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Uno_BundleFile__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Uno_BundleFile, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Uno_BundleFile__get_Count(List__Uno_BundleFile* __this)
{
    return __this->_used;
}

::app::Uno::BundleFile* List__Uno_BundleFile__get_Item(List__Uno_BundleFile* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::BundleFile*>(index);
}

void List__Uno_BundleFile__set_Item(List__Uno_BundleFile* __this, int index, ::app::Uno::BundleFile* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::BundleFile*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Uno_BundleFile List__Uno_BundleFile__GetEnumerator(List__Uno_BundleFile* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_BundleFile__New_1(NULL, __this);
}

void List__Uno_BundleFile__BoundsCheck(List__Uno_BundleFile* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_BundleFile__EnsureCapacity(List__Uno_BundleFile* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::BundleFile__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::BundleFile__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::BundleFile*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::BundleFile*>(i);
        }

        __this->_data = newData;
    }
}

void List__Uno_BundleFile__Add(List__Uno_BundleFile* __this, ::app::Uno::BundleFile* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::BundleFile*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_BundleFile___ObjInit(List__Uno_BundleFile* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_BundleFile* List__Uno_BundleFile__New_1(::uStatic* __this)
{
    List__Uno_BundleFile* inst = (::app::Uno::Collections::List__Uno_BundleFile*)::uAllocObject(sizeof(::app::Uno::Collections::List__Uno_BundleFile), ::app::Uno::Collections::List__Uno_BundleFile__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
