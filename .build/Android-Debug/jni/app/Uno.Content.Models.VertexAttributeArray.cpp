// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.SByte.h>
#include <app/Uno.SByte4.h>
#include <app/Uno.Short.h>
#include <app/Uno.Short2.h>
#include <app/Uno.Short4.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>
#include <app/Uno.UShort4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

VertexAttributeArray__uType* VertexAttributeArray__typeof()
{
    static VertexAttributeArray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexAttributeArray__uType*)::uAllocClassType(sizeof(VertexAttributeArray__uType), "Uno.Content.Models.VertexAttributeArray", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(VertexAttributeArray, _buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int VertexAttributeArray__get_Type(VertexAttributeArray* __this)
{
    return __this->_type;
}

::app::Uno::Buffer* VertexAttributeArray__get_Buffer(VertexAttributeArray* __this)
{
    return __this->_buffer;
}

int VertexAttributeArray__get_Count(VertexAttributeArray* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SizeInBytes() / ::app::Uno::Graphics::VertexAttributeTypeHelpers__GetStrideInBytes(NULL, __this->_type);
}

::app::Uno::Byte4 VertexAttributeArray__GetByte4Normalized(VertexAttributeArray* __this, int index)
{
    if (__this->_type == 20)
    {
        return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
    }
    else
    {
        ::app::Uno::Float4 v = ::app::Uno::Float4__op_Multiply(NULL, __this->GetFloat4(index), 255.0f);
        return ::app::Uno::Byte4__New_1(NULL, (::uByte)v.X, (::uByte)v.Y, (::uByte)v.Z, (::uByte)v.W);
    }
}

::app::Uno::Byte4 VertexAttributeArray__GetByte4(VertexAttributeArray* __this, int index)
{
    if (__this->_type == 19)
    {
        return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
    }
    else
    {
        ::app::Uno::Float4 v = __this->GetFloat4(index);
        return ::app::Uno::Byte4__New_1(NULL, (::uByte)v.X, (::uByte)v.Y, (::uByte)v.Z, (::uByte)v.W);
    }
}

::app::Uno::Float4 VertexAttributeArray__GetFloat4(VertexAttributeArray* __this, int index)
{
    switch (__this->_type)
    {
        case 1:
        {
            {
                float v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat(index * 4, true);
                return ::app::Uno::Float4__New_2(NULL, v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 2:
        {
            {
                ::app::Uno::Float2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat2((index * 4) * 2, true);
                return ::app::Uno::Float4__New_3(NULL, v, 0.0f, 0.0f);
            }
        }
        case 3:
        {
            {
                ::app::Uno::Float3 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat3((index * 4) * 3, true);
                return ::app::Uno::Float4__New_7(NULL, v, 0.0f);
            }
        }
        case 4:
        {
            {
                ::app::Uno::Float4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat4((index * 4) * 4, true);
                return v;
            }
        }
        case 5:
        {
            {
                ::uShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort(index * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 6:
        {
            {
                ::uShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort(index * 2, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 7:
        {
            {
                ::app::Uno::Short2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f);
            }
        }
        case 8:
        {
            {
                ::app::Uno::Short2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 9:
        {
            {
                ::app::Uno::Short4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 10:
        {
            {
                ::app::Uno::Short4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 11:
        {
            {
                ::uUShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 12:
        {
            {
                ::uUShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 13:
        {
            {
                ::app::Uno::UShort2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f);
            }
        }
        case 14:
        {
            {
                ::app::Uno::UShort2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 15:
        {
            {
                ::app::Uno::UShort4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 16:
        {
            {
                ::app::Uno::UShort4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 17:
        {
            {
                ::app::Uno::SByte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte4(index * 4);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 18:
        {
            {
                ::app::Uno::SByte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte4(index * 4);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 0.007874016f));
            }
        }
        case 19:
        {
            {
                ::app::Uno::Byte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 20:
        {
            {
                ::app::Uno::Byte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
                return ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 0.003921569f));
            }
        }
        default:
        {
            return ::app::Uno::Float4__New_1(NULL, 0.0f);
        }
    }
}

}}}}
