// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_PLACED_ARGS_H__
#define __APP_FUSE_ELEMENTS_PLACED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Elements {

struct PlacedArgs;

struct PlacedArgs__uType : ::app::Uno::EventArgs__uType
{
};

PlacedArgs__uType* PlacedArgs__typeof();

bool PlacedArgs__get_HasOldPosition(PlacedArgs* __this);
void PlacedArgs__set_HasOldPosition(PlacedArgs* __this, bool value);
::app::Uno::Float2 PlacedArgs__get_OldPosition(PlacedArgs* __this);
void PlacedArgs__set_OldPosition(PlacedArgs* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 PlacedArgs__get_NewPosition(PlacedArgs* __this);
void PlacedArgs__set_NewPosition(PlacedArgs* __this, ::app::Uno::Float2 value);
void PlacedArgs___ObjInit_1(PlacedArgs* __this, bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos);
PlacedArgs* PlacedArgs__New_2(::uStatic* __this, bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos);

struct PlacedArgs : ::app::Uno::EventArgs
{
    bool _HasOldPosition;
    ::app::Uno::Float2 _OldPosition;
    ::app::Uno::Float2 _NewPosition;

    void _ObjInit_1(bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos);
    bool HasOldPosition() { return PlacedArgs__get_HasOldPosition(this); }
    void HasOldPosition(bool value) { PlacedArgs__set_HasOldPosition(this, value); }
    ::app::Uno::Float2 OldPosition();
    void OldPosition(::app::Uno::Float2 value);
    ::app::Uno::Float2 NewPosition();
    void NewPosition(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Elements {

inline void PlacedArgs::_ObjInit_1(bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos) { PlacedArgs___ObjInit_1(this, hasOldPosition, oldPos, newPos); }
inline ::app::Uno::Float2 PlacedArgs::OldPosition() { return PlacedArgs__get_OldPosition(this); }
inline void PlacedArgs::OldPosition(::app::Uno::Float2 value) { PlacedArgs__set_OldPosition(this, value); }
inline ::app::Uno::Float2 PlacedArgs::NewPosition() { return PlacedArgs__get_NewPosition(this); }
inline void PlacedArgs::NewPosition(::app::Uno::Float2 value) { PlacedArgs__set_NewPosition(this, value); }

}}}


#endif
