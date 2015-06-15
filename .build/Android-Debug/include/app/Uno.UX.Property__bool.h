// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__BOOL_H__
#define __APP_UNO_U_X_PROPERTY__BOOL_H__

#include <app/Uno.UX.Property.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__bool;

struct Property__bool__uType : ::app::Uno::UX::Property__uType
{
    void(*__fp_OnSet)(Property__bool*, bool);
    bool(*__fp_OnGet)(Property__bool*);
};

Property__bool__uType* Property__bool__typeof();

void Property__bool__RetainRestState(Property__bool* __this);
bool Property__bool__GetRestState(Property__bool* __this);
void Property__bool__Set(Property__bool* __this, bool value);
void Property__bool__OnSet(Property__bool* __this, bool value);
bool Property__bool__OnGet(Property__bool* __this);
void Property__bool___ObjInit_1(Property__bool* __this, int stage);

struct Property__bool : ::app::Uno::UX::Property
{
    bool _hasRestState;
    bool _restState;

    void RetainRestState() { Property__bool__RetainRestState(this); }
    bool GetRestState() { return Property__bool__GetRestState(this); }
    void Set(bool value) { Property__bool__Set(this, value); }
    void OnSet(bool value) { (((Property__bool__uType*)this->__obj_type)->__fp_OnSet)(this, value); }
    bool OnGet() { return (((Property__bool__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void _ObjInit_1(int stage) { Property__bool___ObjInit_1(this, stage); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
