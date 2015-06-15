// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_NET_HTTP_HTTP_MES_7D547FBF_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_NET_HTTP_HTTP_MES_7D547FBF_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Net_Http_HttpMessageHandlerRequest; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest;

struct List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__typeof();

::app::Experimental::Net::Http::HttpMessageHandlerRequest* List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__get_Current(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
void List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__Dispose(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
bool List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__MoveNext(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
void List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest* source);
List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest* source);

struct List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest
{
    ::uStrong< ::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*> _current;

    void Dispose() { List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Experimental_Net_Http_HttpMessageHandlerRequest* source) { List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(this, source); }
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* Current() { return List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__get_Current(this); }

    List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest& operator =(const List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
