// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_NATIVE_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_NATIVE_ELEMENT_H__

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Platform2 { struct View; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

struct NativeElement;

struct NativeElement__uType : ::app::Fuse::Elements::Element__uType
{
};

NativeElement__uType* NativeElement__typeof();

void NativeElement__OnRooted(NativeElement* __this);
void NativeElement__OnUnrooted(NativeElement* __this);
void NativeElement__ResetNativeFrame(NativeElement* __this);
void NativeElement__OnUpdate(NativeElement* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeElement__OnFocusGained(NativeElement* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args);
void NativeElement__OnFocusLost(NativeElement* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args);
::app::Uno::Float2 NativeElement__GetContentSize(NativeElement* __this, ::app::Uno::Float2 fillSize, int fillSet);
void NativeElement__OnDraw(NativeElement* __this, ::app::Fuse::DrawContext* dc);

struct NativeElement : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Uno::Platform2::View*> _platformView;

    void ResetNativeFrame() { NativeElement__ResetNativeFrame(this); }
    void OnUpdate(::uObject* sender, ::app::Uno::EventArgs* args) { NativeElement__OnUpdate(this, sender, args); }
    void OnFocusGained(::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { NativeElement__OnFocusGained(this, sender, args); }
    void OnFocusLost(::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args) { NativeElement__OnFocusLost(this, sender, args); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

}}}}


#endif
