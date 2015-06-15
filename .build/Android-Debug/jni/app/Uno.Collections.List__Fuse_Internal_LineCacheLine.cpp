// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.LineCacheLine.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Internal_LineCacheLine__uType* List__Fuse_Internal_LineCacheLine__typeof()
{
    static List__Fuse_Internal_LineCacheLine__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Internal_LineCacheLine__uType*)::uAllocClassType(sizeof(List__Fuse_Internal_LineCacheLine__uType), "Uno.Collections.List<Fuse.Internal.LineCacheLine>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Internal_LineCacheLine__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Internal_LineCacheLine__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Internal_LineCacheLine__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Internal_LineCacheLine, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Internal_LineCacheLine__get_Count(List__Fuse_Internal_LineCacheLine* __this)
{
    return __this->_used;
}

::app::Fuse::Internal::LineCacheLine* List__Fuse_Internal_LineCacheLine__get_Item(List__Fuse_Internal_LineCacheLine* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::LineCacheLine*>(index);
}

void List__Fuse_Internal_LineCacheLine__set_Item(List__Fuse_Internal_LineCacheLine* __this, int index, ::app::Fuse::Internal::LineCacheLine* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Internal::LineCacheLine*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine List__Fuse_Internal_LineCacheLine__GetEnumerator(List__Fuse_Internal_LineCacheLine* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine__New_1(NULL, __this);
}

void List__Fuse_Internal_LineCacheLine__BoundsCheck(List__Fuse_Internal_LineCacheLine* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Internal_LineCacheLine__EnsureCapacity(List__Fuse_Internal_LineCacheLine* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Internal::LineCacheLine__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Internal::LineCacheLine__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Internal::LineCacheLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Internal::LineCacheLine*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Internal_LineCacheLine__Add(List__Fuse_Internal_LineCacheLine* __this, ::app::Fuse::Internal::LineCacheLine* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Internal::LineCacheLine*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Internal_LineCacheLine___ObjInit(List__Fuse_Internal_LineCacheLine* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Internal_LineCacheLine* List__Fuse_Internal_LineCacheLine__New_1(::uStatic* __this)
{
    List__Fuse_Internal_LineCacheLine* inst = (::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Internal_LineCacheLine), ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Internal_LineCacheLine__GetEnumerator_boxed(List__Fuse_Internal_LineCacheLine* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine__typeof(), __this->GetEnumerator());
}

}}}
