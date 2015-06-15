// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Graphics {

VertexAttributeInfo__uType* VertexAttributeInfo__typeof()
{
    static VertexAttributeInfo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexAttributeInfo__uType*)::uAllocValueType(sizeof(VertexAttributeInfo__uType), "Uno.Graphics.VertexAttributeInfo", sizeof(VertexAttributeInfo), 0, 1);
        type->StrongRefOffsets[0] = offsetof(VertexAttributeInfo, Buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
