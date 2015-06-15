// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT4_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT4_H__

#include <app/Uno.Float4.h>
#include <app/Uno.UX.Property.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float4;

struct Property__float4__uType : ::app::Uno::UX::Property__uType
{
    void(*__fp_OnSet)(Property__float4*, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_OnGet)(Property__float4*);
};

Property__float4__uType* Property__float4__typeof();

void Property__float4__RetainRestState(Property__float4* __this);
::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this);
void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value);
void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value);
void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value);
::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this);
void Property__float4___ObjInit_1(Property__float4* __this, int stage);

struct Property__float4 : ::app::Uno::UX::Property
{
    bool _hasRestState;
    ::app::Uno::Float4 _restState;

    void RetainRestState() { Property__float4__RetainRestState(this); }
    ::app::Uno::Float4 GetRestState();
    void Set(::app::Uno::Float4 value);
    void SetRestState(::app::Uno::Float4 value);
    void OnSet(::app::Uno::Float4 value);
    ::app::Uno::Float4 OnGet();
    void _ObjInit_1(int stage) { Property__float4___ObjInit_1(this, stage); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace UX {

inline ::app::Uno::Float4 Property__float4::GetRestState() { return Property__float4__GetRestState(this); }
inline void Property__float4::Set(::app::Uno::Float4 value) { Property__float4__Set(this, value); }
inline void Property__float4::SetRestState(::app::Uno::Float4 value) { Property__float4__SetRestState(this, value); }
inline void Property__float4::OnSet(::app::Uno::Float4 value) { (((Property__float4__uType*)this->__obj_type)->__fp_OnSet)(this, value); }
inline ::app::Uno::Float4 Property__float4::OnGet() { return (((Property__float4__uType*)this->__obj_type)->__fp_OnGet)(this); }

}}}


#endif
