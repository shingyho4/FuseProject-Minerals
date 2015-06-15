// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.TextureFill.h>
#include <app/Fuse.Elements.ImageElement.h>
#include <app/Fuse.Elements.Internal.ImageElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.BundleFileImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Uno.Action__Uno_BundleFile.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ICollection__Uno_BundleFile.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_BundleFile.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Uno_BundleFile.h>
#include <app/Uno.Collections.ObservableList__Uno_BundleFile.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Elements {

ImageElement__uType* ImageElement__typeof()
{
    static ImageElement__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ImageElement__uType*)::uAllocClassType(sizeof(ImageElement__uType), "Fuse.Elements.ImageElement", ::app::Fuse::Elements::Element__typeof(), 6, 6);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ImageElement__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ImageElement__OnUnrooted;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ImageElement__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ImageElement__ArrangePaddingBox;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))ImageElement__OnDraw;
        type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))ImageElement__OnHitTestLocalVisual;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(ImageElement__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ImageElement__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ImageElement__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(ImageElement__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(ImageElement__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(ImageElement__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(ImageElement, _sizing);
        type->StrongRefOffsets[1] = offsetof(ImageElement, _files);
        type->StrongRefOffsets[2] = offsetof(ImageElement, _source);
        type->StrongRefOffsets[3] = offsetof(ImageElement, SourceChanged);
        type->StrongRefOffsets[4] = offsetof(ImageElement, IsLoadingChanged);
        type->StrongRefOffsets[5] = offsetof(ImageElement, IsFailedChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_sizing";
        type->StrongRefNames[1] = "_files";
        type->StrongRefNames[2] = "_source";
        type->StrongRefNames[3] = "SourceChanged";
        type->StrongRefNames[4] = "IsLoadingChanged";
        type->StrongRefNames[5] = "IsFailedChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* ImageElement__get_File(ImageElement* __this)
{
    if (__this->_files == NULL)
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Item(0);
    }
}

void ImageElement__set_File(ImageElement* __this, ::app::Uno::BundleFile* value)
{
    if ((((__this->_files == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Count() == 0)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Count() > 1)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Item(0) != value))
    {
        __this->_files = NULL;
        ::app::Uno::Collections::ICollection__Uno_BundleFile::Add(::uPtr< ::uObject*>(__this->Files()), value);
    }
}

float ImageElement__get_Density(ImageElement* __this)
{
    return __this->_density;
}

void ImageElement__set_Density(ImageElement* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->InvalidateLayout();
    }
}

bool ImageElement__get_FilePreload(ImageElement* __this)
{
    return __this->_filePreload;
}

void ImageElement__set_FilePreload(ImageElement* __this, bool value)
{
    __this->_filePreload = value;
    __this->ReapplyOptions(__this->Source());
}

::uObject* ImageElement__get_Files(ImageElement* __this)
{
    if (__this->_files == NULL)
    {
        __this->_files = ::app::Uno::Collections::ObservableList__Uno_BundleFile__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_BundleFile__typeof(), (const void*)::app::Fuse::Elements::ImageElement__OnFileAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_BundleFile__typeof(), (const void*)::app::Fuse::Elements::ImageElement__OnFileRemoved, __this));
    }

    return (::uObject*)__this->_files;
}

::app::Fuse::Resources::ImageSource* ImageElement__get_Source(ImageElement* __this)
{
    return __this->_source;
}

void ImageElement__set_Source(ImageElement* __this, ::app::Fuse::Resources::ImageSource* value)
{
    if (__this->_source != value)
    {
        __this->ReleaseSource();
        __this->_source = value;

        if (__this->_source != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->add_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::ImageElement__OnSourceChanged, __this));
        }

        __this->OnSourceChanged(NULL, NULL);
    }
}

::app::Uno::Float4 ImageElement__get_Color(ImageElement* __this)
{
    return __this->_color;
}

void ImageElement__set_Color(ImageElement* __this, ::app::Uno::Float4 value)
{
    if (!__this->_hasColor || ::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->_hasColor = true;
        __this->OnColorChanged();
    }
}

int ImageElement__get_ResampleMode(ImageElement* __this)
{
    return __this->_resampleMode;
}

