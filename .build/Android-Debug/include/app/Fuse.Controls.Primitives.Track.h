// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Primitives\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PRIMITIVES_TRACK_H__
#define __APP_FUSE_CONTROLS_PRIMITIVES_TRACK_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.Primitives.RangeControl.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

struct Track;

extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Track___horizontalGesture;

struct Track__uType : ::app::Fuse::Controls::Primitives::RangeControl__uType
{
};

Track__uType* Track__typeof();

::app::Fuse::Elements::Element* Track__get_Thumb(Track* __this);
void Track__set_Thumb(Track* __this, ::app::Fuse::Elements::Element* value);
::app::Uno::Float2 Track__get_ThumbSize(Track* __this);
::app::Uno::Rect Track__get_ClientRect(Track* __this);
void Track__UpdateThumbPosition(Track* __this);
void Track__OnPlaced(Track* __this, ::app::Uno::Float2 oldPos);
void Track__OnResized(Track* __this, ::app::Uno::Float2 oldSize);
void Track__OnValueChanged(Track* __this);
::app::Uno::Float2 Track__ValueToPosition(Track* __this, float val);
float Track__Remap(Track* __this, float val, float min, float max, float newMin, float newMax);
void Track___TypeInit_3(::uStatic* __this);

struct Track : ::app::Fuse::Controls::Primitives::RangeControl
{
    ::uStrong< ::app::Fuse::Translation*> _thumbTransform;

    void UpdateThumbPosition() { Track__UpdateThumbPosition(this); }
    ::app::Uno::Float2 ValueToPosition(float val);
    float Remap(float val, float min, float max, float newMin, float newMax) { return Track__Remap(this, val, min, max, newMin, newMax); }
    ::app::Fuse::Elements::Element* Thumb() { return Track__get_Thumb(this); }
    void Thumb(::app::Fuse::Elements::Element* value) { Track__set_Thumb(this, value); }
    ::app::Uno::Float2 ThumbSize();
    ::app::Uno::Rect ClientRect();
};

}}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

inline ::app::Uno::Float2 Track::ValueToPosition(float val) { return Track__ValueToPosition(this, val); }
inline ::app::Uno::Float2 Track::ThumbSize() { return Track__get_ThumbSize(this); }
inline ::app::Uno::Rect Track::ClientRect() { return Track__get_ClientRect(this); }

}}}}


#endif
