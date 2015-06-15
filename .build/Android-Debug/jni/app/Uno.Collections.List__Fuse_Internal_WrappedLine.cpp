// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Internal_WrappedLine.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Internal_WrappedLine__uType* List__Fuse_Internal_WrappedLine__typeof()
{
    static List__Fuse_Internal_WrappedLine__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(List__Fuse_Internal_WrappedLine__uType), "Uno.Collections.List<Fuse.Internal.WrappedLine>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Internal_WrappedLine, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Internal_WrappedLine__get_Count(List__Fuse_Internal_WrappedLine* __this)
{
    return __this->_used;
}

::uArray* List__Fuse_Internal_WrappedLine__ToArray(List__Fuse_Internal_WrappedLine* __this)
{
    ::uArray* t = ::uNewArray(::app::Fuse::Internal::WrappedLine__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::app::Fuse::Internal::WrappedLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::WrappedLine*>(i);
    }

    return t;
}

void List__Fuse_Internal_WrappedLine__EnsureCapacity(List__Fuse_Internal_WrappedLine* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Internal::WrappedLine__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Internal::WrappedLine__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Internal::WrappedLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::WrappedLine*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Internal_WrappedLine__Add(List__Fuse_Internal_WrappedLine* __this, ::app::Fuse::Internal::WrappedLine* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Internal::WrappedLine*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Internal_WrappedLine___ObjInit(List__Fuse_Internal_WrappedLine* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Internal_WrappedLine* List__Fuse_Internal_WrappedLine__New_1(::uStatic* __this)
{
    List__Fuse_Internal_WrappedLine* inst = (::app::Uno::Collections::List__Fuse_Internal_WrappedLine*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Internal_WrappedLine), ::app::Uno::Collections::List__Fuse_Internal_WrappedLine__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
