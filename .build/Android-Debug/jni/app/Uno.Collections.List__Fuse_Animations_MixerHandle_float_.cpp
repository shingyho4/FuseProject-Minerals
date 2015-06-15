// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Animations_MixerHandle_float___uType* List__Fuse_Animations_MixerHandle_float___typeof()
{
    static List__Fuse_Animations_MixerHandle_float___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Animations_MixerHandle_float___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_float___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<float>>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Animations_MixerHandle_float_, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Animations_MixerHandle_float___get_Count(List__Fuse_Animations_MixerHandle_float_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__float* List__Fuse_Animations_MixerHandle_float___get_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(index);
}

void List__Fuse_Animations_MixerHandle_float___set_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ List__Fuse_Animations_MixerHandle_float___GetEnumerator(List__Fuse_Animations_MixerHandle_float_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_float___BoundsCheck(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_float___EnsureCapacity(List__Fuse_Animations_MixerHandle_float_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__float__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__float__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Animations_MixerHandle_float___Insert(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(index) = item;
    __this->_version++;
    __this->_used++;
}

bool List__Fuse_Animations_MixerHandle_float___Remove(List__Fuse_Animations_MixerHandle_float_* __this, ::app::Fuse::Animations::MixerHandle__float* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_float_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_float___RemoveAt(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_float____ObjInit(List__Fuse_Animations_MixerHandle_float_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Animations_MixerHandle_float_* List__Fuse_Animations_MixerHandle_float___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_float_* inst = (::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_), ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float___typeof());
    inst->_ObjInit();
    return inst;
}

}}}
