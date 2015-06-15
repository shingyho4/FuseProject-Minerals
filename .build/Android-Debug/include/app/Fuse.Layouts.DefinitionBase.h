// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_DEFINITION_BASE_H__
#define __APP_FUSE_LAYOUTS_DEFINITION_BASE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct DefinitionBase;

struct DefinitionBase__uType : ::uClassType
{
};

DefinitionBase__uType* DefinitionBase__typeof();

float DefinitionBase__get_ActualOffset(DefinitionBase* __this);
void DefinitionBase__set_ActualOffset(DefinitionBase* __this, float value);
bool DefinitionBase__get_Implicit(DefinitionBase* __this);
void DefinitionBase__set_Implicit(DefinitionBase* __this, bool value);
void DefinitionBase__OnChanged(DefinitionBase* __this);
void DefinitionBase___ObjInit(DefinitionBase* __this);
void DefinitionBase__add_Changed(DefinitionBase* __this, ::uDelegate* value);
void DefinitionBase__remove_Changed(DefinitionBase* __this, ::uDelegate* value);

struct DefinitionBase : ::uObject
{
    float _actualOffset;
    ::uStrong< ::uDelegate*> Changed;
    bool _Implicit;

    void OnChanged() { DefinitionBase__OnChanged(this); }
    void _ObjInit() { DefinitionBase___ObjInit(this); }
    void add_Changed(::uDelegate* value) { DefinitionBase__add_Changed(this, value); }
    void remove_Changed(::uDelegate* value) { DefinitionBase__remove_Changed(this, value); }
    float ActualOffset() { return DefinitionBase__get_ActualOffset(this); }
    void ActualOffset(float value) { DefinitionBase__set_ActualOffset(this, value); }
    bool Implicit() { return DefinitionBase__get_Implicit(this); }
    void Implicit(bool value) { DefinitionBase__set_Implicit(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Layouts {

}}}


#endif
