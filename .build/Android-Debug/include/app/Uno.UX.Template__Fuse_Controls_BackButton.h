// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_BACK_BUTTON_H__
#define __APP_UNO_U_X_TEMPLATE__FUSE_CONTROLS_BACK_BUTTON_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct BackButton; } } }

namespace app {
namespace Uno {
namespace UX {

struct Template__Fuse_Controls_BackButton;

struct Template__Fuse_Controls_BackButton__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
    void(*__fp_OnApply)(Template__Fuse_Controls_BackButton*, ::app::Fuse::Controls::BackButton*);
};

Template__Fuse_Controls_BackButton__uType* Template__Fuse_Controls_BackButton__typeof();

bool Template__Fuse_Controls_BackButton__get_Cascade(Template__Fuse_Controls_BackButton* __this);
void Template__Fuse_Controls_BackButton__set_Cascade(Template__Fuse_Controls_BackButton* __this, bool value);
bool Template__Fuse_Controls_BackButton__get_AffectSubtypes(Template__Fuse_Controls_BackButton* __this);
void Template__Fuse_Controls_BackButton__set_AffectSubtypes(Template__Fuse_Controls_BackButton* __this, bool value);
bool Template__Fuse_Controls_BackButton__Apply(Template__Fuse_Controls_BackButton* __this, ::uObject* obj);
void Template__Fuse_Controls_BackButton___ObjInit(Template__Fuse_Controls_BackButton* __this);

struct Template__Fuse_Controls_BackButton : ::uObject
{
    bool _cascade;
    bool _affectSubtypes;

    bool Apply(::uObject* obj) { return Template__Fuse_Controls_BackButton__Apply(this, obj); }
    void OnApply(::app::Fuse::Controls::BackButton* obj) { (((Template__Fuse_Controls_BackButton__uType*)this->__obj_type)->__fp_OnApply)(this, obj); }
    void _ObjInit() { Template__Fuse_Controls_BackButton___ObjInit(this); }
    bool Cascade() { return Template__Fuse_Controls_BackButton__get_Cascade(this); }
    void Cascade(bool value) { Template__Fuse_Controls_BackButton__set_Cascade(this, value); }
    bool AffectSubtypes() { return Template__Fuse_Controls_BackButton__get_AffectSubtypes(this); }
    void AffectSubtypes(bool value) { Template__Fuse_Controls_BackButton__set_AffectSubtypes(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
