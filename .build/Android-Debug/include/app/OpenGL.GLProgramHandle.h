// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_PROGRAM_HANDLE_H__
#define __APP_OPEN_G_L_G_L_PROGRAM_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLProgramHandle__Zero;

struct GLProgramHandle__uType : ::uValueType
{
};

GLProgramHandle__uType* GLProgramHandle__typeof();

int GLProgramHandle__GetHashCode(::uUInt* __this);
bool GLProgramHandle__Equals(::uUInt* __this, ::uObject* obj);

struct GLProgramHandle
{
    static int GetHashCode(::uUInt __this) { return GLProgramHandle__GetHashCode(&__this); }
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLProgramHandle__Equals(&__this, obj); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace OpenGL {

}}


#endif
