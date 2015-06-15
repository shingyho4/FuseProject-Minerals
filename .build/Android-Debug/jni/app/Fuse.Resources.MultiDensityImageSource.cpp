// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ObservableList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Resources {

MultiDensityImageSource__uType* MultiDensityImageSource__typeof()
{
    static MultiDensityImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MultiDensityImageSource__uType*)::uAllocClassType(sizeof(MultiDensityImageSource__uType), "Fuse.Resources.MultiDensityImageSource", ::app::Fuse::Resources::ImageSource__typeof(), 0, 3);
        type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_Size;
        type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_PixelSize;
        type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_SizeDensity;
        type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged;
        type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__GetTexture;

        type->StrongRefOffsets[0] = offsetof(MultiDensityImageSource, _sources);
        type->StrongRefOffsets[1] = offsetof(MultiDensityImageSource, _proxy);
        type->StrongRefOffsets[2] = offsetof(MultiDensityImageSource, _active);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_sources";
        type->StrongRefNames[1] = "_proxy";
        type->StrongRefNames[2] = "_active";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* MultiDensityImageSource__get_Sources(MultiDensityImageSource* __this)
{
    return (::uObject*)__this->_sources;
}

::app::Uno::Float2 MultiDensityImageSource__get_Size(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

::app::Uno::Int2 MultiDensityImageSource__get_PixelSize(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

float MultiDensityImageSource__get_SizeDensity(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

void MultiDensityImageSource__OnImageAdded(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img)
{
    __this->SelectActive();
}

void MultiDensityImageSource__OnImageRemoved(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img)
{
    __this->SelectActive();
}

void MultiDensityImageSource__SelectActive(MultiDensityImageSource* __this)
{
    ::uObject* w = ::app::Fuse::App__get_CurrentWindow(NULL);
    float screen = __this->_hasMatchDensity ? __this->_matchDensity : ((w == NULL) ? 1.0f : ::app::Fuse::IWindow::Density(::uPtr< ::uObject*>(w)));
    float diff = FLT_INF;
    ::app::Fuse::Resources::ImageSource* use = NULL;

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource*>(__this->_sources)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Resources::ImageSource* source = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_123));
        float d = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Resources::ImageSource*>(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    __this->SwapActive(use);
}

void MultiDensityImageSource__SwapActive(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* use)
{
    if (use == __this->_active)
    {
        return;
    }

    if (__this->_active != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Release();
    }

    __this->_active = use;

    if (use != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Attach(use);
    }
}

void MultiDensityImageSource__OnPinChanged(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

::app::Uno::Graphics::Texture2D* MultiDensityImageSource__GetTexture(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

void MultiDensityImageSource___ObjInit_1(MultiDensityImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_sources = ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)::app::Fuse::Resources::MultiDensityImageSource__OnImageAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)::app::Fuse::Resources::MultiDensityImageSource__OnImageRemoved, __this));
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

MultiDensityImageSource* MultiDensityImageSource__New_1(::uStatic* __this)
{
    MultiDensityImageSource* inst = (::app::Fuse::Resources::MultiDensityImageSource*)::uAllocObject(sizeof(::app::Fuse::Resources::MultiDensityImageSource), ::app::Fuse::Resources::MultiDensityImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
