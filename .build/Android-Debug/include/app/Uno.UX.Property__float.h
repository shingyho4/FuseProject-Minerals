// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT_H__

#include <app/Uno.UX.Property.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float;

struct Property__float__uType : ::app::Uno::UX::Property__uType
{
    void(*__fp_OnSet)(Property__float*, float);
    float(*__fp_OnGet)(Property__float*);
};

Property__float__uType* Property__float__typeof();

void Property__float__RetainRestState(Property__float* __this);
float Property__float__GetRestState(Property__float* __this);
void Property__float__Set(Property__float* __this, float value);
void Property__float__OnSet(Property__float* __this, float value);
float Property__float__OnGet(Property__float* __this);
void Property__float___ObjInit_1(Property__float* __this, int stage);

struct Property__float : ::app::Uno::UX::Property
{
    bool _hasRestState;
    float _restState;

    void RetainRestState() { Property__float__RetainRestState(this); }
    float GetRestState() { return Property__float__GetRestState(this); }
    void Set(float value) { Property__float__Set(this, value); }
    void OnSet(float value) { (((Property__float__uType*)this->__obj_type)->__fp_OnSet)(this, value); }
    float OnGet() { return (((Property__float__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void _ObjInit_1(int stage) { Property__float___ObjInit_1(this, stage); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
