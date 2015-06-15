// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_KEEP_IN_VIEW_COMMON_H__
#define __APP_FUSE_GESTURES_KEEP_IN_VIEW_COMMON_H__

#include <app/Fuse.Behavior.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct KeepInViewCommon;

struct KeepInViewCommon__uType : ::app::Fuse::Behavior__uType
{
};

KeepInViewCommon__uType* KeepInViewCommon__typeof();

::app::Fuse::Elements::Element* KeepInViewCommon__get_Target(KeepInViewCommon* __this);
void KeepInViewCommon__set_Target(KeepInViewCommon* __this, ::app::Fuse::Elements::Element* value);
void KeepInViewCommon__OnRooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm);
void KeepInViewCommon__OnUnrooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm);
void KeepInViewCommon__ReleaseElement(KeepInViewCommon* __this);
void KeepInViewCommon__AttachElement(KeepInViewCommon* __this);
void KeepInViewCommon__Update(KeepInViewCommon* __this, ::uObject* s, ::uObject* a);
void KeepInViewCommon___ObjInit_1(KeepInViewCommon* __this);

struct KeepInViewCommon : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Elements::Element*> _target;
    bool _attached;
    ::uStrong< ::app::Fuse::Elements::Element*> _rootElement;

    void ReleaseElement() { KeepInViewCommon__ReleaseElement(this); }
    void AttachElement() { KeepInViewCommon__AttachElement(this); }
    void Update(::uObject* s, ::uObject* a) { KeepInViewCommon__Update(this, s, a); }
    void _ObjInit_1() { KeepInViewCommon___ObjInit_1(this); }
    ::app::Fuse::Elements::Element* Target() { return KeepInViewCommon__get_Target(this); }
    void Target(::app::Fuse::Elements::Element* value) { KeepInViewCommon__set_Target(this, value); }
};

}}}


#endif
