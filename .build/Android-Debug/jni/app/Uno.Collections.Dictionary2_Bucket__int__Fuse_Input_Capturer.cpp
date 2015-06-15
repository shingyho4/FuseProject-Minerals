// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Capturer.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof()
{
    static Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__int__Fuse_Input_Capturer__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary2_Bucket<int,Fuse.Input.Capturer>", sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__int__Fuse_Input_Capturer, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
