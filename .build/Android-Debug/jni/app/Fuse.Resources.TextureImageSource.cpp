// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.TextureImageSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Resources {

TextureImageSource__uType* TextureImageSource__typeof()
{
    static TextureImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextureImageSource__uType*)::uAllocClassType(sizeof(TextureImageSource__uType), "Fuse.Resources.TextureImageSource", ::app::Fuse::Resources::ImageSource__typeof(), 0, 1);
        type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_SizeDensity;
        type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_Size;
        type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_PixelSize;
        type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__GetTexture;

        type->StrongRefOffsets[0] = offsetof(TextureImageSource, _texture);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_texture";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float TextureImageSource__get_Density(TextureImageSource* __this)
{
    return __this->_density;
}

void TextureImageSource__set_Density(TextureImageSource* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->OnChanged();
    }
}

float TextureImageSource__get_SizeDensity(TextureImageSource* __this)
{
    return __this->Density();
}

::app::Uno::Float2 TextureImageSource__get_Size(TextureImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size().X, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size().Y), __this->_density);
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Int2 TextureImageSource__get_PixelSize(TextureImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size();
    }

    return ::app::Uno::Int2__New_1(NULL, 0);
}

::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this)
{
    return __this->_texture;
}

}}}
