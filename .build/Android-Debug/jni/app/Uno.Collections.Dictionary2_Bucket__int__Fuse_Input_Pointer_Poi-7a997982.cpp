// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-7a997982.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.Dictionary2_Bucket<int,Fuse.Input.Pointer_PointerRecord>", sizeof(Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
