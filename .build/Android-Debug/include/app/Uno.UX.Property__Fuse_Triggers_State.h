// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_TRIGGERS_STATE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.UX.Property.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Triggers_State;

struct Property__Fuse_Triggers_State__uType : ::app::Uno::UX::Property__uType
{
};

Property__Fuse_Triggers_State__uType* Property__Fuse_Triggers_State__typeof();

void Property__Fuse_Triggers_State__RetainRestState(Property__Fuse_Triggers_State* __this);
void Property__Fuse_Triggers_State__Set(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
void Property__Fuse_Triggers_State__OnSet(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__OnGet(Property__Fuse_Triggers_State* __this);

struct Property__Fuse_Triggers_State : ::app::Uno::UX::Property
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Triggers::State*> _restState;

    void RetainRestState() { Property__Fuse_Triggers_State__RetainRestState(this); }
    void Set(::app::Fuse::Triggers::State* value) { Property__Fuse_Triggers_State__Set(this, value); }
    void OnSet(::app::Fuse::Triggers::State* value) { Property__Fuse_Triggers_State__OnSet(this, value); }
    ::app::Fuse::Triggers::State* OnGet() { return Property__Fuse_Triggers_State__OnGet(this); }
};

}}}


#endif
