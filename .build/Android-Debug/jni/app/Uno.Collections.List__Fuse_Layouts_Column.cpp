// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Layouts_Column__uType* List__Fuse_Layouts_Column__typeof()
{
    static List__Fuse_Layouts_Column__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Layouts_Column__uType*)::uAllocClassType(sizeof(List__Fuse_Layouts_Column__uType), "Uno.Collections.List<Fuse.Layouts.Column>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Layouts_Column__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Column*(*)(void*, int))List__Fuse_Layouts_Column__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Column*))List__Fuse_Layouts_Column__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Layouts_Column__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Layouts_Column__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Layouts_Column__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Layouts_Column__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Layouts_Column, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Layouts_Column__get_Count(List__Fuse_Layouts_Column* __this)
{
    return __this->_used;
}

::app::Fuse::Layouts::Column* List__Fuse_Layouts_Column__get_Item(List__Fuse_Layouts_Column* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(index);
}

void List__Fuse_Layouts_Column__set_Item(List__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(index) = value;
    __this->_version++;
}

void List__Fuse_Layouts_Column__BoundsCheck(List__Fuse_Layouts_Column* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Layouts_Column__EnsureCapacity(List__Fuse_Layouts_Column* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Layouts::Column__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Layouts::Column__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Layouts::Column*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Layouts_Column__Add(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Layouts_Column__Remove(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Layouts_Column(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Layouts_Column__RemoveAt(List__Fuse_Layouts_Column* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Layouts_Column___ObjInit(List__Fuse_Layouts_Column* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Layouts_Column* List__Fuse_Layouts_Column__New_1(::uStatic* __this)
{
    List__Fuse_Layouts_Column* inst = (::app::Uno::Collections::List__Fuse_Layouts_Column*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Layouts_Column), ::app::Uno::Collections::List__Fuse_Layouts_Column__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
