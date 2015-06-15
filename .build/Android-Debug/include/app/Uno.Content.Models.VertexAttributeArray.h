// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_VERTEX_ATTRIBUTE_ARRAY_H__
#define __APP_UNO_CONTENT_MODELS_VERTEX_ATTRIBUTE_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct VertexAttributeArray;

struct VertexAttributeArray__uType : ::uClassType
{
};

VertexAttributeArray__uType* VertexAttributeArray__typeof();

int VertexAttributeArray__get_Type(VertexAttributeArray* __this);
::app::Uno::Buffer* VertexAttributeArray__get_Buffer(VertexAttributeArray* __this);
int VertexAttributeArray__get_Count(VertexAttributeArray* __this);
::app::Uno::Byte4 VertexAttributeArray__GetByte4Normalized(VertexAttributeArray* __this, int index);
::app::Uno::Byte4 VertexAttributeArray__GetByte4(VertexAttributeArray* __this, int index);
::app::Uno::Float4 VertexAttributeArray__GetFloat4(VertexAttributeArray* __this, int index);

struct VertexAttributeArray : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _type;

    ::app::Uno::Byte4 GetByte4Normalized(int index);
    ::app::Uno::Byte4 GetByte4(int index);
    ::app::Uno::Float4 GetFloat4(int index);
    int Type() { return VertexAttributeArray__get_Type(this); }
    ::app::Uno::Buffer* Buffer() { return VertexAttributeArray__get_Buffer(this); }
    int Count() { return VertexAttributeArray__get_Count(this); }
};

}}}}

#include <app/Uno.Byte4.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

inline ::app::Uno::Byte4 VertexAttributeArray::GetByte4Normalized(int index) { return VertexAttributeArray__GetByte4Normalized(this, index); }
inline ::app::Uno::Byte4 VertexAttributeArray::GetByte4(int index) { return VertexAttributeArray__GetByte4(this, index); }
inline ::app::Uno::Float4 VertexAttributeArray::GetFloat4(int index) { return VertexAttributeArray__GetFloat4(this, index); }

}}}}


#endif
