// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MOVE_H__
#define __APP_FUSE_ANIMATIONS_MOVE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Move;

struct Move__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Translation__uType
{
};

Move__uType* Move__typeof();

::app::Fuse::Node* Move__get_RelativeNode(Move* __this);
void Move__set_RelativeNode(Move* __this, ::app::Fuse::Node* value);
int Move__get_RelativeTo(Move* __this);
void Move__set_RelativeTo(Move* __this, int value);
float Move__get_X(Move* __this);
void Move__set_X(Move* __this, float value);
float Move__get_Y(Move* __this);
void Move__set_Y(Move* __this, float value);
float Move__get_Z(Move* __this);
void Move__set_Z(Move* __this, float value);
::app::Uno::Float3 Move__get_Vector(Move* __this);
void Move__set_Vector(Move* __this, ::app::Uno::Float3 value);
void Move__Update(Move* __this, ::app::Fuse::Node* elm, ::app::Fuse::Translation* t);
void Move___ObjInit_3(Move* __this);
Move* Move__New_1(::uStatic* __this);

struct Move : ::app::Fuse::Animations::TransformAnimator__Fuse_Translation
{
    ::uStrong< ::app::Fuse::Node*> _RelativeNode;
    int _RelativeTo;
    float _X;
    float _Y;
    float _Z;

    void _ObjInit_3() { Move___ObjInit_3(this); }
    ::app::Fuse::Node* RelativeNode() { return Move__get_RelativeNode(this); }
    void RelativeNode(::app::Fuse::Node* value) { Move__set_RelativeNode(this, value); }
    int RelativeTo() { return Move__get_RelativeTo(this); }
    void RelativeTo(int value) { Move__set_RelativeTo(this, value); }
    float X() { return Move__get_X(this); }
    void X(float value) { Move__set_X(this, value); }
    float Y() { return Move__get_Y(this); }
    void Y(float value) { Move__set_Y(this, value); }
    float Z() { return Move__get_Z(this); }
    void Z(float value) { Move__set_Z(this, value); }
    ::app::Uno::Float3 Vector();
    void Vector(::app::Uno::Float3 value);
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float3 Move::Vector() { return Move__get_Vector(this); }
inline void Move::Vector(::app::Uno::Float3 value) { Move__set_Vector(this, value); }

}}}


#endif
