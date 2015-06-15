// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Font.h>
#include <app/Fuse.Internal.DefaultTextRenderer.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Internal_De-3ffa3b58.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof()
{
    static Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary2_Bucket<Fuse.Font,Fuse.Internal.DefaultTextRenderer>", sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
        type->StrongRefNames[1] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
