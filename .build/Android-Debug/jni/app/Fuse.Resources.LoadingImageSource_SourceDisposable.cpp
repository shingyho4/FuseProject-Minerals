// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <app/Fuse.Resources.LoadingImageSource_SourceDisposable.h>

namespace app {
namespace Fuse {
namespace Resources {

LoadingImageSource_SourceDisposable__uType* LoadingImageSource_SourceDisposable__typeof()
{
    static LoadingImageSource_SourceDisposable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LoadingImageSource_SourceDisposable__uType*)::uAllocClassType(sizeof(LoadingImageSource_SourceDisposable__uType), "Fuse.Resources.LoadingImageSource.SourceDisposable", ::app::Fuse::Resources::PolicyAutoDisposable__typeof(), 2, 1);
        type->__fp_get_ShouldDispose = (bool(*)(::app::Fuse::Resources::PolicyAutoDisposable*))LoadingImageSource_SourceDisposable__get_ShouldDispose;
        type->__fp_Dispose = (void(*)(::app::Fuse::Resources::PolicyAutoDisposable*))LoadingImageSource_SourceDisposable__Dispose;

        type->__interface_1.__fp_Dispose = (void(*)(void*))LoadingImageSource_SourceDisposable__Dispose;
        type->__interface_0.__fp_get_ShouldDispose = (bool(*)(void*))LoadingImageSource_SourceDisposable__get_ShouldDispose;

        type->Implements[0] = ::app::Fuse::Resources::IAutoDisposable__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(LoadingImageSource_SourceDisposable__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(LoadingImageSource_SourceDisposable__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(LoadingImageSource_SourceDisposable, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool LoadingImageSource_SourceDisposable__get_ShouldDispose(LoadingImageSource_SourceDisposable* __this)
{
    return !::uPtr< ::app::Fuse::Resources::LoadingImageSource*>(__this->_source)->IsPinned() && ::app::Fuse::Resources::PolicyAutoDisposable__get_ShouldDispose(__this);
}

void LoadingImageSource_SourceDisposable__Dispose(LoadingImageSource_SourceDisposable* __this)
{
    ::uPtr< ::app::Fuse::Resources::LoadingImageSource*>(__this->_source)->Dispose();
}

void LoadingImageSource_SourceDisposable___ObjInit_1(LoadingImageSource_SourceDisposable* __this)
{
    ::app::Fuse::Resources::PolicyAutoDisposable___ObjInit(__this);
}

LoadingImageSource_SourceDisposable* LoadingImageSource_SourceDisposable__New_1(::uStatic* __this)
{
    LoadingImageSource_SourceDisposable* inst = (::app::Fuse::Resources::LoadingImageSource_SourceDisposable*)::uAllocObject(sizeof(::app::Fuse::Resources::LoadingImageSource_SourceDisposable), ::app::Fuse::Resources::LoadingImageSource_SourceDisposable__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
