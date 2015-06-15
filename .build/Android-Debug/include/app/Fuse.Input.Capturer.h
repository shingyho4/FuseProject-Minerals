// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_CAPTURER_H__
#define __APP_FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct Capturer;

struct Capturer__uType : ::uClassType
{
};

Capturer__uType* Capturer__typeof();

::app::Fuse::Node* Capturer__get_Node(Capturer* __this);
void Capturer__set_Node(Capturer* __this, ::app::Fuse::Node* value);
::uObject* Capturer__get_Identity(Capturer* __this);
void Capturer__set_Identity(Capturer* __this, ::uObject* value);
::uDelegate* Capturer__get_LostCallback(Capturer* __this);
void Capturer__set_LostCallback(Capturer* __this, ::uDelegate* value);
bool Capturer__get_IsSuitable(Capturer* __this);
void Capturer___ObjInit(Capturer* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback);
Capturer* Capturer__New_1(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback);

struct Capturer : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> _Node;
    ::uStrong< ::uObject*> _Identity;
    ::uStrong< ::uDelegate*> _LostCallback;

    void _ObjInit(::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback) { Capturer___ObjInit(this, n, identity, lostCallback); }
    ::app::Fuse::Node* Node() { return Capturer__get_Node(this); }
    void Node(::app::Fuse::Node* value) { Capturer__set_Node(this, value); }
    ::uObject* Identity() { return Capturer__get_Identity(this); }
    void Identity(::uObject* value) { Capturer__set_Identity(this, value); }
    ::uDelegate* LostCallback() { return Capturer__get_LostCallback(this); }
    void LostCallback(::uDelegate* value) { Capturer__set_LostCallback(this, value); }
    bool IsSuitable() { return Capturer__get_IsSuitable(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Input {

}}}


#endif
