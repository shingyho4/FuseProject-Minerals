// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__

#include <app/Fuse.Resources.LoadingImageSource.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Http { struct HttpResponseHeader; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Resources {

struct HttpImageSourceImpl;

struct HttpImageSourceImpl__uType : ::app::Fuse::Resources::LoadingImageSource__uType
{
};

HttpImageSourceImpl__uType* HttpImageSourceImpl__typeof();

::uString* HttpImageSourceImpl__get_Url(HttpImageSourceImpl* __this);
void HttpImageSourceImpl__AttemptLoad(HttpImageSourceImpl* __this);
void HttpImageSourceImpl__HttpCallback(HttpImageSourceImpl* __this, ::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data);
void HttpImageSourceImpl__LoadFailed(HttpImageSourceImpl* __this, ::uString* reason);
void HttpImageSourceImpl__Fail(HttpImageSourceImpl* __this, ::uString* msg, ::app::Uno::Exception* e);

struct HttpImageSourceImpl : ::app::Fuse::Resources::LoadingImageSource
{
    ::uStrong< ::uString*> _url;
    ::uStrong< ::uString*> _contentType;

    void HttpCallback(::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data) { HttpImageSourceImpl__HttpCallback(this, response, data); }
    void LoadFailed(::uString* reason) { HttpImageSourceImpl__LoadFailed(this, reason); }
    void Fail(::uString* msg, ::app::Uno::Exception* e) { HttpImageSourceImpl__Fail(this, msg, e); }
    ::uString* Url() { return HttpImageSourceImpl__get_Url(this); }
};

}}}


#endif
