// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Row.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Layouts_Row__uType* List__Fuse_Layouts_Row__typeof()
{
    static List__Fuse_Layouts_Row__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Layouts_Row__uType*)::uAllocClassType(sizeof(List__Fuse_Layouts_Row__uType), "Uno.Collections.List<Fuse.Layouts.Row>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Layouts_Row__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Row*(*)(void*, int))List__Fuse_Layouts_Row__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Row*))List__Fuse_Layouts_Row__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Layouts_Row__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Layouts_Row__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Layouts_Row__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Layouts_Row, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Layouts_Row__get_Count(List__Fuse_Layouts_Row* __this)
{
    return __this->_used;
}

::app::Fuse::Layouts::Row* List__Fuse_Layouts_Row__get_Item(List__Fuse_Layouts_Row* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(index);
}

void List__Fuse_Layouts_Row__set_Item(List__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(index) = value;
    __this->_version++;
}

void List__Fuse_Layouts_Row__BoundsCheck(List__Fuse_Layouts_Row* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Layouts_Row__EnsureCapacity(List__Fuse_Layouts_Row* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Layouts::Row__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Layouts::Row__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Layouts::Row*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Layouts_Row__Add(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Layouts_Row__Remove(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Layouts_Row(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Layouts_Row__RemoveAt(List__Fuse_Layouts_Row* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Layouts_Row___ObjInit(List__Fuse_Layouts_Row* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Layouts_Row* List__Fuse_Layouts_Row__New_1(::uStatic* __this)
{
    List__Fuse_Layouts_Row* inst = (::app::Uno::Collections::List__Fuse_Layouts_Row*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Layouts_Row), ::app::Uno::Collections::List__Fuse_Layouts_Row__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
