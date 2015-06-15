// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSLATION_H__
#define __APP_FUSE_TRANSLATION_H__

#include <app/Fuse.Transform.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct Translation;

struct Translation__uType : ::app::Fuse::Transform__uType
{
};

Translation__uType* Translation__typeof();

int Translation__get_RelativeTo(Translation* __this);
void Translation__set_RelativeTo(Translation* __this, int value);
::app::Fuse::Node* Translation__get_RelativeNode(Translation* __this);
void Translation__set_RelativeNode(Translation* __this, ::app::Fuse::Node* value);
float Translation__get_X(Translation* __this);
void Translation__set_X(Translation* __this, float value);
float Translation__get_Y(Translation* __this);
void Translation__set_Y(Translation* __this, float value);
float Translation__get_Z(Translation* __this);
void Translation__set_Z(Translation* __this, float value);
::app::Uno::Float3 Translation__get_Vector(Translation* __this);
void Translation__set_Vector(Translation* __this, ::app::Uno::Float3 value);
::app::Uno::Float3 Translation__get_AbsVector(Translation* __this);
void Translation__OnAdded(Translation* __this, ::app::Fuse::Node* n);
void Translation__OnRemoved(Translation* __this, ::app::Fuse::Node* n);
void Translation__CheckSubscription(Translation* __this);
void Translation__OnResized(Translation* __this, ::uObject* sender, ::uObject* args);
void Translation__OnRooted(Translation* __this, ::uObject* sender, ::uObject* args);
::app::Uno::Float3 Translation__RelativeToSize(Translation* __this, ::app::Uno::Float3 v, ::app::Fuse::Node* node);
void Translation__AppendTo(Translation* __this, ::app::Fuse::FastMatrix* m, float weight);
void Translation__PrependTo(Translation* __this, ::app::Fuse::FastMatrix* m);
void Translation___ObjInit_1(Translation* __this);
Translation* Translation__New_1(::uStatic* __this);

struct Translation : ::app::Fuse::Transform
{
    int _relativeTo;
    ::uStrong< ::app::Fuse::Node*> _relativeNode;
    ::uStrong< ::app::Fuse::Node*> _added;
    ::uStrong< ::uObject*> _subscribed;
    ::uStrong< ::app::Fuse::Node*> _rootedSubscribed;
    float _x;
    float _y;
    float _z;

    void CheckSubscription() { Translation__CheckSubscription(this); }
    void OnResized(::uObject* sender, ::uObject* args) { Translation__OnResized(this, sender, args); }
    void OnRooted(::uObject* sender, ::uObject* args) { Translation__OnRooted(this, sender, args); }
    ::app::Uno::Float3 RelativeToSize(::app::Uno::Float3 v, ::app::Fuse::Node* node);
    void _ObjInit_1() { Translation___ObjInit_1(this); }
    int RelativeTo() { return Translation__get_RelativeTo(this); }
    void RelativeTo(int value) { Translation__set_RelativeTo(this, value); }
    ::app::Fuse::Node* RelativeNode() { return Translation__get_RelativeNode(this); }
    void RelativeNode(::app::Fuse::Node* value) { Translation__set_RelativeNode(this, value); }
    float X() { return Translation__get_X(this); }
    void X(float value) { Translation__set_X(this, value); }
    float Y() { return Translation__get_Y(this); }
    void Y(float value) { Translation__set_Y(this, value); }
    float Z() { return Translation__get_Z(this); }
    void Z(float value) { Translation__set_Z(this, value); }
    ::app::Uno::Float3 Vector();
    void Vector(::app::Uno::Float3 value);
    ::app::Uno::Float3 AbsVector();
};

}}

#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 Translation::RelativeToSize(::app::Uno::Float3 v, ::app::Fuse::Node* node) { return Translation__RelativeToSize(this, v, node); }
inline ::app::Uno::Float3 Translation::Vector() { return Translation__get_Vector(this); }
inline void Translation::Vector(::app::Uno::Float3 value) { Translation__set_Vector(this, value); }
inline ::app::Uno::Float3 Translation::AbsVector() { return Translation__get_AbsVector(this); }

}}


#endif
