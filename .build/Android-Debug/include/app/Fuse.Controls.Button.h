// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BUTTON_H__
#define __APP_FUSE_CONTROLS_BUTTON_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Text; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct Button;

struct Button__uType : ::app::Fuse::Controls::Panel__uType
{
};

Button__uType* Button__typeof();

::app::Fuse::Controls::Text* Button__GetTextControl(Button* __this, bool create);
void Button__SetStyleText(Button* __this, ::uString* text);
void Button__SetTextInternal(Button* __this, ::uString* val);

struct Button : ::app::Fuse::Controls::Panel
{
    int _textState;

    ::app::Fuse::Controls::Text* GetTextControl(bool create) { return Button__GetTextControl(this, create); }
    void SetStyleText(::uString* text) { Button__SetStyleText(this, text); }
    void SetTextInternal(::uString* val) { Button__SetTextInternal(this, val); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
