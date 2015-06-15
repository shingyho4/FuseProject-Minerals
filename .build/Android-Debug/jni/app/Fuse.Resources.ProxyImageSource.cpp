// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.DisposalPolicy.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.ImageSourceErrorArgs.h>
#include <app/Fuse.Resources.ImageSourceErrorHandler.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Resources {

ProxyImageSource__uType* ProxyImageSource__typeof()
{
    static ProxyImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProxyImageSource__uType*)::uAllocClassType(sizeof(ProxyImageSource__uType), "Fuse.Resources.ProxyImageSource", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(ProxyImageSource, _outer);
        type->StrongRefOffsets[1] = offsetof(ProxyImageSource, _impl);
        type->StrongRefOffsets[2] = offsetof(ProxyImageSource, _policy);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_outer";
        type->StrongRefNames[1] = "_impl";
        type->StrongRefNames[2] = "_policy";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Resources::ImageSource* ProxyImageSource__get_Impl(ProxyImageSource* __this)
{
    return __this->_impl;
}

::app::Uno::Float2 ProxyImageSource__get_Size(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Int2 ps = ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->PixelSize();
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)ps.X, (float)ps.Y), __this->_density);
}

::app::Uno::Int2 ProxyImageSource__get_PixelSize(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return ::app::Uno::Int2__New_1(NULL, 0);
    }

    return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->PixelSize();
}

float ProxyImageSource__get_Density(ProxyImageSource* __this)
{
    if (__this->_hasDensity || (__this->_impl == NULL))
    {
        return __this->_density;
    }

    return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->SizeDensity();
}

void ProxyImageSource__set_Density(ProxyImageSource* __this, float value)
{
    __this->_density = value;
    __this->_hasDensity = true;
}

void ProxyImageSource__OnPinChanged(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Pin();
    }
    else
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Unpin();
    }
}

::app::Uno::Graphics::Texture2D* ProxyImageSource__GetTexture(ProxyImageSource* __this)
{
    return (__this->_impl == NULL) ? (::app::Uno::Graphics::Texture2D*)NULL : ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->GetTexture();
}

void ProxyImageSource__Release(ProxyImageSource* __this)
{
    if (__this->_impl != NULL)
    {
        if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Unpin();
        }

        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Resources::ProxyImageSource__ProxyOnChanged, __this));
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->remove_Error(::uNewDelegateNonVirt(::app::Fuse::Resources::ImageSourceErrorHandler__typeof(), (const void*)::app::Fuse::Resources::ProxyImageSource__ProxyOnError, __this));
        __this->_impl = NULL;
    }
}

void ProxyImageSource__ProxyOnChanged(ProxyImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a)
{
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyChanged((::uObject*)__this, a);
}

void ProxyImageSource__ProxyOnError(ProxyImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a)
{
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyError((::uObject*)__this, a);
}

void ProxyImageSource__Attach(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* impl)
{
    __this->_impl = impl;
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->add_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Resources::ProxyImageSource__ProxyOnChanged, __this));
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->add_Error(::uNewDelegateNonVirt(::app::Fuse::Resources::ImageSourceErrorHandler__typeof(), (const void*)::app::Fuse::Resources::ProxyImageSource__ProxyOnError, __this));

    if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Pin();
    }

    ::app::Fuse::Resources::LoadingImageSource* loading = ::uAs< ::app::Fuse::Resources::LoadingImageSource*>(impl, ::app::Fuse::Resources::LoadingImageSource__typeof());

    if (loading != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource*>(loading)->Policy(::uPtr< ::app::Fuse::Resources::DisposalPolicy*>(__this->_policy)->Clone());
    }

    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyChanged((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
}

void ProxyImageSource___ObjInit(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* outer)
{
    __this->_policy = ::app::Fuse::Resources::LoadingImageSource__CreateDefaultPolicy(NULL);
    __this->_density = 1.0f;
    __this->_outer = outer;
}

ProxyImageSource* ProxyImageSource__New_1(::uStatic* __this, ::app::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* inst = (::app::Fuse::Resources::ProxyImageSource*)::uAllocObject(sizeof(::app::Fuse::Resources::ProxyImageSource), ::app::Fuse::Resources::ProxyImageSource__typeof());
    inst->_ObjInit(outer);
    return inst;
}

}}}
