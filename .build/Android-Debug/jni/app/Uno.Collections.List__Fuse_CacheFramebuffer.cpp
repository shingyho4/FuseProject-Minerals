// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CacheFramebuffer.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_CacheFramebuffer__uType* List__Fuse_CacheFramebuffer__typeof()
{
    static List__Fuse_CacheFramebuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_CacheFramebuffer__uType*)::uAllocClassType(sizeof(List__Fuse_CacheFramebuffer__uType), "Uno.Collections.List<Fuse.CacheFramebuffer>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_CacheFramebuffer, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_CacheFramebuffer__get_Count(List__Fuse_CacheFramebuffer* __this)
{
    return __this->_used;
}

::app::Fuse::CacheFramebuffer* List__Fuse_CacheFramebuffer__get_Item(List__Fuse_CacheFramebuffer* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(index);
}

void List__Fuse_CacheFramebuffer__set_Item(List__Fuse_CacheFramebuffer* __this, int index, ::app::Fuse::CacheFramebuffer* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer List__Fuse_CacheFramebuffer__GetEnumerator(List__Fuse_CacheFramebuffer* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer__New_1(NULL, __this);
}

void List__Fuse_CacheFramebuffer__BoundsCheck(List__Fuse_CacheFramebuffer* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_CacheFramebuffer__EnsureCapacity(List__Fuse_CacheFramebuffer* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::CacheFramebuffer__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::CacheFramebuffer__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::CacheFramebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_CacheFramebuffer__Add(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_CacheFramebuffer__Remove(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_CacheFramebuffer(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_CacheFramebuffer__RemoveAt(List__Fuse_CacheFramebuffer* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_CacheFramebuffer___ObjInit(List__Fuse_CacheFramebuffer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_CacheFramebuffer* List__Fuse_CacheFramebuffer__New_1(::uStatic* __this)
{
    List__Fuse_CacheFramebuffer* inst = (::app::Uno::Collections::List__Fuse_CacheFramebuffer*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_CacheFramebuffer), ::app::Uno::Collections::List__Fuse_CacheFramebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