void ImageElement__set_ResampleMode(ImageElement* __this, int value)
{
    if (!__this->_hasResampleMode || (__this->_resampleMode != value))
    {
        __this->_resampleMode = value;
        __this->_hasResampleMode = true;
        __this->OnResampleModeChanged();
    }
}

int ImageElement__get_StretchMode(ImageElement* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->stretchMode;
}

void ImageElement__set_StretchMode(ImageElement* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchMode(value))
    {
        __this->OnSizingChanged();
    }
}

::app::Uno::Float4 ImageElement__get_Scale9Margin(ImageElement* __this)
{
    return __this->_scale9Margin;
}

void ImageElement__set_Scale9Margin(ImageElement* __this, ::app::Uno::Float4 value)
{
    if (!__this->_hasScale9Margin || ::app::Uno::Float4__op_Inequality(NULL, __this->_scale9Margin, value))
    {
        __this->_scale9Margin = value;
        __this->_hasScale9Margin = true;
        __this->OnScale9MarginChanged();
    }
}

void ImageElement__ReapplyOptions(ImageElement* __this, ::app::Fuse::Resources::ImageSource* src)
{
    ::app::Fuse::Resources::BundleFileImageSource* bf = ::uAs< ::app::Fuse::Resources::BundleFileImageSource*>(src, ::app::Fuse::Resources::BundleFileImageSource__typeof());

    if (bf != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(bf)->Preload(__this->FilePreload());
    }

    ::app::Fuse::Resources::MultiDensityImageSource* mf = ::uAs< ::app::Fuse::Resources::MultiDensityImageSource*>(__this->Source(), ::app::Fuse::Resources::MultiDensityImageSource__typeof());

    if (mf != NULL)
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(mf)->Sources())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Resources::ImageSource* s = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_123));
            __this->ReapplyOptions(s);
        }
    }
}

void ImageElement__OnFileAdded(ImageElement* __this, ::app::Uno::BundleFile* file)
{
    float ind_129 = float();
    bool ind_130 = bool();
    ::app::Fuse::Resources::BundleFileImageSource* collection_124;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_124 = ::app::Fuse::Resources::BundleFileImageSource__New_2(NULL), ind_129 = __this->Density(), ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_124)->Density(ind_129), ind_129, ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_124)->BundleFile(file), file, ind_130 = __this->FilePreload(), ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_124)->Preload(ind_130), ind_130, collection_124));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageElement__OnFileRemoved(ImageElement* __this, ::app::Uno::BundleFile* file)
{
    float ind_131 = float();
    bool ind_132 = bool();
    ::app::Fuse::Resources::BundleFileImageSource* collection_125;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Count() == 0)
    {
        __this->Source(NULL);
    }
    else if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_125 = ::app::Fuse::Resources::BundleFileImageSource__New_2(NULL), ind_131 = __this->Density(), ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_125)->Density(ind_131), ind_131, ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_125)->BundleFile(file), file, ind_132 = __this->FilePreload(), ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_125)->Preload(ind_132), ind_132, collection_125));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageElement__CreateMultiDensitySource(ImageElement* __this)
{
    float ind_133 = float();
    ::app::Fuse::Resources::BundleFileImageSource* collection_127;
    ::app::Fuse::Resources::MultiDensityImageSource* s = ::app::Fuse::Resources::MultiDensityImageSource__New_1(NULL);

    for (::uObject* enum_126 = ::uPtr< ::app::Uno::Collections::ObservableList__Uno_BundleFile*>(__this->_files)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Uno::BundleFile* f = ::app::Uno::Collections::IEnumerator__Uno_BundleFile::Current(::uPtr< ::uObject*>(enum_126));
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(s)->Sources()), (::app::Fuse::Resources::ImageSource*)(collection_127 = ::app::Fuse::Resources::BundleFileImageSource__New_1(NULL, f), ind_133 = __this->Density(), ::uPtr< ::app::Fuse::Resources::BundleFileImageSource*>(collection_127)->Density(ind_133), ind_133, collection_127));
    }

    __this->Source((::app::Fuse::Resources::ImageSource*)s);
}

void ImageElement__ReleaseSource(ImageElement* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::ImageElement__OnSourceChanged, __this));

    if (__this->_sourcePinned)
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        __this->_sourcePinned = false;
    }

    __this->_source = NULL;
}

