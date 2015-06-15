// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.DisposalPolicy.h>
#include <app/Fuse.Resources.PolicyAutoDisposable.h>

namespace app {
namespace Fuse {
namespace Resources {

PolicyAutoDisposable__uType* PolicyAutoDisposable__typeof()
{
    static PolicyAutoDisposable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PolicyAutoDisposable__uType*)::uAllocClassType(sizeof(PolicyAutoDisposable__uType), "Fuse.Resources.PolicyAutoDisposable", ::uObject__typeof(), 2, 1);
        type->__fp_get_ShouldDispose = PolicyAutoDisposable__get_ShouldDispose;

        type->__interface_0.__fp_get_ShouldDispose = (bool(*)(void*))PolicyAutoDisposable__get_ShouldDispose;

        type->Implements[0] = ::app::Fuse::Resources::IAutoDisposable__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(PolicyAutoDisposable__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(PolicyAutoDisposable__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(PolicyAutoDisposable, Policy);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Policy";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool PolicyAutoDisposable__get_ShouldDispose(PolicyAutoDisposable* __this)
{
    if (__this->Policy != NULL)
    {
        return ::uPtr< ::app::Fuse::Resources::DisposalPolicy*>(__this->Policy)->ShouldDispose();
    }

    return true;
}

void PolicyAutoDisposable__MarkUsed(PolicyAutoDisposable* __this)
{
    if (__this->Policy != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::DisposalPolicy*>(__this->Policy)->MarkUsed();
    }
}

void PolicyAutoDisposable___ObjInit(PolicyAutoDisposable* __this)
{
}

}}}
