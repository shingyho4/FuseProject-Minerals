// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.UpdateListener.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_UpdateListener__uType* List__Fuse_UpdateListener__typeof()
{
    static List__Fuse_UpdateListener__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_UpdateListener__uType*)::uAllocClassType(sizeof(List__Fuse_UpdateListener__uType), "Uno.Collections.List<Fuse.UpdateListener>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_UpdateListener, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_UpdateListener__get_Count(List__Fuse_UpdateListener* __this)
{
    return __this->_used;
}

::app::Fuse::UpdateListener* List__Fuse_UpdateListener__get_Item(List__Fuse_UpdateListener* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(index);
}

void List__Fuse_UpdateListener__set_Item(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener List__Fuse_UpdateListener__GetEnumerator(List__Fuse_UpdateListener* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener__New_1(NULL, __this);
}

void List__Fuse_UpdateListener__BoundsCheck(List__Fuse_UpdateListener* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_UpdateListener__EnsureCapacity(List__Fuse_UpdateListener* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::UpdateListener__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::UpdateListener__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::UpdateListener*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_UpdateListener__Add(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_UpdateListener__RemoveAt(List__Fuse_UpdateListener* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_UpdateListener__Clear(List__Fuse_UpdateListener* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_UpdateListener___ObjInit(List__Fuse_UpdateListener* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_UpdateListener* List__Fuse_UpdateListener__New_1(::uStatic* __this)
{
    List__Fuse_UpdateListener* inst = (::app::Uno::Collections::List__Fuse_UpdateListener*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_UpdateListener), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
