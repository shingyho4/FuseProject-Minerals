// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-35e22a25.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof()
{
    static Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary2_Bucket<string,Uno.Collections.List<Uno.Action>>", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Value);
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
