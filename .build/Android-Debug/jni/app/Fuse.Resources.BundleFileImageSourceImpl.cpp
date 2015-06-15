// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Fuse.Resources.BundleFileImageSourceImpl.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

BundleFileImageSourceImpl__uType* BundleFileImageSourceImpl__typeof()
{
    static BundleFileImageSourceImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BundleFileImageSourceImpl__uType*)::uAllocClassType(sizeof(BundleFileImageSourceImpl__uType), "Fuse.Resources.BundleFileImageSourceImpl", ::app::Fuse::Resources::LoadingImageSource__typeof(), 0, 1);
        type->__fp_AttemptLoad = (void(*)(::app::Fuse::Resources::LoadingImageSource*))BundleFileImageSourceImpl__AttemptLoad;

        type->StrongRefOffsets[0] = offsetof(BundleFileImageSourceImpl, _bundleFile);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_bundleFile";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* BundleFileImageSourceImpl__get_BundleFile(BundleFileImageSourceImpl* __this)
{
    return __this->_bundleFile;
}

void BundleFileImageSourceImpl__SyncLoad(BundleFileImageSourceImpl* __this)
{
    if (__this->IsLoaded())
    {
        __this->MarkUsed();
        return;
    }

    ::uArray* data = ::uPtr< ::app::Uno::BundleFile*>(__this->_bundleFile)->ReadAllBytes();
    ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_2(NULL, data), ::uPtr< ::app::Uno::BundleFile*>(__this->_bundleFile)->Name(), ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
    __this->OnChanged();
}

void BundleFileImageSourceImpl__AttemptLoad(BundleFileImageSourceImpl* __this)
{
    try
    {
        ::uArray* data = ::uPtr< ::app::Uno::BundleFile*>(__this->_bundleFile)->ReadAllBytes();
        ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_2(NULL, data), ::uPtr< ::app::Uno::BundleFile*>(__this->_bundleFile)->Name(), ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Cleanup(true);
            __this->OnError(::uGetConstString("BundleFileImageSource-failed-conversion"), e);
        }
        else
        {
            throw __t;
        }
    }
}

void BundleFileImageSourceImpl___ObjInit_2(BundleFileImageSourceImpl* __this, ::app::Uno::BundleFile* bundleFile)
{
    ::app::Fuse::Resources::LoadingImageSource___ObjInit_1(__this);

    if (bundleFile == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("bundleFile")));
    }

    __this->_bundleFile = bundleFile;
}

BundleFileImageSourceImpl* BundleFileImageSourceImpl__New_1(::uStatic* __this, ::app::Uno::BundleFile* bundleFile)
{
    BundleFileImageSourceImpl* inst = (::app::Fuse::Resources::BundleFileImageSourceImpl*)::uAllocObject(sizeof(::app::Fuse::Resources::BundleFileImageSourceImpl), ::app::Fuse::Resources::BundleFileImageSourceImpl__typeof());
    inst->_ObjInit_2(bundleFile);
    return inst;
}

}}}
