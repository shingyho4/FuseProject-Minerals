// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.IFlush.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_IFlush__bool__uType* Dictionary2_Bucket__Fuse_IFlush__bool__typeof()
{
    static Dictionary2_Bucket__Fuse_IFlush__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_IFlush__bool__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary2_Bucket<Fuse.IFlush,bool>", sizeof(Dictionary2_Bucket__Fuse_IFlush__bool), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_IFlush__bool, Key);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
