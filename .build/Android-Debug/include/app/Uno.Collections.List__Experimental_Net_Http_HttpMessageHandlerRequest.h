// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Experimental_Net_Http_HttpMessageHandlerRequest;

struct List__Experimental_Net_Http_HttpMessageHandlerRequest__uType : ::uClassType
{
};

List__Experimental_Net_Http_HttpMessageHandlerRequest__uType* List__Experimental_Net_Http_HttpMessageHandlerRequest__typeof();

int List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Count(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
::app::Experimental::Net::Http::HttpMessageHandlerRequest* List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Item(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Experimental_Net_Http_HttpMessageHandlerRequest__set_Item(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* value);
::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest List__Experimental_Net_Http_HttpMessageHandlerRequest__GetEnumerator(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
void List__Experimental_Net_Http_HttpMessageHandlerRequest__BoundsCheck(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Experimental_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
void List__Experimental_Net_Http_HttpMessageHandlerRequest__Add(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* item);
bool List__Experimental_Net_Http_HttpMessageHandlerRequest__Remove(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* item);
void List__Experimental_Net_Http_HttpMessageHandlerRequest__RemoveAt(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(List__Experimental_Net_Http_HttpMessageHandlerRequest* __this);
List__Experimental_Net_Http_HttpMessageHandlerRequest* List__Experimental_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this);

struct List__Experimental_Net_Http_HttpMessageHandlerRequest : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest GetEnumerator();
    void BoundsCheck(int index) { List__Experimental_Net_Http_HttpMessageHandlerRequest__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Experimental_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(this); }
    void Add(::app::Experimental::Net::Http::HttpMessageHandlerRequest* item) { List__Experimental_Net_Http_HttpMessageHandlerRequest__Add(this, item); }
    bool Remove(::app::Experimental::Net::Http::HttpMessageHandlerRequest* item) { return List__Experimental_Net_Http_HttpMessageHandlerRequest__Remove(this, item); }
    void RemoveAt(int index) { List__Experimental_Net_Http_HttpMessageHandlerRequest__RemoveAt(this, index); }
    void _ObjInit() { List__Experimental_Net_Http_HttpMessageHandlerRequest___ObjInit(this); }
    int Count() { return List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Count(this); }
    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* Item(int index) { return List__Experimental_Net_Http_HttpMessageHandlerRequest__get_Item(this, index); }
    void Item(int index, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* value) { List__Experimental_Net_Http_HttpMessageHandlerRequest__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Net_Http_HttpMes-7d547fbf.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Experimental_Net_Http_HttpMessageHandlerRequest List__Experimental_Net_Http_HttpMessageHandlerRequest::GetEnumerator() { return List__Experimental_Net_Http_HttpMessageHandlerRequest__GetEnumerator(this); }

}}}


#endif
