// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List__Experimental_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Net_Http_HttpMes-7d547fbf.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType*)::uAllocValueType(sizeof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType), "Uno.Collections.List1_Enumerator<Experimental.Net.Http.HttpMessageHandlerRequest>", sizeof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Experimental::Net::Http::HttpMessageHandlerRequest* List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__get_Current(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    return __this->_current;
}

void List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__Dispose(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
}

bool List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__MoveNext(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_data)->Item< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest* source)
{
    List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest inst = ::uDefault< List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest>();
    inst._ObjInit(source);
    return inst;
}

}}}
