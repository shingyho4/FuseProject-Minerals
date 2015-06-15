// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_CALLBACK_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_CALLBACK_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Experimental {
namespace TextureLoader {

struct Callback;

struct Callback__uType : ::uClassType
{
};

Callback__uType* Callback__typeof();

void Callback__Execute(Callback* __this, ::app::Uno::Graphics::Texture2D* arg);
void Callback___ObjInit(Callback* __this, ::uDelegate* action);
Callback* Callback__New_1(::uStatic* __this, ::uDelegate* action);

struct Callback : ::uObject
{
    ::uStrong< ::uDelegate*> _action;

    void Execute(::app::Uno::Graphics::Texture2D* arg) { Callback__Execute(this, arg); }
    void _ObjInit(::uDelegate* action) { Callback___ObjInit(this, action); }
};

}}}


#endif
