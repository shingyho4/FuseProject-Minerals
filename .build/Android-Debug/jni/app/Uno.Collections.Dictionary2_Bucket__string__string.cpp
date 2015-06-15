// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__string__string__uType* Dictionary2_Bucket__string__string__typeof()
{
    static Dictionary2_Bucket__string__string__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__string__string__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__string__string__uType), "Uno.Collections.Dictionary2_Bucket<string,string>", sizeof(Dictionary2_Bucket__string__string), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__string__string, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__string__string, Value);
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
