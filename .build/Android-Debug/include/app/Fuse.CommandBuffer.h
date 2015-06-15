// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_COMMAND_BUFFER_H__
#define __APP_FUSE_COMMAND_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Fuse {

struct CommandBuffer;

struct CommandBuffer__uType : ::uClassType
{
};

CommandBuffer__uType* CommandBuffer__typeof();

int CommandBuffer__get_Offset(CommandBuffer* __this);
int CommandBuffer__get_Size(CommandBuffer* __this);
::app::Uno::Buffer* CommandBuffer__GetBuffer(CommandBuffer* __this);
void CommandBuffer__Write(CommandBuffer* __this, int c);
void CommandBuffer__Write_1(CommandBuffer* __this, ::uByte b);
void CommandBuffer__Write_3(CommandBuffer* __this, int i);
void CommandBuffer__Write_7(CommandBuffer* __this, ::uArray* b);
void CommandBuffer___ObjInit(CommandBuffer* __this, int sizeInBytes);
CommandBuffer* CommandBuffer__New_1(::uStatic* __this, int sizeInBytes);

struct CommandBuffer : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _size;
    int _offset;

    ::app::Uno::Buffer* GetBuffer() { return CommandBuffer__GetBuffer(this); }
    void Write(int c) { CommandBuffer__Write(this, c); }
    void Write_1(::uByte b) { CommandBuffer__Write_1(this, b); }
    void Write_3(int i) { CommandBuffer__Write_3(this, i); }
    void Write_7(::uArray* b) { CommandBuffer__Write_7(this, b); }
    void _ObjInit(int sizeInBytes) { CommandBuffer___ObjInit(this, sizeInBytes); }
    int Offset() { return CommandBuffer__get_Offset(this); }
    int Size() { return CommandBuffer__get_Size(this); }
};

}}

#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

}}


#endif
