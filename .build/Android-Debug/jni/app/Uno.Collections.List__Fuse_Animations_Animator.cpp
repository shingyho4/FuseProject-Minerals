// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof()
{
    static List__Fuse_Animations_Animator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Animations_Animator__uType*)::uAllocClassType(sizeof(List__Fuse_Animations_Animator__uType), "Uno.Collections.List<Fuse.Animations.Animator>", ::uObject__typeof(), 2, 1);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Animations::Animator*))List__Fuse_Animations_Animator__Add;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Animations_Animator__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Animations_Animator__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Animations_Animator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Animations_Animator__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Animations_Animator, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Animations_Animator__get_Count(List__Fuse_Animations_Animator* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::Animator* List__Fuse_Animations_Animator__get_Item(List__Fuse_Animations_Animator* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::Animator*>(index);
}

void List__Fuse_Animations_Animator__set_Item(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::Animator*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator List__Fuse_Animations_Animator__GetEnumerator(List__Fuse_Animations_Animator* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator__New_1(NULL, __this);
}

void List__Fuse_Animations_Animator__BoundsCheck(List__Fuse_Animations_Animator* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_Animator__EnsureCapacity(List__Fuse_Animations_Animator* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::Animator__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::Animator__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::Animator*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::Animator*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Animations_Animator__Add(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::Animator*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Animations_Animator___ObjInit(List__Fuse_Animations_Animator* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_1(::uStatic* __this)
{
    List__Fuse_Animations_Animator* inst = (::app::Uno::Collections::List__Fuse_Animations_Animator*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Animations_Animator), ::app::Uno::Collections::List__Fuse_Animations_Animator__typeof());
    inst->_ObjInit();
    return inst;
}

}}}