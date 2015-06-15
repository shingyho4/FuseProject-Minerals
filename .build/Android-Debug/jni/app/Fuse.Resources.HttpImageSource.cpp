// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Uno.Graphics.Texture2D.h>

namespace app {
namespace Fuse {
namespace Resources {

HttpImageSource__uType* HttpImageSource__typeof()
{
    static HttpImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpImageSource__uType*)::uAllocClassType(sizeof(HttpImageSource__uType), "Fuse.Resources.HttpImageSource", ::app::Fuse::Resources::ImageSource__typeof(), 0, 1);
        type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_Size;
        type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_PixelSize;
        type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_SizeDensity;
        type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged;
        type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__GetTexture;

        type->StrongRefOffsets[0] = offsetof(HttpImageSource, _proxy);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_proxy";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

float HttpImageSource__get_SizeDensity(HttpImageSource* __this)
{
    return __this->Density();
}

float HttpImageSource__get_Density(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

void HttpImageSource__set_Density(HttpImageSource* __this, float value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density(value);
}

void HttpImageSource__OnPinChanged(HttpImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

}}}
