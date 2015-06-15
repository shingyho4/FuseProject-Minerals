// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.WordWrapperWord.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Internal_WordWrapperWord.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Internal_WordWrapperWord__uType* List__Fuse_Internal_WordWrapperWord__typeof()
{
    static List__Fuse_Internal_WordWrapperWord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Internal_WordWrapperWord__uType*)::uAllocClassType(sizeof(List__Fuse_Internal_WordWrapperWord__uType), "Uno.Collections.List<Fuse.Internal.WordWrapperWord>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Internal_WordWrapperWord, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Internal_WordWrapperWord__get_Count(List__Fuse_Internal_WordWrapperWord* __this)
{
    return __this->_used;
}

::app::Fuse::Internal::WordWrapperWord* List__Fuse_Internal_WordWrapperWord__get_Item(List__Fuse_Internal_WordWrapperWord* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::WordWrapperWord*>(index);
}

void List__Fuse_Internal_WordWrapperWord__set_Item(List__Fuse_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Internal::WordWrapperWord* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Internal::WordWrapperWord*>(index) = value;
    __this->_version++;
}

void List__Fuse_Internal_WordWrapperWord__BoundsCheck(List__Fuse_Internal_WordWrapperWord* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Internal_WordWrapperWord__EnsureCapacity(List__Fuse_Internal_WordWrapperWord* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Internal::WordWrapperWord__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Internal::WordWrapperWord__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Internal::WordWrapperWord*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::WordWrapperWord*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Internal_WordWrapperWord__Add(List__Fuse_Internal_WordWrapperWord* __this, ::app::Fuse::Internal::WordWrapperWord* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Internal::WordWrapperWord*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Internal_WordWrapperWord___ObjInit(List__Fuse_Internal_WordWrapperWord* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Internal_WordWrapperWord* List__Fuse_Internal_WordWrapperWord__New_1(::uStatic* __this)
{
    List__Fuse_Internal_WordWrapperWord* inst = (::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord), ::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
