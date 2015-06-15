// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSourceErrorArgs; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Exception; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ImageSource;

struct ImageSource__uType : ::uClassType
{
    void(*__fp_OnPinChanged)(ImageSource*);
    ::app::Uno::Graphics::Texture2D*(*__fp_GetTexture)(ImageSource*);
    ::app::Uno::Float2(*__fp_get_Size)(ImageSource*);
    ::app::Uno::Int2(*__fp_get_PixelSize)(ImageSource*);
    float(*__fp_get_SizeDensity)(ImageSource*);
};

ImageSource__uType* ImageSource__typeof();

bool ImageSource__get_IsPinned(ImageSource* __this);
void ImageSource__OnChanged(ImageSource* __this);
void ImageSource__ProxyChanged(ImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a);
void ImageSource__OnError(ImageSource* __this, ::uString* msg, ::app::Uno::Exception* e);
void ImageSource__ProxyError(ImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a);
void ImageSource__Pin(ImageSource* __this);
void ImageSource__Unpin(ImageSource* __this);
void ImageSource__OnPinChanged(ImageSource* __this);
void ImageSource___ObjInit(ImageSource* __this);
void ImageSource__add_Changed(ImageSource* __this, ::uDelegate* value);
void ImageSource__remove_Changed(ImageSource* __this, ::uDelegate* value);
void ImageSource__add_Error(ImageSource* __this, ::uDelegate* value);
void ImageSource__remove_Error(ImageSource* __this, ::uDelegate* value);

struct ImageSource : ::uObject
{
    int _pinCount;
    ::uStrong< ::uDelegate*> Changed;
    ::uStrong< ::uDelegate*> Error;

    void OnChanged() { ImageSource__OnChanged(this); }
    void ProxyChanged(::uObject* s, ::app::Uno::EventArgs* a) { ImageSource__ProxyChanged(this, s, a); }
    void OnError(::uString* msg, ::app::Uno::Exception* e) { ImageSource__OnError(this, msg, e); }
    void ProxyError(::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a) { ImageSource__ProxyError(this, s, a); }
    void Pin() { ImageSource__Pin(this); }
    void Unpin() { ImageSource__Unpin(this); }
    void OnPinChanged() { (((ImageSource__uType*)this->__obj_type)->__fp_OnPinChanged)(this); }
    ::app::Uno::Graphics::Texture2D* GetTexture() { return (((ImageSource__uType*)this->__obj_type)->__fp_GetTexture)(this); }
    void _ObjInit() { ImageSource___ObjInit(this); }
    void add_Changed(::uDelegate* value) { ImageSource__add_Changed(this, value); }
    void remove_Changed(::uDelegate* value) { ImageSource__remove_Changed(this, value); }
    void add_Error(::uDelegate* value) { ImageSource__add_Error(this, value); }
    void remove_Error(::uDelegate* value) { ImageSource__remove_Error(this, value); }
    bool IsPinned() { return ImageSource__get_IsPinned(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Int2 PixelSize();
    float SizeDensity() { return (((ImageSource__uType*)this->__obj_type)->__fp_get_SizeDensity)(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Resources {

inline ::app::Uno::Float2 ImageSource::Size() { return (((ImageSource__uType*)this->__obj_type)->__fp_get_Size)(this); }
inline ::app::Uno::Int2 ImageSource::PixelSize() { return (((ImageSource__uType*)this->__obj_type)->__fp_get_PixelSize)(this); }

}}}


#endif
