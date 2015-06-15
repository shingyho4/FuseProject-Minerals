// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.BundleFileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_BundleFileImageSourceImpl.h>

namespace app {
namespace Uno {

WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType* WeakReference__Fuse_Resources_BundleFileImageSourceImpl__typeof()
{
    static WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType*)::uAllocClassType(sizeof(WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType), "Uno.WeakReference<Fuse.Resources.BundleFileImageSourceImpl>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(WeakReference__Fuse_Resources_BundleFileImageSourceImpl, _target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WeakReference__Fuse_Resources_BundleFileImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_BundleFileImageSourceImpl* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl** target)
{
    ::app::Fuse::Resources::BundleFileImageSourceImpl* result = __this->_target;
    *target = result;
    return result != NULL;
}

void WeakReference__Fuse_Resources_BundleFileImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_BundleFileImageSourceImpl* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl* target)
{
    __this->_target = target;
}

WeakReference__Fuse_Resources_BundleFileImageSourceImpl* WeakReference__Fuse_Resources_BundleFileImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl* target)
{
    WeakReference__Fuse_Resources_BundleFileImageSourceImpl* inst = (::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl*)::uAllocObject(sizeof(::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl), ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl__typeof());
    inst->_ObjInit(target);
    return inst;
}

}}
