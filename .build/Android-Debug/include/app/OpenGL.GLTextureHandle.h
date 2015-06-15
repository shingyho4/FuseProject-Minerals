// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_TEXTURE_HANDLE_H__
#define __APP_OPEN_G_L_G_L_TEXTURE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLTextureHandle__Zero;

struct GLTextureHandle__uType : ::uValueType
{
};

GLTextureHandle__uType* GLTextureHandle__typeof();

int GLTextureHandle__GetHashCode(::uUInt* __this);
bool GLTextureHandle__Equals(::uUInt* __this, ::uObject* obj);

struct GLTextureHandle
{
    static int GetHashCode(::uUInt __this) { return GLTextureHandle__GetHashCode(&__this); }
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLTextureHandle__Equals(&__this, obj); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace OpenGL {

}}


#endif
