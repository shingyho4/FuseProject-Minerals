// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PLACEHOLDER_H__
#define __APP_FUSE_CONTROLS_PLACEHOLDER_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct Placeholder;

struct Placeholder__uType : ::app::Fuse::Controls::Control__uType
{
};

Placeholder__uType* Placeholder__typeof();

::app::Fuse::Elements::Element* Placeholder__get_Target(Placeholder* __this);
void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Elements::Element* value);
void Placeholder__AcquireTarget(Placeholder* __this);

struct Placeholder : ::app::Fuse::Controls::Control
{
    ::uStrong< ::app::Fuse::Elements::Element*> _Target;

    void AcquireTarget() { Placeholder__AcquireTarget(this); }
    ::app::Fuse::Elements::Element* Target() { return Placeholder__get_Target(this); }
    void Target(::app::Fuse::Elements::Element* value) { Placeholder__set_Target(this, value); }
};

}}}


#endif
