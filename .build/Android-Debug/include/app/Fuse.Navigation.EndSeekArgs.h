// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_END_SEEK_ARGS_H__
#define __APP_FUSE_NAVIGATION_END_SEEK_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct EndSeekArgs;

struct EndSeekArgs__uType : ::uClassType
{
};

EndSeekArgs__uType* EndSeekArgs__typeof();

int EndSeekArgs__get_SnapTo(EndSeekArgs* __this);
void EndSeekArgs__set_SnapTo(EndSeekArgs* __this, int value);
void EndSeekArgs___ObjInit(EndSeekArgs* __this, int snapTo);
EndSeekArgs* EndSeekArgs__New_1(::uStatic* __this, int snapTo);

struct EndSeekArgs : ::uObject
{
    int _SnapTo;

    void _ObjInit(int snapTo) { EndSeekArgs___ObjInit(this, snapTo); }
    int SnapTo() { return EndSeekArgs__get_SnapTo(this); }
    void SnapTo(int value) { EndSeekArgs__set_SnapTo(this, value); }
};

}}}


#endif
