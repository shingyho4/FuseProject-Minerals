// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Collections.List__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof()
{
    static List__Fuse_Animations_IMixerMaster__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(List__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.List<Fuse.Animations.IMixerMaster>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Animations_IMixerMaster, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Animations_IMixerMaster__get_Count(List__Fuse_Animations_IMixerMaster* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster List__Fuse_Animations_IMixerMaster__GetEnumerator(List__Fuse_Animations_IMixerMaster* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster__New_1(NULL, __this);
}

void List__Fuse_Animations_IMixerMaster__BoundsCheck(List__Fuse_Animations_IMixerMaster* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_IMixerMaster__EnsureCapacity(List__Fuse_Animations_IMixerMaster* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::IMixerMaster__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::IMixerMaster__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Animations_IMixerMaster__Add(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Animations_IMixerMaster__Remove(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_IMixerMaster(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_IMixerMaster__RemoveAt(List__Fuse_Animations_IMixerMaster* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_IMixerMaster__Clear(List__Fuse_Animations_IMixerMaster* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

bool List__Fuse_Animations_IMixerMaster__Contains(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_IMixerMaster(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_IMixerMaster___ObjInit(List__Fuse_Animations_IMixerMaster* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this)
{
    List__Fuse_Animations_IMixerMaster* inst = (::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Animations_IMixerMaster), ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
