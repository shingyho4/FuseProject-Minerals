// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_IMAGE_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_IMAGE_ELEMENT_H__

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_BundleFile; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ImageElement;

struct ImageElement__uType : ::app::Fuse::Elements::Element__uType
{
};

ImageElement__uType* ImageElement__typeof();

::app::Uno::BundleFile* ImageElement__get_File(ImageElement* __this);
void ImageElement__set_File(ImageElement* __this, ::app::Uno::BundleFile* value);
float ImageElement__get_Density(ImageElement* __this);
void ImageElement__set_Density(ImageElement* __this, float value);
bool ImageElement__get_FilePreload(ImageElement* __this);
void ImageElement__set_FilePreload(ImageElement* __this, bool value);
::uObject* ImageElement__get_Files(ImageElement* __this);
::app::Fuse::Resources::ImageSource* ImageElement__get_Source(ImageElement* __this);
void ImageElement__set_Source(ImageElement* __this, ::app::Fuse::Resources::ImageSource* value);
::app::Uno::Float4 ImageElement__get_Color(ImageElement* __this);
void ImageElement__set_Color(ImageElement* __this, ::app::Uno::Float4 value);
int ImageElement__get_ResampleMode(ImageElement* __this);
void ImageElement__set_ResampleMode(ImageElement* __this, int value);
int ImageElement__get_StretchMode(ImageElement* __this);
void ImageElement__set_StretchMode(ImageElement* __this, int value);
::app::Uno::Float4 ImageElement__get_Scale9Margin(ImageElement* __this);
void ImageElement__set_Scale9Margin(ImageElement* __this, ::app::Uno::Float4 value);
void ImageElement__ReapplyOptions(ImageElement* __this, ::app::Fuse::Resources::ImageSource* src);
void ImageElement__OnFileAdded(ImageElement* __this, ::app::Uno::BundleFile* file);
void ImageElement__OnFileRemoved(ImageElement* __this, ::app::Uno::BundleFile* file);
void ImageElement__CreateMultiDensitySource(ImageElement* __this);
void ImageElement__ReleaseSource(ImageElement* __this);
void ImageElement__OnRooted(ImageElement* __this);
void ImageElement__OnUnrooted(ImageElement* __this);
void ImageElement__CheckPinning(ImageElement* __this);
void ImageElement__OnSourceChanged(ImageElement* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ImageElement__OnColorChanged(ImageElement* __this);
void ImageElement__OnResampleModeChanged(ImageElement* __this);
void ImageElement__OnSizingChanged(ImageElement* __this);
void ImageElement__OnScale9MarginChanged(ImageElement* __this);
::app::Uno::Float2 ImageElement__GetSize(ImageElement* __this);
::app::Uno::Float2 ImageElement__GetContentSize(ImageElement* __this, ::app::Uno::Float2 fillSize, int fillSet);
void ImageElement__ArrangePaddingBox(ImageElement* __this, ::app::Uno::Float2 size);
::app::Uno::Graphics::Texture2D* ImageElement__GetTexture(ImageElement* __this);
void ImageElement__OnDraw(ImageElement* __this, ::app::Fuse::DrawContext* dc);
void ImageElement__OnHitTestLocalVisual(ImageElement* __this, ::app::Fuse::HitTestContext* htc);
void ImageElement___ObjInit_2(ImageElement* __this);
ImageElement* ImageElement__New_1(::uStatic* __this);

struct ImageElement : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> _sizing;
    float _density;
    bool _filePreload;
    ::uStrong< ::app::Uno::Collections::ObservableList__Uno_BundleFile*> _files;
    bool _sourcePinned;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _source;
    bool _hasColor;
    ::app::Uno::Float4 _color;
    int _resampleMode;
    bool _hasResampleMode;
    ::app::Uno::Float4 _scale9Margin;
    bool _hasScale9Margin;
    ::app::Uno::Float2 _origin;
    ::app::Uno::Float2 _scale;
    ::app::Uno::Float2 _drawOrigin;
    ::app::Uno::Float2 _drawSize;
    ::app::Uno::Float4 _uvClip;
    bool lockedTexture;
    ::uStrong< ::uDelegate*> SourceChanged;
    ::uStrong< ::uDelegate*> IsLoadingChanged;
    ::uStrong< ::uDelegate*> IsFailedChanged;

    void ReapplyOptions(::app::Fuse::Resources::ImageSource* src) { ImageElement__ReapplyOptions(this, src); }
    void OnFileAdded(::app::Uno::BundleFile* file) { ImageElement__OnFileAdded(this, file); }
    void OnFileRemoved(::app::Uno::BundleFile* file) { ImageElement__OnFileRemoved(this, file); }
    void CreateMultiDensitySource() { ImageElement__CreateMultiDensitySource(this); }
    void ReleaseSource() { ImageElement__ReleaseSource(this); }
    void CheckPinning() { ImageElement__CheckPinning(this); }
    void OnSourceChanged(::uObject* sender, ::app::Uno::EventArgs* args) { ImageElement__OnSourceChanged(this, sender, args); }
    void OnColorChanged() { ImageElement__OnColorChanged(this); }
    void OnResampleModeChanged() { ImageElement__OnResampleModeChanged(this); }
    void OnSizingChanged() { ImageElement__OnSizingChanged(this); }
    void OnScale9MarginChanged() { ImageElement__OnScale9MarginChanged(this); }
    ::app::Uno::Float2 GetSize();
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ImageElement__GetTexture(this); }
    void _ObjInit_2() { ImageElement___ObjInit_2(this); }
    ::app::Uno::BundleFile* File() { return ImageElement__get_File(this); }
    void File(::app::Uno::BundleFile* value) { ImageElement__set_File(this, value); }
    float Density() { return ImageElement__get_Density(this); }
    void Density(float value) { ImageElement__set_Density(this, value); }
    bool FilePreload() { return ImageElement__get_FilePreload(this); }
    void FilePreload(bool value) { ImageElement__set_FilePreload(this, value); }
    ::uObject* Files() { return ImageElement__get_Files(this); }
    ::app::Fuse::Resources::ImageSource* Source() { return ImageElement__get_Source(this); }
    void Source(::app::Fuse::Resources::ImageSource* value) { ImageElement__set_Source(this, value); }
    ::app::Uno::Float4 Color();
    void Color(::app::Uno::Float4 value);
    int ResampleMode() { return ImageElement__get_ResampleMode(this); }
    void ResampleMode(int value) { ImageElement__set_ResampleMode(this, value); }
    int StretchMode() { return ImageElement__get_StretchMode(this); }
    void StretchMode(int value) { ImageElement__set_StretchMode(this, value); }
    ::app::Uno::Float4 Scale9Margin();
    void Scale9Margin(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 ImageElement::GetSize() { return ImageElement__GetSize(this); }
inline ::app::Uno::Float4 ImageElement::Color() { return ImageElement__get_Color(this); }
inline void ImageElement::Color(::app::Uno::Float4 value) { ImageElement__set_Color(this, value); }
inline ::app::Uno::Float4 ImageElement::Scale9Margin() { return ImageElement__get_Scale9Margin(this); }
inline void ImageElement::Scale9Margin(::app::Uno::Float4 value) { ImageElement__set_Scale9Margin(this, value); }

}}}


#endif
