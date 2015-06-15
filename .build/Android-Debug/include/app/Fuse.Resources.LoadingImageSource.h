// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Int2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct DisposalPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct LoadingImageSource_SourceDisposable; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct LoadingImageSource;

struct LoadingImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
    void(*__fp_AttemptLoad)(LoadingImageSource*);
};

LoadingImageSource__uType* LoadingImageSource__typeof();

::app::Fuse::Resources::DisposalPolicy* LoadingImageSource__get_Policy(LoadingImageSource* __this);
void LoadingImageSource__set_Policy(LoadingImageSource* __this, ::app::Fuse::Resources::DisposalPolicy* value);
bool LoadingImageSource__get_IsLoaded(LoadingImageSource* __this);
float LoadingImageSource__get_SizeDensity(LoadingImageSource* __this);
::app::Uno::Float2 LoadingImageSource__get_Size(LoadingImageSource* __this);
::app::Uno::Int2 LoadingImageSource__get_PixelSize(LoadingImageSource* __this);
::app::Fuse::Resources::DisposalPolicy* LoadingImageSource__CreateDefaultPolicy(::uStatic* __this);
::app::Uno::Graphics::Texture2D* LoadingImageSource__GetTexture(LoadingImageSource* __this);
void LoadingImageSource__LoadTexture(LoadingImageSource* __this);
void LoadingImageSource__AsyncLoadTexture(LoadingImageSource* __this);
void LoadingImageSource__Dispose(LoadingImageSource* __this);
void LoadingImageSource__Cleanup(LoadingImageSource* __this, bool failed);
void LoadingImageSource__MarkUsed(LoadingImageSource* __this);
void LoadingImageSource__SetTexture(LoadingImageSource* __this, ::app::Uno::Graphics::Texture2D* texture);
void LoadingImageSource__OnPinChanged(LoadingImageSource* __this);
void LoadingImageSource___ObjInit_1(LoadingImageSource* __this);

struct LoadingImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*> _disposable;
    ::uStrong< ::app::Fuse::Resources::DisposalPolicy*> _policy;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    ::app::Uno::Int2 _textureSize;
    bool _loading;
    bool _failed;
    bool _haveAction;
    float _density;

    void LoadTexture() { LoadingImageSource__LoadTexture(this); }
    void AsyncLoadTexture() { LoadingImageSource__AsyncLoadTexture(this); }
    void Dispose() { LoadingImageSource__Dispose(this); }
    void Cleanup(bool failed) { LoadingImageSource__Cleanup(this, failed); }
    void MarkUsed() { LoadingImageSource__MarkUsed(this); }
    void SetTexture(::app::Uno::Graphics::Texture2D* texture) { LoadingImageSource__SetTexture(this, texture); }
    void AttemptLoad() { (((LoadingImageSource__uType*)this->__obj_type)->__fp_AttemptLoad)(this); }
    void _ObjInit_1() { LoadingImageSource___ObjInit_1(this); }
    ::app::Fuse::Resources::DisposalPolicy* Policy() { return LoadingImageSource__get_Policy(this); }
    void Policy(::app::Fuse::Resources::DisposalPolicy* value) { LoadingImageSource__set_Policy(this, value); }
    bool IsLoaded() { return LoadingImageSource__get_IsLoaded(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
