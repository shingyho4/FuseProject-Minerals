// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Cache.CacheLoaded.h>
#include <app/Experimental.Cache.ICache.h>
#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Experimental.Cache.ICacheWriter.h>
#include <app/Experimental.Http.BinaryLoader.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Experimental.Http.Internal.DateUtil.h>
#include <app/Experimental.Net.Http.HttpMessageHandler.h>
#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__Experimental_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Experimental_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Http {

::uStaticStrong< ::app::Experimental::Net::Http::HttpMessageHandler*> BinaryLoader___handler;

BinaryLoader__uType* BinaryLoader__typeof()
{
    static BinaryLoader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BinaryLoader__uType*)::uAllocClassType(sizeof(BinaryLoader__uType), "Experimental.Http.BinaryLoader", ::uObject__typeof(), 0, 7);
        type->StrongRefOffsets[0] = offsetof(BinaryLoader, Callback);
        type->StrongRefOffsets[1] = offsetof(BinaryLoader, ErrorCallback);
        type->StrongRefOffsets[2] = offsetof(BinaryLoader, Cache);
        type->StrongRefOffsets[3] = offsetof(BinaryLoader, Uri);
        type->StrongRefOffsets[4] = offsetof(BinaryLoader, Method);
        type->StrongRefOffsets[5] = offsetof(BinaryLoader, _header);
        type->StrongRefOffsets[6] = offsetof(BinaryLoader, _cacheRecord);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Callback";
        type->StrongRefNames[1] = "ErrorCallback";
        type->StrongRefNames[2] = "Cache";
        type->StrongRefNames[3] = "Uri";
        type->StrongRefNames[4] = "Method";
        type->StrongRefNames[5] = "_header";
        type->StrongRefNames[6] = "_cacheRecord";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BinaryLoader__Initiate(BinaryLoader* __this)
{
    if (__this->Cache != NULL)
    {
        bool has = ::app::Experimental::Cache::ICache::LoadRecord(::uPtr< ::uObject*>(__this->Cache), BinaryLoader__ConstructRecordId(NULL, __this->Method, __this->Uri), ::uNewDelegateNonVirt(::app::Experimental::Cache::CacheLoaded__typeof(), (const void*)::app::Experimental::Http::BinaryLoader__OnCacheReady, __this));

        if (!has)
        {
            __this->MakeRequest();
        }
    }
    else
    {
        __this->MakeRequest();
    }
}

void BinaryLoader__MakeRequest(BinaryLoader* __this)
{
    if (BinaryLoader___handler == NULL)
    {
        BinaryLoader___handler = ::app::Experimental::Net::Http::HttpMessageHandler__New_1(NULL);
    }

    ::app::Experimental::Net::Http::HttpMessageHandlerRequest* request = ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandler*>(BinaryLoader___handler)->CreateRequest(__this->Method, __this->Uri);
    ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(request)->add_Error(::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_HttpMessageHandlerRequest__string__typeof(), (const void*)::app::Experimental::Http::BinaryLoader__OnError, __this));
    request->add_Done(::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Net_Http_HttpMessageHandlerRequest__typeof(), (const void*)::app::Experimental::Http::BinaryLoader__OnLoaded, __this));

    if (__this->_cacheRecord != NULL)
    {
        ::uString* etag = ::app::Experimental::Cache::ICacheReader::GetMeta(::uPtr< ::uObject*>(__this->_cacheRecord), ::uGetConstString("etag"));

        if (::app::Uno::String__op_Inequality(NULL, etag, NULL))
        {
            ::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(request)->SetHeader(::uGetConstString("If-None-Match"), etag);
        }
    }

    request->SetResponseType(1);
    request->SendAsync_2();
}

void BinaryLoader__OnLoaded(BinaryLoader* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* resp)
{
    if ((__this->_cacheRecord != NULL) && (::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseStatus() == 304))
    {
        if (__this->LoadCache(__this->_cacheRecord))
        {
            return;
        }
    }

    __this->_header = ::app::Experimental::Http::HttpResponseHeader__New_1(NULL);
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->StatusCode(::uPtr< ::app::Experimental::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseStatus());
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers(__this->ExtractHeaders(resp->GetResponseHeaders()));
    __this->OnBufferLoaded(resp->GetResponseContentByteArray());
}

::app::Uno::Collections::Dictionary__string__string* BinaryLoader__ExtractHeaders(BinaryLoader* __this, ::uString* headers)
{
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Collections::Dictionary__string__string* res = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);

    for (array_123 = ::app::Uno::String::Split(::uPtr< ::uString*>(headers), (array_126 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_126)->Item< ::uChar>(0) = 10, array_126)), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uString* header = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);

        if (!::app::Uno::String__IsNullOrEmpty(NULL, ::app::Uno::String::Trim(::uPtr< ::uString*>(header))))
        {
            ::uArray* arr = ::app::Uno::String::Split(::uPtr< ::uString*>(header), (array_127 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_127)->Item< ::uChar>(0) = ':', array_127));
            ::uString* actualValue = (::uPtr< ::uArray*>(arr)->Length() > 1) ? ::app::Uno::String::Trim(::uPtr< ::uString*>(::app::Uno::String::Substring_1(header, ::app::Uno::String::IndexOf_1(header, ::uGetConstString(":"), 0) + 1))) : ::app::Uno::String__Empty;
            ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(res)->Add(::app::Uno::String::ToLower(::uPtr< ::uString*>(::app::Uno::String::Trim(::uPtr< ::uString*>(arr->Item< ::uString*>(0))))), actualValue);
        }
    }

    return res;
}

