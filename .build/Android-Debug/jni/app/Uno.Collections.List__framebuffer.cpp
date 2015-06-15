// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__framebuffer.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__framebuffer__uType* List__framebuffer__typeof()
{
    static List__framebuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__framebuffer__uType*)::uAllocClassType(sizeof(List__framebuffer__uType), "Uno.Collections.List<framebuffer>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__framebuffer, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__framebuffer__get_Count(List__framebuffer* __this)
{
    return __this->_used;
}

::app::Uno::Graphics::Framebuffer* List__framebuffer__get_Item(List__framebuffer* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(index);
}

void List__framebuffer__set_Item(List__framebuffer* __this, int index, ::app::Uno::Graphics::Framebuffer* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(index) = value;
    __this->_version++;
}

void List__framebuffer__BoundsCheck(List__framebuffer* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__framebuffer__EnsureCapacity(List__framebuffer* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Graphics::Framebuffer__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Graphics::Framebuffer__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(i);
        }

        __this->_data = newData;
    }
}

void List__framebuffer__Add(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(__this->_used++) = item;
    __this->_version++;
}

void List__framebuffer__RemoveAt(List__framebuffer* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(__this->_used) = NULL;
    __this->_version++;
}

void List__framebuffer___ObjInit(List__framebuffer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__framebuffer* List__framebuffer__New_1(::uStatic* __this)
{
    List__framebuffer* inst = (::app::Uno::Collections::List__framebuffer*)::uAllocObject(sizeof(::app::Uno::Collections::List__framebuffer), ::app::Uno::Collections::List__framebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
