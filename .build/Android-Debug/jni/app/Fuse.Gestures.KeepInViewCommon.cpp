// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.PlacedHandler.h>
#include <app/Fuse.Gestures.KeepInViewCommon.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ResizedHandler.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Gestures {

KeepInViewCommon__uType* KeepInViewCommon__typeof()
{
    static KeepInViewCommon__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeepInViewCommon__uType*)::uAllocClassType(sizeof(KeepInViewCommon__uType), "Fuse.Gestures.KeepInViewCommon", ::app::Fuse::Behavior__typeof(), 0, 2);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(KeepInViewCommon, _target);
        type->StrongRefOffsets[1] = offsetof(KeepInViewCommon, _rootElement);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_target";
        type->StrongRefNames[1] = "_rootElement";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* KeepInViewCommon__get_Target(KeepInViewCommon* __this)
{
    return __this->_target;
}

void KeepInViewCommon__set_Target(KeepInViewCommon* __this, ::app::Fuse::Elements::Element* value)
{
    __this->ReleaseElement();
    __this->_target = value;
    __this->AttachElement();
}

void KeepInViewCommon__OnRooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    __this->_rootElement = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->add_Resized(::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepInViewCommon__Update, __this));
        __this->AttachElement();
    }
}

void KeepInViewCommon__OnUnrooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->remove_Resized(::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepInViewCommon__Update, __this));
        __this->ReleaseElement();
    }
}

void KeepInViewCommon__ReleaseElement(KeepInViewCommon* __this)
{
    if (!__this->_attached)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::Elements::PlacedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepInViewCommon__Update, __this));
    __this->_attached = false;
}

void KeepInViewCommon__AttachElement(KeepInViewCommon* __this)
{
    if (__this->_target == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::Elements::PlacedHandler__typeof(), (const void*)::app::Fuse::Gestures::KeepInViewCommon__Update, __this));
    __this->_attached = true;
    __this->Update(NULL, NULL);
}

void KeepInViewCommon__Update(KeepInViewCommon* __this, ::uObject* s, ::uObject* a)
{
    if (__this->_target != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->BringIntoView();
    }
}

void KeepInViewCommon___ObjInit_1(KeepInViewCommon* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

}}}
