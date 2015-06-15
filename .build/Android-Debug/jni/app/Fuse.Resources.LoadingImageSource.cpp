// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.DisposalPolicy.h>
#include <app/Fuse.Resources.ExpirationDisposalPolicy.h>
#include <app/Fuse.Resources.IAutoDisposable.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <app/Fuse.Resources.LoadingImageSource_SourceDisposable.h>
#include <app/Fuse.Resources.PolicyAutoDisposable.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

LoadingImageSource__uType* LoadingImageSource__typeof()
{
    static LoadingImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LoadingImageSource__uType*)::uAllocClassType(sizeof(LoadingImageSource__uType), "Fuse.Resources.LoadingImageSource", ::app::Fuse::Resources::ImageSource__typeof(), 0, 3);
        type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_SizeDensity;
        type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_Size;
        type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_PixelSize;
        type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__GetTexture;
        type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged;

        type->StrongRefOffsets[0] = offsetof(LoadingImageSource, _disposable);
        type->StrongRefOffsets[1] = offsetof(LoadingImageSource, _policy);
        type->StrongRefOffsets[2] = offsetof(LoadingImageSource, _texture);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_disposable";
        type->StrongRefNames[1] = "_policy";
        type->StrongRefNames[2] = "_texture";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Resources::DisposalPolicy* LoadingImageSource__get_Policy(LoadingImageSource* __this)
{
    return __this->_policy;
}

void LoadingImageSource__set_Policy(LoadingImageSource* __this, ::app::Fuse::Resources::DisposalPolicy* value)
{
    if (value == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("value-cannot-be-null")));
    }

    __this->_policy = value;

    if (__this->_disposable != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->Policy = __this->_policy;
    }
}

bool LoadingImageSource__get_IsLoaded(LoadingImageSource* __this)
{
    return __this->_texture != NULL;
}

float LoadingImageSource__get_SizeDensity(LoadingImageSource* __this)
{
    return __this->_density;
}

::app::Uno::Float2 LoadingImageSource__get_Size(LoadingImageSource* __this)
{
    ::app::Uno::Int2 ts = __this->PixelSize();
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)ts.X, (float)ts.Y), __this->_density);
}

::app::Uno::Int2 LoadingImageSource__get_PixelSize(LoadingImageSource* __this)
{
    if (__this->_texture == NULL)
    {
        __this->LoadTexture();
    }

    if (__this->_disposable != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->MarkUsed();
    }

    return __this->_textureSize;
}

::app::Fuse::Resources::DisposalPolicy* LoadingImageSource__CreateDefaultPolicy(::uStatic* __this)
{
    ::app::Fuse::Resources::ExpirationDisposalPolicy* p = ::app::Fuse::Resources::ExpirationDisposalPolicy__New_1(NULL);
    ::uPtr< ::app::Fuse::Resources::ExpirationDisposalPolicy*>(p)->Timeout(60.0);
    return (::app::Fuse::Resources::DisposalPolicy*)p;
}

::app::Uno::Graphics::Texture2D* LoadingImageSource__GetTexture(LoadingImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        if (__this->_disposable != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->MarkUsed();
        }

        return __this->_texture;
    }

    __this->LoadTexture();
    return NULL;
}

void LoadingImageSource__LoadTexture(LoadingImageSource* __this)
{
    if (__this->_loading || __this->_failed)
    {
        return;
    }

    if (!__this->_haveAction)
    {
        ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__AsyncLoadTexture, __this), 0);
        __this->_haveAction = true;
    }
}

void LoadingImageSource__AsyncLoadTexture(LoadingImageSource* __this)
{
    __this->_haveAction = false;

    if (__this->_loading || __this->_failed)
    {
        return;
    }

    __this->AttemptLoad();
}

void LoadingImageSource__Dispose(LoadingImageSource* __this)
{
    __this->Cleanup(false);
}

void LoadingImageSource__Cleanup(LoadingImageSource* __this, bool failed)
{
    if (__this->_texture != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Dispose();
        __this->_texture = NULL;
    }

    __this->_textureSize = ::app::Uno::Int2__New_1(NULL, 0);
    __this->_loading = false;
    __this->_failed = failed;

    if (__this->_disposable != NULL)
    {
        ::app::Fuse::Resources::DisposalManager__Remove(NULL, (::uObject*)__this->_disposable);
    }

    __this->_disposable = NULL;
    __this->OnChanged();
}

void LoadingImageSource__MarkUsed(LoadingImageSource* __this)
{
    if (__this->_disposable != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->MarkUsed();
    }
}

void LoadingImageSource__SetTexture(LoadingImageSource* __this, ::app::Uno::Graphics::Texture2D* texture)
{
    __this->_texture = texture;
    __this->_textureSize = ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->Size();

    if (__this->_disposable == NULL)
    {
        __this->_disposable = ::app::Fuse::Resources::LoadingImageSource_SourceDisposable__New_1(NULL);
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->_source = __this;
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->Policy = __this->_policy;
        ::app::Fuse::Resources::DisposalManager__Add(NULL, (::uObject*)__this->_disposable);
    }

    ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->MarkUsed();
    __this->OnChanged();
}

void LoadingImageSource__OnPinChanged(LoadingImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource__OnPinChanged(__this);

    if (__this->_disposable != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource_SourceDisposable*>(__this->_disposable)->MarkUsed();
    }
}

void LoadingImageSource___ObjInit_1(LoadingImageSource* __this)
{
    __this->_policy = LoadingImageSource__CreateDefaultPolicy(NULL);
    __this->_density = 1.0f;
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
}

}}}
