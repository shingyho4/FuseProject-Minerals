// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_TEMPLATE__NAV_BUTTON_H__
#define __APP_UNO_U_X_TEMPLATE__NAV_BUTTON_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno/Uno.h>
namespace app { struct NavButton; }

namespace app {
namespace Uno {
namespace UX {

struct Template__NavButton;

struct Template__NavButton__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
    void(*__fp_OnApply)(Template__NavButton*, ::app::NavButton*);
};

Template__NavButton__uType* Template__NavButton__typeof();

bool Template__NavButton__get_Cascade(Template__NavButton* __this);
void Template__NavButton__set_Cascade(Template__NavButton* __this, bool value);
bool Template__NavButton__get_AffectSubtypes(Template__NavButton* __this);
void Template__NavButton__set_AffectSubtypes(Template__NavButton* __this, bool value);
bool Template__NavButton__Apply(Template__NavButton* __this, ::uObject* obj);
void Template__NavButton___ObjInit(Template__NavButton* __this);

struct Template__NavButton : ::uObject
{
    bool _cascade;
    bool _affectSubtypes;

    bool Apply(::uObject* obj) { return Template__NavButton__Apply(this, obj); }
    void OnApply(::app::NavButton* obj) { (((Template__NavButton__uType*)this->__obj_type)->__fp_OnApply)(this, obj); }
    void _ObjInit() { Template__NavButton___ObjInit(this); }
    bool Cascade() { return Template__NavButton__get_Cascade(this); }
    void Cascade(bool value) { Template__NavButton__set_Cascade(this, value); }
    bool AffectSubtypes() { return Template__NavButton__get_AffectSubtypes(this); }
    void AffectSubtypes(bool value) { Template__NavButton__set_AffectSubtypes(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
