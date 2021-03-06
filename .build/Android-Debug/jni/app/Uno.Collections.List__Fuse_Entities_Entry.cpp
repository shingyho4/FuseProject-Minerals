// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Entities_Entry__uType* List__Fuse_Entities_Entry__typeof()
{
    static List__Fuse_Entities_Entry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Entities_Entry__uType*)::uAllocClassType(sizeof(List__Fuse_Entities_Entry__uType), "Uno.Collections.List<Fuse.Entities.Entry>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Entities_Entry, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Entities_Entry__get_Count(List__Fuse_Entities_Entry* __this)
{
    return __this->_used;
}

::app::Fuse::Entities::Entry List__Fuse_Entities_Entry__get_Item(List__Fuse_Entities_Entry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entry>(index);
}

void List__Fuse_Entities_Entry__set_Item(List__Fuse_Entities_Entry* __this, int index, ::app::Fuse::Entities::Entry value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entry>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry List__Fuse_Entities_Entry__GetEnumerator(List__Fuse_Entities_Entry* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry__New_1(NULL, __this);
}

void List__Fuse_Entities_Entry__BoundsCheck(List__Fuse_Entities_Entry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Entities_Entry__EnsureCapacity(List__Fuse_Entities_Entry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Entities::Entry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Entities::Entry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Fuse::Entities::Entry>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entry>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Entities_Entry__Add(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entry>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Entities_Entry___ObjInit(List__Fuse_Entities_Entry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Entities_Entry* List__Fuse_Entities_Entry__New_1(::uStatic* __this)
{
    List__Fuse_Entities_Entry* inst = (::app::Uno::Collections::List__Fuse_Entities_Entry*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Entities_Entry), ::app::Uno::Collections::List__Fuse_Entities_Entry__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
