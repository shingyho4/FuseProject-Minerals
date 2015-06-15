// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT2X2_H__
#define __APP_UNO_FLOAT2X2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {

struct Float2x2;

struct Float2x2__uType : ::uValueType
{
};

Float2x2__uType* Float2x2__typeof();

bool Float2x2__Equals(Float2x2* __this, ::uObject* o);
int Float2x2__GetHashCode(Float2x2* __this);
void Float2x2___ObjInit_1(Float2x2* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
Float2x2 Float2x2__New_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);

struct Float2x2
{
    float M11;
    float M12;
    float M21;
    float M22;

    bool Equals(::uObject* o) { return Float2x2__Equals(this, o); }
    int GetHashCode() { return Float2x2__GetHashCode(this); }
    void _ObjInit_1(::app::Uno::Float2 a, ::app::Uno::Float2 b);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

inline void Float2x2::_ObjInit_1(::app::Uno::Float2 a, ::app::Uno::Float2 b) { Float2x2___ObjInit_1(this, a, b); }

}}


#endif
