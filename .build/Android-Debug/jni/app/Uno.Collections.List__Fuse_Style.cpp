// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Style.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Style__uType* List__Fuse_Style__typeof()
{
    static List__Fuse_Style__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Style__uType*)::uAllocClassType(sizeof(List__Fuse_Style__uType), "Uno.Collections.List<Fuse.Style>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Style*(*)(void*, int))List__Fuse_Style__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Style*))List__Fuse_Style__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Style__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Style__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Style__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Style__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Style__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Style, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Style__get_Count(List__Fuse_Style* __this)
{
    return __this->_used;
}

::app::Fuse::Style* List__Fuse_Style__get_Item(List__Fuse_Style* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(index);
}

void List__Fuse_Style__set_Item(List__Fuse_Style* __this, int index, ::app::Fuse::Style* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(index) = value;
    __this->_version++;
}

void List__Fuse_Style__BoundsCheck(List__Fuse_Style* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Style__EnsureCapacity(List__Fuse_Style* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Style__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Style__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Style*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Style__Add(List__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Style___ObjInit(List__Fuse_Style* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Style* List__Fuse_Style__New_1(::uStatic* __this)
{
    List__Fuse_Style* inst = (::app::Uno::Collections::List__Fuse_Style*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Style), ::app::Uno::Collections::List__Fuse_Style__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
