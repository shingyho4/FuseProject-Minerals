// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

IndexArray__uType* IndexArray__typeof()
{
    static IndexArray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IndexArray__uType*)::uAllocClassType(sizeof(IndexArray__uType), "Uno.Content.Models.IndexArray", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(IndexArray, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int IndexArray__get_Type(IndexArray* __this)
{
    return __this->_type;
}

::app::Uno::Buffer* IndexArray__get_Buffer(IndexArray* __this)
{
    return __this->_buffer;
}

int IndexArray__get_Count(IndexArray* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SizeInBytes() / ::app::Uno::Graphics::IndexTypeHelpers__GetStrideInBytes(NULL, __this->_type);
}

int IndexArray__GetInt(IndexArray* __this, int index)
{
    switch (__this->_type)
    {
        case 1:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte(index);
        }
        case 2:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
        }
        case 4:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUInt(index * 4, true);
        }
        default:
        {
            return 0;
        }
    }
}

void IndexArray___ObjInit(IndexArray* __this, int type, ::app::Uno::Buffer* buffer)
{
    __this->_buffer = buffer;
    __this->_type = type;
}

void IndexArray___ObjInit_3(IndexArray* __this, ::uArray* data)
{
    __this->_ObjInit(4, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_7(NULL, data));
}

IndexArray* IndexArray__New_4(::uStatic* __this, ::uArray* data)
{
    IndexArray* inst = (::app::Uno::Content::Models::IndexArray*)::uAllocObject(sizeof(::app::Uno::Content::Models::IndexArray), ::app::Uno::Content::Models::IndexArray__typeof());
    inst->_ObjInit_3(data);
    return inst;
}

}}}}
