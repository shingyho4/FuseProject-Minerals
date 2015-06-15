// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.PlacedArgs.h>
#include <app/Fuse.Elements.PlacedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.Triggers.Placed.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Time.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Triggers {

Placed__uType* Placed__typeof()
{
    static Placed__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Placed__uType*)::uAllocClassType(sizeof(Placed__uType), "Fuse.Triggers.Placed", ::app::Fuse::Triggers::ElementTrigger__typeof(), 0, 2);
        type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))Placed__OnRooted_1;
        type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))Placed__OnUnrooted_1;

        type->StrongRefOffsets[0] = offsetof(Placed, _element);
        type->StrongRefOffsets[1] = offsetof(Placed, _t);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_element";
        type->StrongRefNames[1] = "_t";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Placed__OnRooted_1(Placed* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_element = elm;
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::Elements::PlacedHandler__typeof(), (const void*)::app::Fuse::Triggers::Placed__OnPlaced, __this));
}

void Placed__OnUnrooted_1(Placed* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::Elements::PlacedHandler__typeof(), (const void*)::app::Fuse::Triggers::Placed__OnPlaced, __this));
    __this->_element = NULL;
}

void Placed__Cleanup(Placed* __this)
{
    if (__this->_t != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Transforms()), (::app::Fuse::Transform*)__this->_t);
        __this->_t = NULL;
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::Placed__OnUpdate, __this));
    }
}

void Placed__OnPlaced(Placed* __this, ::uObject* sender, ::app::Fuse::Elements::PlacedArgs* args)
{
    if (!::uPtr< ::app::Fuse::Elements::PlacedArgs*>(args)->HasOldPosition())
    {
        return;
    }

    if (__this->_t == NULL)
    {
        __this->_t = ::app::Fuse::Translation__New_1(NULL);
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Transforms()), (::app::Fuse::Transform*)__this->_t);
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::Placed__OnUpdate, __this));
        __this->Activate(NULL);
    }

    ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector(::app::Uno::Float3__op_Addition(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector(), ::app::Uno::Float3__New_3(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Elements::PlacedArgs*>(args)->OldPosition(), ::uPtr< ::app::Fuse::Elements::PlacedArgs*>(args)->NewPosition()), 0.0f)));
}

void Placed__OnUpdate(Placed* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    float len = ::app::Uno::Vector__Length_1(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector());

    if ((double)len < 3.0)
    {
        __this->Cleanup();
        __this->Deactivate();
    }
    else
    {
        ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector(::app::Uno::Float3__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector(), ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Vector__Normalize_1(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_t)->Vector()), ::app::Uno::Math__Sqrt_1(NULL, len) + 1.0f), ::app::Uno::Time__get_FrameIntervalFloat(NULL)), 100.0f)));
    }
}

}}}