void ImageElement__OnRooted(ImageElement* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    __this->CheckPinning();
}

void ImageElement__OnUnrooted(ImageElement* __this)
{
    ::app::Fuse::Elements::Element__OnUnrooted(__this);
    __this->CheckPinning();
}

void ImageElement__CheckPinning(ImageElement* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    bool on = __this->IsRooted();

    if (on != __this->_sourcePinned)
    {
        if (on)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Pin();
        }
        else
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        }

        __this->_sourcePinned = on;
    }
}

void ImageElement__OnSourceChanged(ImageElement* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->CheckPinning();
    __this->InvalidateLayout();
    __this->InvalidateVisual(11);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->SourceChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->SourceChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->IsLoadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->IsLoadingChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->IsFailedChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->IsFailedChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void ImageElement__OnColorChanged(ImageElement* __this)
{
    __this->InvalidateVisual(12);
}

void ImageElement__OnResampleModeChanged(ImageElement* __this)
{
    __this->InvalidateVisual(12);
}

void ImageElement__OnSizingChanged(ImageElement* __this)
{
    __this->InvalidateVisual(12);
    __this->InvalidateLayout();
}

void ImageElement__OnScale9MarginChanged(ImageElement* __this)
{
    __this->InvalidateLayout();
    __this->InvalidateVisual(12);
}

::app::Uno::Float2 ImageElement__GetSize(ImageElement* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcContentSize(::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->Size(), ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->PixelSize());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Float2 ImageElement__GetContentSize(ImageElement* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->padding = ::app::Uno::Float4__New_1(NULL, 0.0f);
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = __this->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->ExpandFillSize(__this->GetSize(), fillSize, fillSet);
    return r;
}

void ImageElement__ArrangePaddingBox(ImageElement* __this, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->padding = __this->Padding();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = __this->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, __this->_scale);
    __this->_uvClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
}

::app::Uno::Graphics::Texture2D* ImageElement__GetTexture(ImageElement* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->GetTexture();
    }

    return NULL;
}

void ImageElement__OnDraw(ImageElement* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Fuse::Drawing::TextureFill* collection_128;
    ::app::Uno::Graphics::Texture2D* tex = __this->GetTexture();

    if (tex == NULL)
    {
        return;
    }

    collection_128 = ::app::Fuse::Drawing::TextureFill__New_1(NULL);
    ::uPtr< ::app::Fuse::Drawing::TextureFill*>(collection_128)->Texture(tex);
    collection_128->Color(__this->Color());
    collection_128->ResampleMode(__this->ResampleMode());
    ::app::Fuse::Drawing::TextureFill* tf = collection_128;

    if (__this->StretchMode() == 4)
    {
        ::uPtr< ::app::Fuse::Elements::Internal::Scale9Rectangle*>(::app::Fuse::Elements::Internal::Scale9Rectangle__Impl)->Draw(dc, (::app::Fuse::Node*)__this, __this->ActualSize(), __this->GetSize(), (::app::Fuse::Drawing::Brush*)tf, __this->Scale9Margin());
    }
    else
    {
        ::uPtr< ::app::Fuse::Elements::Internal::ImageElementDraw*>(::app::Fuse::Elements::Internal::ImageElementDraw__Impl)->Draw(dc, (::app::Fuse::Elements::Element*)__this, __this->_drawOrigin, __this->_drawSize, (ind_134 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_134.X, ind_134.Y)), ::app::Uno::Float2__op_Subtraction(NULL, (ind_135 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_135.Z, ind_135.W)), (ind_136 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_136.X, ind_136.Y))), (::app::Fuse::Drawing::Brush*)tf);
    }
}

void ImageElement__OnHitTestLocalVisual(ImageElement* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void ImageElement___ObjInit_2(ImageElement* __this)
{
    __this->_sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_density = 1.0f;
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
    __this->_resampleMode = 2;
    __this->_scale9Margin = ::app::Uno::Float4__New_1(NULL, 10.0f);
    __this->lockedTexture = true;
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
}

ImageElement* ImageElement__New_1(::uStatic* __this)
{
    ImageElement* inst = (::app::Fuse::Elements::ImageElement*)::uAllocObject(sizeof(::app::Fuse::Elements::ImageElement), ::app::Fuse::Elements::ImageElement__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
