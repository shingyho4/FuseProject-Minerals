// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_PLACED_H__
#define __APP_FUSE_TRIGGERS_PLACED_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct PlacedArgs; } } }
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Placed;

struct Placed__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

Placed__uType* Placed__typeof();

void Placed__OnRooted_1(Placed* __this, ::app::Fuse::Elements::Element* elm);
void Placed__OnUnrooted_1(Placed* __this, ::app::Fuse::Elements::Element* elm);
void Placed__Cleanup(Placed* __this);
void Placed__OnPlaced(Placed* __this, ::uObject* sender, ::app::Fuse::Elements::PlacedArgs* args);
void Placed__OnUpdate(Placed* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

struct Placed : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    ::uStrong< ::app::Fuse::Translation*> _t;

    void Cleanup() { Placed__Cleanup(this); }
    void OnPlaced(::uObject* sender, ::app::Fuse::Elements::PlacedArgs* args) { Placed__OnPlaced(this, sender, args); }
    void OnUpdate(::uObject* sender, ::app::Uno::EventArgs* args) { Placed__OnUpdate(this, sender, args); }
};

}}}


#endif
