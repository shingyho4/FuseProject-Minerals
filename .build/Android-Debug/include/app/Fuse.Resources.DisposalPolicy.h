// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_DISPOSAL_POLICY_H__
#define __APP_FUSE_RESOURCES_DISPOSAL_POLICY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

struct DisposalPolicy;

struct DisposalPolicy__uType : ::uClassType
{
    void(*__fp_MarkUsed)(DisposalPolicy*);
    DisposalPolicy*(*__fp_Clone)(DisposalPolicy*);
    bool(*__fp_get_ShouldDispose)(DisposalPolicy*);
};

DisposalPolicy__uType* DisposalPolicy__typeof();

void DisposalPolicy___ObjInit(DisposalPolicy* __this);

struct DisposalPolicy : ::uObject
{
    void MarkUsed() { (((DisposalPolicy__uType*)this->__obj_type)->__fp_MarkUsed)(this); }
    DisposalPolicy* Clone() { return (((DisposalPolicy__uType*)this->__obj_type)->__fp_Clone)(this); }
    void _ObjInit() { DisposalPolicy___ObjInit(this); }
    bool ShouldDispose() { return (((DisposalPolicy__uType*)this->__obj_type)->__fp_get_ShouldDispose)(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
