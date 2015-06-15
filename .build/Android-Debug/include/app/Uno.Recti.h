// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RECTI_H__
#define __APP_UNO_RECTI_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Recti;

struct Recti__uType : ::uValueType
{
};

Recti__uType* Recti__typeof();

::app::Uno::Int2 Recti__get_Minimum(Recti* __this);
void Recti__set_Minimum(Recti* __this, ::app::Uno::Int2 value);
::app::Uno::Int2 Recti__get_Maximum(Recti* __this);
void Recti__set_Maximum(Recti* __this, ::app::Uno::Int2 value);
::app::Uno::Int2 Recti__get_Position(Recti* __this);
void Recti__set_Position(Recti* __this, ::app::Uno::Int2 value);
::app::Uno::Int2 Recti__get_Size(Recti* __this);
void Recti__set_Size(Recti* __this, ::app::Uno::Int2 value);
bool Recti__Equals_2(::uStatic* __this, Recti rect1, Recti rect2);
bool Recti__Intersects(Recti* __this, Recti r);
::uString* Recti__ToString(Recti* __this);
Recti Recti__Intersect(::uStatic* __this, Recti a, Recti b);
Recti Recti__Inflate(::uStatic* __this, Recti r, ::app::Uno::Int2 size);
Recti Recti__Inflate_1(::uStatic* __this, Recti r, int size);
void Recti___ObjInit(Recti* __this, int left, int top, int right, int bottom);
Recti Recti__New_1(::uStatic* __this, int left, int top, int right, int bottom);
void Recti___ObjInit_1(Recti* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size);
Recti Recti__New_2(::uStatic* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size);

struct Recti
{
    int Left;
    int Top;
    int Right;
    int Bottom;

    bool Intersects(Recti r);
    ::uString* ToString() { return Recti__ToString(this); }
    void _ObjInit(int left, int top, int right, int bottom) { Recti___ObjInit(this, left, top, right, bottom); }
    void _ObjInit_1(::app::Uno::Int2 pos, ::app::Uno::Int2 size);
    ::app::Uno::Int2 Minimum();
    void Minimum(::app::Uno::Int2 value);
    ::app::Uno::Int2 Maximum();
    void Maximum(::app::Uno::Int2 value);
    ::app::Uno::Int2 Position();
    void Position(::app::Uno::Int2 value);
    ::app::Uno::Int2 Size();
    void Size(::app::Uno::Int2 value);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Uno {

inline bool Recti::Intersects(Recti r) { return Recti__Intersects(this, r); }
inline void Recti::_ObjInit_1(::app::Uno::Int2 pos, ::app::Uno::Int2 size) { Recti___ObjInit_1(this, pos, size); }
inline ::app::Uno::Int2 Recti::Minimum() { return Recti__get_Minimum(this); }
inline void Recti::Minimum(::app::Uno::Int2 value) { Recti__set_Minimum(this, value); }
inline ::app::Uno::Int2 Recti::Maximum() { return Recti__get_Maximum(this); }
inline void Recti::Maximum(::app::Uno::Int2 value) { Recti__set_Maximum(this, value); }
inline ::app::Uno::Int2 Recti::Position() { return Recti__get_Position(this); }
inline void Recti::Position(::app::Uno::Int2 value) { Recti__set_Position(this, value); }
inline ::app::Uno::Int2 Recti::Size() { return Recti__get_Size(this); }
inline void Recti::Size(::app::Uno::Int2 value) { Recti__set_Size(this, value); }

}}


#endif
