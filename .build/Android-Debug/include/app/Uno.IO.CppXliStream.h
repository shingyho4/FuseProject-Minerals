// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_CPP_XLI_STREAM_H__
#define __APP_UNO_I_O_CPP_XLI_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno/Uno.h>
namespace Xli { class Stream; }

namespace app {
namespace Uno {
namespace IO {

struct CppXliStream;

struct CppXliStream__uType : ::app::Uno::IO::Stream__uType
{
};

CppXliStream__uType* CppXliStream__typeof();

::uLong CppXliStream__get_Length(CppXliStream* __this);
::uLong CppXliStream__get_Position(CppXliStream* __this);
void CppXliStream__set_Position(CppXliStream* __this, ::uLong __value);
int CppXliStream__Read(CppXliStream* __this, ::uArray* __dst, int __byteOffset, int __byteCount);
void CppXliStream__Write(CppXliStream* __this, ::uArray* __src, int __byteOffset, int __byteCount);
void CppXliStream__Dispose(CppXliStream* __this, bool __disposing);

struct CppXliStream : ::app::Uno::IO::Stream
{
    ::Xli::Stream* _handle;
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Uno {
namespace IO {

}}}


#endif
