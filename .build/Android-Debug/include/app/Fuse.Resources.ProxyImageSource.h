// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_PROXY_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_PROXY_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct DisposalPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSourceErrorArgs; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ProxyImageSource;

struct ProxyImageSource__uType : ::uClassType
{
};

ProxyImageSource__uType* ProxyImageSource__typeof();

::app::Fuse::Resources::ImageSource* ProxyImageSource__get_Impl(ProxyImageSource* __this);
::app::Uno::Float2 ProxyImageSource__get_Size(ProxyImageSource* __this);
::app::Uno::Int2 ProxyImageSource__get_PixelSize(ProxyImageSource* __this);
float ProxyImageSource__get_Density(ProxyImageSource* __this);
void ProxyImageSource__set_Density(ProxyImageSource* __this, float value);
void ProxyImageSource__OnPinChanged(ProxyImageSource* __this);
::app::Uno::Graphics::Texture2D* ProxyImageSource__GetTexture(ProxyImageSource* __this);
void ProxyImageSource__Release(ProxyImageSource* __this);
void ProxyImageSource__ProxyOnChanged(ProxyImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a);
void ProxyImageSource__ProxyOnError(ProxyImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a);
void ProxyImageSource__Attach(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* impl);
void ProxyImageSource___ObjInit(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* outer);
ProxyImageSource* ProxyImageSource__New_1(::uStatic* __this, ::app::Fuse::Resources::ImageSource* outer);

struct ProxyImageSource : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _outer;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _impl;
    ::uStrong< ::app::Fuse::Resources::DisposalPolicy*> _policy;
    float _density;
    bool _hasDensity;

    void OnPinChanged() { ProxyImageSource__OnPinChanged(this); }
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ProxyImageSource__GetTexture(this); }
    void Release() { ProxyImageSource__Release(this); }
    void ProxyOnChanged(::uObject* s, ::app::Uno::EventArgs* a) { ProxyImageSource__ProxyOnChanged(this, s, a); }
    void ProxyOnError(::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a) { ProxyImageSource__ProxyOnError(this, s, a); }
    void Attach(::app::Fuse::Resources::ImageSource* impl) { ProxyImageSource__Attach(this, impl); }
    void _ObjInit(::app::Fuse::Resources::ImageSource* outer) { ProxyImageSource___ObjInit(this, outer); }
    ::app::Fuse::Resources::ImageSource* Impl() { return ProxyImageSource__get_Impl(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Int2 PixelSize();
    float Density() { return ProxyImageSource__get_Density(this); }
    void Density(float value) { ProxyImageSource__set_Density(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Resources {

inline ::app::Uno::Float2 ProxyImageSource::Size() { return ProxyImageSource__get_Size(this); }
inline ::app::Uno::Int2 ProxyImageSource::PixelSize() { return ProxyImageSource__get_PixelSize(this); }

}}}


#endif
