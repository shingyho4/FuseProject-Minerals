// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-f23f0de.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary2_Bucket<int,Uno.Collections.IList<Fuse.Input.Capturer>>", sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
