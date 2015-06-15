// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_CONTAINING_TEXT_H__
#define __APP_FUSE_TRIGGERS_CONTAINING_TEXT_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct ContainingText;

struct ContainingText__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

ContainingText__uType* ContainingText__typeof();

void ContainingText__OnRooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm);
void ContainingText__OnUnrooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm);
void ContainingText__OnTextChanged(ContainingText* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ContainingText__ApplyState(ContainingText* __this);

struct ContainingText : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::app::Fuse::Controls::TextInput*> _textInput;

    void OnTextChanged(::uObject* sender, ::app::Uno::EventArgs* args) { ContainingText__OnTextChanged(this, sender, args); }
    void ApplyState() { ContainingText__ApplyState(this); }
};

}}}


#endif
