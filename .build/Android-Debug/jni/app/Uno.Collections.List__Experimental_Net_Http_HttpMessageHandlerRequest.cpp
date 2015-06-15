// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List__Experimental_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Experimental_Net_Http_HttpMessageHandlerRequest__uType* List__Experimental_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static List__Experimental_Net_Http_HttpMessageHandlerRequest__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Experimental_Net_Http_HttpMessageHandlerRequest__uType*)::uAllocClassType(sizeof(List__Experimental_Net_Http_HttpMessageHandlerRequest__uType), "Uno.Collections.List<Experimental.Net.Http.HttpMessageHandlerRequest>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Experimental_Net_Http_HttpMessageHandlerRequest, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Count(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    return __this->_used;
}

::app::Experimental::Net::Http::HttpMessageHandlerRequest* List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Item(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(index);
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest__set_Item(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest List__Experimental_Net_Http_HttpMessageHandlerRequest__GetEnumerator(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(NULL, __this);
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest__BoundsCheck(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Experimental::Net::Http::HttpMessageHandlerRequest__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Experimental::Net::Http::HttpMessageHandlerRequest__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(i);
        }

        __this->_data = newData;
    }
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest__Add(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Experimental_Net_Http_HttpMessageHandlerRequest__Remove(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest__RemoveAt(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Experimental_Net_Http_HttpMessageHandlerRequest* List__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this)
{
    List__Experimental_Net_Http_HttpMessageHandlerRequest* inst = (::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*)::uAllocObject(sizeof(::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest), ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
