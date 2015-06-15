// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Fuse.Resources.HttpImageSourceImpl.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

HttpImageSourceImpl__uType* HttpImageSourceImpl__typeof()
{
    static HttpImageSourceImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpImageSourceImpl__uType*)::uAllocClassType(sizeof(HttpImageSourceImpl__uType), "Fuse.Resources.HttpImageSourceImpl", ::app::Fuse::Resources::LoadingImageSource__typeof(), 0, 2);
        type->__fp_AttemptLoad = (void(*)(::app::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad;

        type->StrongRefOffsets[0] = offsetof(HttpImageSourceImpl, _url);
        type->StrongRefOffsets[1] = offsetof(HttpImageSourceImpl, _contentType);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_url";
        type->StrongRefNames[1] = "_contentType";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* HttpImageSourceImpl__get_Url(HttpImageSourceImpl* __this)
{
    return __this->_url;
}

void HttpImageSourceImpl__AttemptLoad(HttpImageSourceImpl* __this)
{
    try
    {
        ::app::Experimental::Http::HttpLoader__LoadBinary(NULL, __this->Url(), ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Http_HttpResponseHeader__Uno_Buffer__typeof(), (const void*)::app::Fuse::Resources::HttpImageSourceImpl__HttpCallback, __this), ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)::app::Fuse::Resources::HttpImageSourceImpl__LoadFailed, __this));
        __this->_loading = true;
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Fail(::uGetConstString("HttpImageSource-failed-request"), e);
        }
        else
        {
            throw __t;
        }
    }
}

void HttpImageSourceImpl__HttpCallback(HttpImageSourceImpl* __this, ::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data)
{
    if (::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->StatusCode() != 200)
    {
        __this->Fail(::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("HttpImageSource-failed-status: "), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->StatusCode())), ::uGetConstString(" ")), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->ReasonPhrase()), NULL);
        return;
    }

    ::uString* ct;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->Headers())->TryGetValue(::uGetConstString("content-type"), &ct))
    {
        __this->_contentType = ::uGetConstString("x-missing");
    }
    else
    {
        __this->_contentType = ct;
    }

    __this->_loading = false;

    try
    {
        ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DContentType(NULL, data, __this->_contentType, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Fail(::uGetConstString("HttpImageSource-failed-converson"), e);
        }
        else
        {
            throw __t;
        }
    }
}

void HttpImageSourceImpl__LoadFailed(HttpImageSourceImpl* __this, ::uString* reason)
{
    __this->Fail(::app::Uno::String__op_Addition(NULL, ::uGetConstString("HttpImageSource-protocol-failure: "), reason), NULL);
}

void HttpImageSourceImpl__Fail(HttpImageSourceImpl* __this, ::uString* msg, ::app::Uno::Exception* e)
{
    __this->Cleanup(true);
    __this->OnError(msg, e);
    ::app::Experimental::Http::HttpLoader__Discard(NULL, __this->_url);
}

}}}
