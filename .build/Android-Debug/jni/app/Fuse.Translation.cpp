// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ResizedHandler.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Bool.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {

Translation__uType* Translation__typeof()
{
    static Translation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Translation__uType*)::uAllocClassType(sizeof(Translation__uType), "Fuse.Translation", ::app::Fuse::Transform__typeof(), 0, 4);
        type->__fp_OnAdded = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Translation__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Translation__OnRemoved;
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Translation__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Translation__PrependTo;

        type->StrongRefOffsets[0] = offsetof(Translation, _relativeNode);
        type->StrongRefOffsets[1] = offsetof(Translation, _added);
        type->StrongRefOffsets[2] = offsetof(Translation, _subscribed);
        type->StrongRefOffsets[3] = offsetof(Translation, _rootedSubscribed);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_relativeNode";
        type->StrongRefNames[1] = "_added";
        type->StrongRefNames[2] = "_subscribed";
        type->StrongRefNames[3] = "_rootedSubscribed";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Translation__get_RelativeTo(Translation* __this)
{
    return __this->_relativeTo;
}

void Translation__set_RelativeTo(Translation* __this, int value)
{
    if (__this->_relativeTo == value)
    {
        return;
    }

    __this->_relativeTo = value;
    __this->CheckSubscription();
}

::app::Fuse::Node* Translation__get_RelativeNode(Translation* __this)
{
    return __this->_relativeNode;
}

void Translation__set_RelativeNode(Translation* __this, ::app::Fuse::Node* value)
{
    if (__this->_relativeNode == value)
    {
        return;
    }

    __this->_relativeNode = value;
    __this->CheckSubscription();
}

float Translation__get_X(Translation* __this)
{
    return __this->_x;
}

void Translation__set_X(Translation* __this, float value)
{
    if (__this->_x != value)
    {
        __this->_x = value;
        __this->OnMatrixChanged();
    }
}

float Translation__get_Y(Translation* __this)
{
    return __this->_y;
}

void Translation__set_Y(Translation* __this, float value)
{
    if (__this->_y != value)
    {
        __this->_y = value;
        __this->OnMatrixChanged();
    }
}

float Translation__get_Z(Translation* __this)
{
    return __this->_z;
}

void Translation__set_Z(Translation* __this, float value)
{
    if (__this->_z != value)
    {
        __this->_z = value;
        __this->OnMatrixChanged();
    }
}

::app::Uno::Float3 Translation__get_Vector(Translation* __this)
{
    return ::app::Uno::Float3__New_2(NULL, __this->X(), __this->Y(), __this->Z());
}

void Translation__set_Vector(Translation* __this, ::app::Uno::Float3 value)
{
    if (((__this->_x != value.X) || (__this->_y != value.Y)) || (__this->_z != value.Z))
    {
        __this->_x = value.X;
        __this->_y = value.Y;
        __this->_z = value.Z;
        __this->OnMatrixChanged();
    }
}

::app::Uno::Float3 Translation__get_AbsVector(Translation* __this)
{
    ::app::Uno::Float3 v = __this->Vector();
    ::app::Fuse::Node* ind_124 = __this->RelativeNode();
    ::app::Fuse::Node* node = (ind_124 != NULL) ? ind_124 : __this->_added;

    if ((__this->RelativeTo() == 2) && (node != NULL))
    {
        v = __this->RelativeToSize(v, ::uPtr< ::app::Fuse::Node*>(node)->ParentNode());
    }
    else if (__this->RelativeTo() == 1)
    {
        v = __this->RelativeToSize(v, node);
    }

    return v;
}

void Translation__OnAdded(Translation* __this, ::app::Fuse::Node* n)
{
    __this->_added = n;
    __this->CheckSubscription();
}

void Translation__OnRemoved(Translation* __this, ::app::Fuse::Node* n)
{
    __this->_added = NULL;
    __this->CheckSubscription();
}

void Translation__CheckSubscription(Translation* __this)
{
    ::app::Fuse::Node* root = NULL;
    ::app::Fuse::Node* ind_123 = __this->RelativeNode();
    ::app::Fuse::Node* node = (ind_123 != NULL) ? ind_123 : __this->_added;

    if (__this->RelativeTo() == 1)
    {
    }
    else if ((__this->RelativeTo() == 2) && (node != NULL))
    {
        root = node;
        node = ::uAs< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Node*>(node)->Parent(), ::app::Fuse::Node__typeof());
    }
    else
    {
        node = NULL;
    }

    ::uObject* act = ::uAs< ::uObject*>(node, ::app::Fuse::IActualSize__typeof());

    if (__this->_subscribed != act)
    {
        if (__this->_subscribed != NULL)
        {
            ::app::Fuse::IActualSize::remove_Resized(::uPtr< ::uObject*>(__this->_subscribed), ::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Translation__OnResized, __this));
            __this->_subscribed = NULL;
        }

        if (act != NULL)
        {
            ::app::Fuse::IActualSize::add_Resized(::uPtr< ::uObject*>(act), ::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Translation__OnResized, __this));
            __this->_subscribed = act;
        }
    }

    if (root != __this->_rootedSubscribed)
    {
        if (__this->_rootedSubscribed != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_rootedSubscribed)->remove_Rooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Translation__OnRooted, __this));
            __this->_rootedSubscribed = NULL;
        }

        if (root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(root)->add_Rooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Translation__OnRooted, __this));
            __this->_rootedSubscribed = root;
        }
    }
}

void Translation__OnResized(Translation* __this, ::uObject* sender, ::uObject* args)
{
    __this->OnMatrixChanged();
}

void Translation__OnRooted(Translation* __this, ::uObject* sender, ::uObject* args)
{
    __this->CheckSubscription();
    __this->OnMatrixChanged();
}

::app::Uno::Float3 Translation__RelativeToSize(Translation* __this, ::app::Uno::Float3 v, ::app::Fuse::Node* node)
{
    ::uObject* isz = ::uAs< ::uObject*>(node, ::app::Fuse::IActualSize__typeof());

    if (isz == NULL)
    {
        return v;
    }

    return ::app::Uno::Float3__op_Multiply_1(NULL, v, ::app::Fuse::IActualSize::ActualSize(::uPtr< ::uObject*>(isz)));
}

void Translation__AppendTo(Translation* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::app::Uno::Float3 v = ::app::Uno::Float3__op_Multiply(NULL, __this->AbsVector(), weight);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendTranslation(v.X, v.Y, v.Z);
}

void Translation__PrependTo(Translation* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float3 v = __this->AbsVector();
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(v.X, v.Y, v.Z);
}

void Translation___ObjInit_1(Translation* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
}

Translation* Translation__New_1(::uStatic* __this)
{
    Translation* inst = (::app::Fuse::Translation*)::uAllocObject(sizeof(::app::Fuse::Translation), ::app::Fuse::Translation__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
