// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_TEMPLATE__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_U_X_TEMPLATE__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Uno {
namespace UX {

struct Template__Fuse_Elements_Element;

struct Template__Fuse_Elements_Element__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
    void(*__fp_OnApply)(Template__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*);
};

Template__Fuse_Elements_Element__uType* Template__Fuse_Elements_Element__typeof();

bool Template__Fuse_Elements_Element__get_Cascade(Template__Fuse_Elements_Element* __this);
void Template__Fuse_Elements_Element__set_Cascade(Template__Fuse_Elements_Element* __this, bool value);
bool Template__Fuse_Elements_Element__get_AffectSubtypes(Template__Fuse_Elements_Element* __this);
void Template__Fuse_Elements_Element__set_AffectSubtypes(Template__Fuse_Elements_Element* __this, bool value);
bool Template__Fuse_Elements_Element__Apply(Template__Fuse_Elements_Element* __this, ::uObject* obj);
void Template__Fuse_Elements_Element___ObjInit(Template__Fuse_Elements_Element* __this);

struct Template__Fuse_Elements_Element : ::uObject
{
    bool _cascade;
    bool _affectSubtypes;

    bool Apply(::uObject* obj) { return Template__Fuse_Elements_Element__Apply(this, obj); }
    void OnApply(::app::Fuse::Elements::Element* obj) { (((Template__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_OnApply)(this, obj); }
    void _ObjInit() { Template__Fuse_Elements_Element___ObjInit(this); }
    bool Cascade() { return Template__Fuse_Elements_Element__get_Cascade(this); }
    void Cascade(bool value) { Template__Fuse_Elements_Element__set_Cascade(this, value); }
    bool AffectSubtypes() { return Template__Fuse_Elements_Element__get_AffectSubtypes(this); }
    void AffectSubtypes(bool value) { Template__Fuse_Elements_Element__set_AffectSubtypes(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
