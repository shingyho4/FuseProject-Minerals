// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_H__
#define __APP_FUSE_CONTROLS_TEXT_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct TextElement; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Text;

struct Text__uType : ::app::Fuse::Controls::Control__uType
{
};

Text__uType* Text__typeof();

::uString* Text__get_Content(Text* __this);
void Text__set_Content(Text* __this, ::uString* value);
void Text__OnTextChanged(Text* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Text___ObjInit_3(Text* __this);
Text* Text__New_1(::uStatic* __this);

struct Text : ::app::Fuse::Controls::Control
{
    ::uStrong< ::app::Fuse::Elements::TextElement*> _elm;
    ::uStrong< ::uDelegate*> ContentChanged;

    void OnTextChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Text__OnTextChanged(this, sender, args); }
    void _ObjInit_3() { Text___ObjInit_3(this); }
    ::uString* Content() { return Text__get_Content(this); }
    void Content(::uString* value) { Text__set_Content(this, value); }
};

}}}


#endif
