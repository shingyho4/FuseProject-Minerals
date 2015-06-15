// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_BUFFER_HANDLE_H__
#define __APP_OPEN_G_L_G_L_BUFFER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLBufferHandle__Zero;

struct GLBufferHandle__uType : ::uValueType
{
};

GLBufferHandle__uType* GLBufferHandle__typeof();

int GLBufferHandle__GetHashCode(::uUInt* __this);
bool GLBufferHandle__Equals(::uUInt* __this, ::uObject* obj);

struct GLBufferHandle
{
    static int GetHashCode(::uUInt __this) { return GLBufferHandle__GetHashCode(&__this); }
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLBufferHandle__Equals(&__this, obj); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace OpenGL {

}}


#endif
