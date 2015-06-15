// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_List_F-96197648.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof()
{
    static Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType), "Uno.Collections.Dictionary2_Bucket<int,Uno.Collections.List<Fuse.Input.Pointer_PELHolder>>", sizeof(Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
