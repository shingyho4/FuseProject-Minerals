// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_POLICY_AUTO_DISPOSABLE_H__
#define __APP_FUSE_RESOURCES_POLICY_AUTO_DISPOSABLE_H__

#include <app/Fuse.Resources.IAutoDisposable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct DisposalPolicy; } } }

namespace app {
namespace Fuse {
namespace Resources {

struct PolicyAutoDisposable;

struct PolicyAutoDisposable__uType : ::uClassType
{
    ::app::Fuse::Resources::IAutoDisposable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    void(*__fp_Dispose)(PolicyAutoDisposable*);
    bool(*__fp_get_ShouldDispose)(PolicyAutoDisposable*);
};

PolicyAutoDisposable__uType* PolicyAutoDisposable__typeof();

bool PolicyAutoDisposable__get_ShouldDispose(PolicyAutoDisposable* __this);
void PolicyAutoDisposable__MarkUsed(PolicyAutoDisposable* __this);
void PolicyAutoDisposable___ObjInit(PolicyAutoDisposable* __this);

struct PolicyAutoDisposable : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::DisposalPolicy*> Policy;

    void MarkUsed() { PolicyAutoDisposable__MarkUsed(this); }
    void Dispose() { (((PolicyAutoDisposable__uType*)this->__obj_type)->__fp_Dispose)(this); }
    void _ObjInit() { PolicyAutoDisposable___ObjInit(this); }
    bool ShouldDispose() { return (((PolicyAutoDisposable__uType*)this->__obj_type)->__fp_get_ShouldDispose)(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