::uString* BinaryLoader__ConstructRecordId(::uStatic* __this, ::uString* method, ::uString* uri)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, method, ::uGetConstString(" ")), uri);
}

void BinaryLoader__OnBufferLoaded(BinaryLoader* __this, ::uArray* data)
{
    if ((__this->Cache != NULL) && ::app::Uno::String__op_Equality(NULL, __this->Method, ::uGetConstString("GET")))
    {
        ::uObject* record = ::app::Experimental::Cache::ICache::CreateRecord(::uPtr< ::uObject*>(__this->Cache), BinaryLoader__ConstructRecordId(NULL, __this->Method, __this->Uri));
        ::app::Uno::IO::Stream* stream = ::app::Experimental::Cache::ICacheWriter::Stream(::uPtr< ::uObject*>(record));
        ::app::Uno::IO::BinaryWriter* writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, stream);
        ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Write(writer);
        ::uPtr< ::app::Uno::IO::Stream*>(stream)->Write(data, 0, ::uPtr< ::uArray*>(data)->Length());
        ::app::Experimental::Cache::ICacheWriter::AddMeta(record, ::uGetConstString("updated"), ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString(""), ::uBox< int>(::app::Uno::Int__typeof(), ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL))));

        if (::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers())->ContainsKey(::uGetConstString("etag")))
        {
            ::app::Experimental::Cache::ICacheWriter::AddMeta(record, ::uGetConstString("etag"), ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers())->Item(::uGetConstString("etag")));
        }

        ::app::Experimental::Cache::ICacheWriter::Close(record);
    }

    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::app::Uno::Buffer*>(__this->_header, ::app::Uno::Buffer__New_2(NULL, data));
}

void BinaryLoader__OnError(BinaryLoader* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason)
{
    ::uPtr< ::uDelegate*>(__this->ErrorCallback)->InvokeVoid< ::uString*>(reason);
}

void BinaryLoader__OnCacheReady(BinaryLoader* __this, ::uObject* record)
{
    __this->_cacheRecord = record;

    if (__this->IsExpired(record))
    {
        __this->MakeRequest();
        return;
    }

    if (!__this->LoadCache(record))
    {
        __this->_cacheRecord = NULL;
        __this->MakeRequest();
    }
}

bool BinaryLoader__LoadCache(BinaryLoader* __this, ::uObject* record)
{
    ::app::Uno::IO::Stream* stream = ::app::Experimental::Cache::ICacheReader::Stream(::uPtr< ::uObject*>(record));
    ::app::Uno::IO::BinaryReader* reader = ::app::Uno::IO::BinaryReader__New_1(NULL, stream);
    ::app::Uno::Buffer* data = NULL;

    try
    {
        __this->_header = ::app::Experimental::Http::HttpResponseHeader__Read(NULL, reader);
        int len = (int)(::uPtr< ::app::Uno::IO::Stream*>(stream)->Length() - ::uPtr< ::app::Uno::IO::Stream*>(stream)->Position());
        ::uArray* b = ::uNewArray(::app::Uno::Byte__typeof(), len);
        stream->Read(b, 0, len);
        data = ::app::Uno::Buffer__New_2(NULL, b);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, (::uObject*)e, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.1.0\\$.uno"), 156);
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Failed loading caching: "), __this->Uri), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Experimental.Http\\0.1.0\\$.uno"), 157);
            ::app::Experimental::Cache::ICacheReader::Delete(::uPtr< ::uObject*>(record));
            return false;
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::app::Uno::Buffer*>(__this->_header, data);
    return true;
}

bool BinaryLoader__IsExpired(BinaryLoader* __this, ::uObject* record)
{
    try
    {
        ::uString* updatedStr = ::app::Experimental::Cache::ICacheReader::GetMeta(::uPtr< ::uObject*>(record), ::uGetConstString("updated"));

        if (::app::Uno::String__op_Equality(NULL, updatedStr, NULL))
        {
            return true;
        }

        int updated = ::app::Uno::Int__Parse(NULL, updatedStr);
        int age = ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL) - updated;

        if (age > ::app::Experimental::Http::HttpLoader__get_CacheMaxAge(NULL))
        {
            return true;
        }

        return false;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            return true;
        }
        else
        {
            throw __t;
        }
    }
}

void BinaryLoader___ObjInit(BinaryLoader* __this)
{
}

BinaryLoader* BinaryLoader__New_1(::uStatic* __this)
{
    BinaryLoader* inst = (::app::Experimental::Http::BinaryLoader*)::uAllocObject(sizeof(::app::Experimental::Http::BinaryLoader), ::app::Experimental::Http::BinaryLoader__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
