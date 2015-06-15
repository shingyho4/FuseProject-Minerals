// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

Move__uType* Move__typeof()
{
    static Move__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Move__uType*)::uAllocClassType(sizeof(Move__uType), "Fuse.Animations.Move", ::app::Fuse::Animations::TransformAnimator__Fuse_Translation__typeof(), 0, 1);
        type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Translation*, ::app::Fuse::Node*, ::app::Fuse::Translation*))Move__Update;

        type->StrongRefOffsets[0] = offsetof(Move, _RelativeNode);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_RelativeNode";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* Move__get_RelativeNode(Move* __this)
{
    return __this->_RelativeNode;
}

void Move__set_RelativeNode(Move* __this, ::app::Fuse::Node* value)
{
    __this->_RelativeNode = value;
}

int Move__get_RelativeTo(Move* __this)
{
    return __this->_RelativeTo;
}

void Move__set_RelativeTo(Move* __this, int value)
{
    __this->_RelativeTo = value;
}

float Move__get_X(Move* __this)
{
    return __this->_X;
}

void Move__set_X(Move* __this, float value)
{
    __this->_X = value;
}

float Move__get_Y(Move* __this)
{
    return __this->_Y;
}

void Move__set_Y(Move* __this, float value)
{
    __this->_Y = value;
}

float Move__get_Z(Move* __this)
{
    return __this->_Z;
}

void Move__set_Z(Move* __this, float value)
{
    __this->_Z = value;
}

::app::Uno::Float3 Move__get_Vector(Move* __this)
{
    return ::app::Uno::Float3__New_2(NULL, __this->X(), __this->Y(), __this->Z());
}

void Move__set_Vector(Move* __this, ::app::Uno::Float3 value)
{
    __this->X(value.X);
    __this->Y(value.Y);
    __this->Z(value.Z);
}

void Move__Update(Move* __this, ::app::Fuse::Node* elm, ::app::Fuse::Translation* t)
{
    ::app::Fuse::Node* ind_123;
    ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode((ind_123 = __this->RelativeNode(), (ind_123 != NULL) ? ind_123 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(__this->Vector());
}

void Move___ObjInit_3(Move* __this)
{
    ::app::Fuse::Animations::TransformAnimator__Fuse_Translation___ObjInit_2(__this);
    __this->Priority(1000);
}

Move* Move__New_1(::uStatic* __this)
{
    Move* inst = (::app::Fuse::Animations::Move*)::uAllocObject(sizeof(::app::Fuse::Animations::Move), ::app::Fuse::Animations::Move__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
