// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TOP_FRAME_BACKGROUND_H__
#define __APP_FUSE_CONTROLS_TOP_FRAME_BACKGROUND_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {

struct TopFrameBackground;

struct TopFrameBackground__uType : ::app::Fuse::Controls::Control__uType
{
};

TopFrameBackground__uType* TopFrameBackground__typeof();

void TopFrameBackground__OnRooted(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted(TopFrameBackground* __this);
void TopFrameBackground__OnFrameResized(TopFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args);
::app::Uno::Float2 TopFrameBackground__GetContentSize(TopFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet);
void TopFrameBackground___ObjInit_3(TopFrameBackground* __this);

struct TopFrameBackground : ::app::Fuse::Controls::Control
{
    void OnFrameResized(::uObject* sender, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args) { TopFrameBackground__OnFrameResized(this, sender, args); }
    void _ObjInit_3() { TopFrameBackground___ObjInit_3(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
