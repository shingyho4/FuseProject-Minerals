// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.RenderTargetEntry.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_RenderTargetEntry.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof()
{
    static List__Fuse_RenderTargetEntry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_RenderTargetEntry__uType*)::uAllocClassType(sizeof(List__Fuse_RenderTargetEntry__uType), "Uno.Collections.List<Fuse.RenderTargetEntry>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_RenderTargetEntry__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::RenderTargetEntry*(*)(void*, int))List__Fuse_RenderTargetEntry__get_Item;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_RenderTargetEntry__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_RenderTargetEntry__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_RenderTargetEntry__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_RenderTargetEntry__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_RenderTargetEntry, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_RenderTargetEntry__get_Count(List__Fuse_RenderTargetEntry* __this)
{
    return __this->_used;
}

::app::Fuse::RenderTargetEntry* List__Fuse_RenderTargetEntry__get_Item(List__Fuse_RenderTargetEntry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(index);
}

void List__Fuse_RenderTargetEntry__set_Item(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(index) = value;
    __this->_version++;
}

void List__Fuse_RenderTargetEntry__BoundsCheck(List__Fuse_RenderTargetEntry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_RenderTargetEntry__EnsureCapacity(List__Fuse_RenderTargetEntry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::RenderTargetEntry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::RenderTargetEntry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::RenderTargetEntry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_RenderTargetEntry__Add(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_RenderTargetEntry__RemoveAt(List__Fuse_RenderTargetEntry* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_RenderTargetEntry___ObjInit(List__Fuse_RenderTargetEntry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_1(::uStatic* __this)
{
    List__Fuse_RenderTargetEntry* inst = (::app::Uno::Collections::List__Fuse_RenderTargetEntry*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_RenderTargetEntry), ::app::Uno::Collections::List__Fuse_RenderTargetEntry__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
