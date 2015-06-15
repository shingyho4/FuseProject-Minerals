// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SWITCH_H__
#define __APP_FUSE_CONTROLS_SWITCH_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.IToggle.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct Switch;

struct Switch__uType : ::app::Fuse::Controls::Control__uType
{
    ::app::Fuse::Controls::IToggle __interface_7;
};

Switch__uType* Switch__typeof();

bool Switch__get_Toggled(Switch* __this);
void Switch__set_Toggled(Switch* __this, bool value);
void Switch__OnToggledChanged(Switch* __this);
void Switch__add_ToggledChanged(Switch* __this, ::uDelegate* value);
void Switch__remove_ToggledChanged(Switch* __this, ::uDelegate* value);

struct Switch : ::app::Fuse::Controls::Control
{
    bool _toggled;
    bool _hasToggled;
    ::uStrong< ::uDelegate*> ToggledChanged;

    void OnToggledChanged() { Switch__OnToggledChanged(this); }
    void add_ToggledChanged(::uDelegate* value) { Switch__add_ToggledChanged(this, value); }
    void remove_ToggledChanged(::uDelegate* value) { Switch__remove_ToggledChanged(this, value); }
    bool Toggled() { return Switch__get_Toggled(this); }
    void Toggled(bool value) { Switch__set_Toggled(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
