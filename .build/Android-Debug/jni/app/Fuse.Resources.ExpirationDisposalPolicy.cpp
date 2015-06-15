// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ExpirationDisposalPolicy.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Resources {

ExpirationDisposalPolicy__uType* ExpirationDisposalPolicy__typeof()
{
    static ExpirationDisposalPolicy__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ExpirationDisposalPolicy__uType*)::uAllocClassType(sizeof(ExpirationDisposalPolicy__uType), "Fuse.Resources.ExpirationDisposalPolicy", ::app::Fuse::Resources::DisposalPolicy__typeof());
        type->__fp_get_ShouldDispose = (bool(*)(::app::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__get_ShouldDispose;
        type->__fp_MarkUsed = (void(*)(::app::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__MarkUsed;
        type->__fp_Clone = (::app::Fuse::Resources::DisposalPolicy*(*)(::app::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__Clone;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double ExpirationDisposalPolicy__get_Timeout(ExpirationDisposalPolicy* __this)
{
    return __this->_Timeout;
}

void ExpirationDisposalPolicy__set_Timeout(ExpirationDisposalPolicy* __this, double value)
{
    __this->_Timeout = value;
}

bool ExpirationDisposalPolicy__get_ShouldDispose(ExpirationDisposalPolicy* __this)
{
    if (__this->Timeout() > 0.0)
    {
        double elapsed = ::app::Uno::Time__get_FrameTime(NULL) - __this->lastUsedFrameTime;

        if (elapsed > __this->Timeout())
        {
            return true;
        }
    }

    return false;
}

void ExpirationDisposalPolicy__MarkUsed(ExpirationDisposalPolicy* __this)
{
    __this->lastUsedFrameTime = ::app::Uno::Time__get_FrameTime(NULL);
}

::app::Fuse::Resources::DisposalPolicy* ExpirationDisposalPolicy__Clone(ExpirationDisposalPolicy* __this)
{
    ExpirationDisposalPolicy* p = ExpirationDisposalPolicy__New_1(NULL);
    ::uPtr< ::app::Fuse::Resources::ExpirationDisposalPolicy*>(p)->Timeout(__this->Timeout());
    return (::app::Fuse::Resources::DisposalPolicy*)p;
}

void ExpirationDisposalPolicy___ObjInit_1(ExpirationDisposalPolicy* __this)
{
    ::app::Fuse::Resources::DisposalPolicy___ObjInit(__this);
}

ExpirationDisposalPolicy* ExpirationDisposalPolicy__New_1(::uStatic* __this)
{
    ExpirationDisposalPolicy* inst = (::app::Fuse::Resources::ExpirationDisposalPolicy*)::uAllocObject(sizeof(::app::Fuse::Resources::ExpirationDisposalPolicy), ::app::Fuse::Resources::ExpirationDisposalPolicy__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
