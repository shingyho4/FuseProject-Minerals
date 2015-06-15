// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_DISABLED_H__
#define __APP_FUSE_TRIGGERS_WHILE_DISABLED_H__

#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileDisabled;

struct WhileDisabled__uType : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger__uType
{
};

WhileDisabled__uType* WhileDisabled__typeof();

bool WhileDisabled__get_IsActive(WhileDisabled* __this);
void WhileDisabled___ObjInit_3(WhileDisabled* __this);
WhileDisabled* WhileDisabled__New_1(::uStatic* __this);

struct WhileDisabled : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void _ObjInit_3() { WhileDisabled___ObjInit_3(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {

}}}


#endif
