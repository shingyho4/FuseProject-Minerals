// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CommandBuffer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>

namespace app {
namespace Fuse {

CommandBuffer__uType* CommandBuffer__typeof()
{
    static CommandBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CommandBuffer__uType*)::uAllocClassType(sizeof(CommandBuffer__uType), "Fuse.CommandBuffer", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(CommandBuffer, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int CommandBuffer__get_Offset(CommandBuffer* __this)
{
    return __this->_offset;
}

int CommandBuffer__get_Size(CommandBuffer* __this)
{
    return __this->_size;
}

::app::Uno::Buffer* CommandBuffer__GetBuffer(CommandBuffer* __this)
{
    return __this->_buffer;
}

void CommandBuffer__Write(CommandBuffer* __this, int c)
{
    __this->Write_1((::uByte)c);
}

void CommandBuffer__Write_1(CommandBuffer* __this, ::uByte b)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte(__this->_offset, b);
    __this->_offset = __this->_offset + 1;
}

void CommandBuffer__Write_3(CommandBuffer* __this, int i)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetInt(__this->_offset, i, true);
    __this->_offset = __this->_offset + 4;
}

void CommandBuffer__Write_7(CommandBuffer* __this, ::uArray* b)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(b)->Length(); i++)
    {
        __this->Write_1(::uPtr< ::uArray*>(b)->Item< ::uByte>(i));
    }
}

void CommandBuffer___ObjInit(CommandBuffer* __this, int sizeInBytes)
{
    __this->_buffer = ::app::Uno::Buffer__New_3(NULL, sizeInBytes);
    __this->_size = sizeInBytes;
    __this->_offset = 0;
}

CommandBuffer* CommandBuffer__New_1(::uStatic* __this, int sizeInBytes)
{
    CommandBuffer* inst = (::app::Fuse::CommandBuffer*)::uAllocObject(sizeof(::app::Fuse::CommandBuffer), ::app::Fuse::CommandBuffer__typeof());
    inst->_ObjInit(sizeInBytes);
    return inst;
}

}}
