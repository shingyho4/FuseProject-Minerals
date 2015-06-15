// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.BundleFileImageSource.h>
#include <app/Fuse.Resources.BundleFileImageSourceCache.h>
#include <app/Fuse.Resources.BundleFileImageSourceImpl.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Graphics.Texture2D.h>

namespace app {
namespace Fuse {
namespace Resources {

BundleFileImageSource__uType* BundleFileImageSource__typeof()
{
    static BundleFileImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BundleFileImageSource__uType*)::uAllocClassType(sizeof(BundleFileImageSource__uType), "Fuse.Resources.BundleFileImageSource", ::app::Fuse::Resources::ImageSource__typeof(), 0, 1);
        type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))BundleFileImageSource__get_Size;
        type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))BundleFileImageSource__get_PixelSize;
        type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))BundleFileImageSource__get_SizeDensity;
        type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))BundleFileImageSource__OnPinChanged;
        type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))BundleFileImageSource__GetTexture;

        type->StrongRefOffsets[0] = offsetof(BundleFileImageSource, _proxy);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_proxy";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* BundleFileImageSource__get_BundleFile(BundleFileImageSource* __this)
{
    return (::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl() == NULL) ? (::app::Uno::BundleFile*)NULL : ::uPtr< ::app::Fuse::Resources::BundleFileImageSourceImpl*>(::uAs< ::app::Fuse::Resources::BundleFileImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::BundleFileImageSourceImpl__typeof()))->BundleFile();
}

void BundleFileImageSource__set_BundleFile(BundleFileImageSource* __this, ::app::Uno::BundleFile* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Release();

    if (value == NULL)
    {
        return;
    }

    ::app::Fuse::Resources::BundleFileImageSourceImpl* bf = ::app::Fuse::Resources::BundleFileImageSourceCache__GetBundleFile(NULL, value);

    if (__this->_preload)
    {
        ::uPtr< ::app::Fuse::Resources::BundleFileImageSourceImpl*>(bf)->SyncLoad();
    }

    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Attach((::app::Fuse::Resources::ImageSource*)bf);
}

bool BundleFileImageSource__get_Preload(BundleFileImageSource* __this)
{
    return __this->_preload;
}

void BundleFileImageSource__set_Preload(BundleFileImageSource* __this, bool value)
{
    __this->_preload = value;

    if (__this->_preload)
    {
        ::app::Fuse::Resources::BundleFileImageSourceImpl* bfi = ::uAs< ::app::Fuse::Resources::BundleFileImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::BundleFileImageSourceImpl__typeof());

        if (bfi != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::BundleFileImageSourceImpl*>(bfi)->SyncLoad();
        }
    }
}

::app::Uno::Float2 BundleFileImageSource__get_Size(BundleFileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

::app::Uno::Int2 BundleFileImageSource__get_PixelSize(BundleFileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

float BundleFileImageSource__get_SizeDensity(BundleFileImageSource* __this)
{
    return __this->Density();
}

float BundleFileImageSource__get_Density(BundleFileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

void BundleFileImageSource__set_Density(BundleFileImageSource* __this, float value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density(value);
}

void BundleFileImageSource__OnPinChanged(BundleFileImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

::app::Uno::Graphics::Texture2D* BundleFileImageSource__GetTexture(BundleFileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

void BundleFileImageSource___ObjInit_1(BundleFileImageSource* __this, ::app::Uno::BundleFile* file)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
    __this->BundleFile(file);
}

BundleFileImageSource* BundleFileImageSource__New_1(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    BundleFileImageSource* inst = (::app::Fuse::Resources::BundleFileImageSource*)::uAllocObject(sizeof(::app::Fuse::Resources::BundleFileImageSource), ::app::Fuse::Resources::BundleFileImageSource__typeof());
    inst->_ObjInit_1(file);
    return inst;
}

void BundleFileImageSource___ObjInit_2(BundleFileImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

BundleFileImageSource* BundleFileImageSource__New_2(::uStatic* __this)
{
    BundleFileImageSource* inst = (::app::Fuse::Resources::BundleFileImageSource*)::uAllocObject(sizeof(::app::Fuse::Resources::BundleFileImageSource), ::app::Fuse::Resources::BundleFileImageSource__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
