// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESIZED_ARGS_H__
#define __APP_FUSE_RESIZED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {

struct ResizedArgs;

struct ResizedArgs__uType : ::app::Uno::EventArgs__uType
{
};

ResizedArgs__uType* ResizedArgs__typeof();

bool ResizedArgs__get_HasOldSize(ResizedArgs* __this);
void ResizedArgs__set_HasOldSize(ResizedArgs* __this, bool value);
::app::Uno::Float2 ResizedArgs__get_OldSize(ResizedArgs* __this);
void ResizedArgs__set_OldSize(ResizedArgs* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 ResizedArgs__get_NewSize(ResizedArgs* __this);
void ResizedArgs__set_NewSize(ResizedArgs* __this, ::app::Uno::Float2 value);
void ResizedArgs___ObjInit_1(ResizedArgs* __this, bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize);
ResizedArgs* ResizedArgs__New_2(::uStatic* __this, bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize);

struct ResizedArgs : ::app::Uno::EventArgs
{
    bool _HasOldSize;
    ::app::Uno::Float2 _OldSize;
    ::app::Uno::Float2 _NewSize;

    void _ObjInit_1(bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize);
    bool HasOldSize() { return ResizedArgs__get_HasOldSize(this); }
    void HasOldSize(bool value) { ResizedArgs__set_HasOldSize(this, value); }
    ::app::Uno::Float2 OldSize();
    void OldSize(::app::Uno::Float2 value);
    ::app::Uno::Float2 NewSize();
    void NewSize(::app::Uno::Float2 value);
};

}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {

inline void ResizedArgs::_ObjInit_1(bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize) { ResizedArgs___ObjInit_1(this, hasOldSize, newSize, oldSize); }
inline ::app::Uno::Float2 ResizedArgs::OldSize() { return ResizedArgs__get_OldSize(this); }
inline void ResizedArgs::OldSize(::app::Uno::Float2 value) { ResizedArgs__set_OldSize(this, value); }
inline ::app::Uno::Float2 ResizedArgs::NewSize() { return ResizedArgs__get_NewSize(this); }
inline void ResizedArgs::NewSize(::app::Uno::Float2 value) { ResizedArgs__set_NewSize(this, value); }

}}


#endif
