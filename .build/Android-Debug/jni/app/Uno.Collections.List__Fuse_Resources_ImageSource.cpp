// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Resources_ImageSource__uType* List__Fuse_Resources_ImageSource__typeof()
{
    static List__Fuse_Resources_ImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(List__Fuse_Resources_ImageSource__uType), "Uno.Collections.List<Fuse.Resources.ImageSource>", ::uObject__typeof(), 3, 1);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Resources::ImageSource*))List__Fuse_Resources_ImageSource__Add;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Resources_ImageSource__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Resources_ImageSource__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Resources_ImageSource__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List__Fuse_Resources_ImageSource__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Resources_ImageSource, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource__GetEnumerator(List__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__New_1(NULL, __this);
}

void List__Fuse_Resources_ImageSource__EnsureCapacity(List__Fuse_Resources_ImageSource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Resources::ImageSource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Resources::ImageSource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Resources::ImageSource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Resources::ImageSource*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Resources_ImageSource__Add(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Resources::ImageSource*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Resources_ImageSource___ObjInit(List__Fuse_Resources_ImageSource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Resources_ImageSource* List__Fuse_Resources_ImageSource__New_1(::uStatic* __this)
{
    List__Fuse_Resources_ImageSource* inst = (::app::Uno::Collections::List__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Resources_ImageSource), ::app::Uno::Collections::List__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Resources_ImageSource__GetEnumerator_boxed(List__Fuse_Resources_ImageSource* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof(), __this->GetEnumerator());
}

}}}
