// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__int.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__framebuffer__int__uType* Dictionary2_Bucket__framebuffer__int__typeof()
{
    static Dictionary2_Bucket__framebuffer__int__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__framebuffer__int__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__framebuffer__int__uType), "Uno.Collections.Dictionary2_Bucket<framebuffer,int>", sizeof(Dictionary2_Bucket__framebuffer__int), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__framebuffer__int, Key);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
