// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Input_Pointer_PELHolder__uType* List__Fuse_Input_Pointer_PELHolder__typeof()
{
    static List__Fuse_Input_Pointer_PELHolder__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Input_Pointer_PELHolder__uType*)::uAllocClassType(sizeof(List__Fuse_Input_Pointer_PELHolder__uType), "Uno.Collections.List<Fuse.Input.Pointer_PELHolder>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Input_Pointer_PELHolder, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Input_Pointer_PELHolder__get_Count(List__Fuse_Input_Pointer_PELHolder* __this)
{
    return __this->_used;
}

::app::Fuse::Input::Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__get_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(index);
}

void List__Fuse_Input_Pointer_PELHolder__set_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index, ::app::Fuse::Input::Pointer_PELHolder* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(index) = value;
    __this->_version++;
}

void List__Fuse_Input_Pointer_PELHolder__BoundsCheck(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(List__Fuse_Input_Pointer_PELHolder* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Input::Pointer_PELHolder__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Input::Pointer_PELHolder__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Input_Pointer_PELHolder__Add(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Input_Pointer_PELHolder__RemoveAt(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Input_Pointer_PELHolder___ObjInit(List__Fuse_Input_Pointer_PELHolder* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Input_Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__New_1(::uStatic* __this)
{
    List__Fuse_Input_Pointer_PELHolder* inst = (::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder), ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
