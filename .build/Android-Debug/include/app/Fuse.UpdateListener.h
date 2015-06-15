// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UPDATE_LISTENER_H__
#define __APP_FUSE_UPDATE_LISTENER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {

struct UpdateListener;

struct UpdateListener__uType : ::uClassType
{
};

UpdateListener__uType* UpdateListener__typeof();

void UpdateListener__Invoke(UpdateListener* __this);
void UpdateListener___ObjInit(UpdateListener* __this);
UpdateListener* UpdateListener__New_1(::uStatic* __this);

struct UpdateListener : ::uObject
{
    ::uStrong< ::uDelegate*> action;
    int stage;
    bool removed;
    bool defer;

    void Invoke() { UpdateListener__Invoke(this); }
    void _ObjInit() { UpdateListener___ObjInit(this); }
};

}}


#endif
