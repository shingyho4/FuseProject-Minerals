// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_H__
#define __APP_UNO_I_O_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Stream;

struct Stream__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    int(*__fp_Read)(Stream*, ::uArray*, int, int);
    void(*__fp_Write)(Stream*, ::uArray*, int, int);
    void(*__fp_Dispose)(Stream*, bool);
    void(*__fp_Close)(Stream*);
    ::uLong(*__fp_get_Length)(Stream*);
    ::uLong(*__fp_get_Position)(Stream*);
    void(*__fp_set_Position)(Stream*, ::uLong);
};

Stream__uType* Stream__typeof();

void Stream__Dispose(Stream* __this, bool disposing);
void Stream__Close(Stream* __this);
void Stream__Dispose_1(Stream* __this);

struct Stream : ::uObject
{
    int Read(::uArray* dst, int byteOffset, int byteCount) { return (((Stream__uType*)this->__obj_type)->__fp_Read)(this, dst, byteOffset, byteCount); }
    void Write(::uArray* src, int byteOffset, int byteCount) { (((Stream__uType*)this->__obj_type)->__fp_Write)(this, src, byteOffset, byteCount); }
    void Dispose(bool disposing) { (((Stream__uType*)this->__obj_type)->__fp_Dispose)(this, disposing); }
    void Close() { (((Stream__uType*)this->__obj_type)->__fp_Close)(this); }
    void Dispose_1() { Stream__Dispose_1(this); }
    ::uLong Length() { return (((Stream__uType*)this->__obj_type)->__fp_get_Length)(this); }
    ::uLong Position() { return (((Stream__uType*)this->__obj_type)->__fp_get_Position)(this); }
    void Position(::uLong value) { (((Stream__uType*)this->__obj_type)->__fp_set_Position)(this, value); }
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
