// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Animations_MixerHandle_float4___uType* List__Fuse_Animations_MixerHandle_float4___typeof()
{
    static List__Fuse_Animations_MixerHandle_float4___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Animations_MixerHandle_float4___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_float4___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<float4>>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Animations_MixerHandle_float4_, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Animations_MixerHandle_float4___get_Count(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__float4* List__Fuse_Animations_MixerHandle_float4___get_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(index);
}

void List__Fuse_Animations_MixerHandle_float4___set_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List__Fuse_Animations_MixerHandle_float4___GetEnumerator(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_float4___BoundsCheck(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_float4___EnsureCapacity(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__float4__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__float4__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Animations_MixerHandle_float4___Insert(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(index) = item;
    __this->_version++;
    __this->_used++;
}

bool List__Fuse_Animations_MixerHandle_float4___Remove(List__Fuse_Animations_MixerHandle_float4_* __this, ::app::Fuse::Animations::MixerHandle__float4* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_float4_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_float4___RemoveAt(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_float4____ObjInit(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Animations_MixerHandle_float4_* List__Fuse_Animations_MixerHandle_float4___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_float4_* inst = (::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_), ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4___typeof());
    inst->_ObjInit();
    return inst;
}

}}}
