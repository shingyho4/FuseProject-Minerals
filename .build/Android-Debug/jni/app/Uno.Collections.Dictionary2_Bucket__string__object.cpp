// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__string__object__uType* Dictionary2_Bucket__string__object__typeof()
{
    static Dictionary2_Bucket__string__object__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__string__object__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__string__object__uType), "Uno.Collections.Dictionary2_Bucket<string,object>", sizeof(Dictionary2_Bucket__string__object), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__string__object, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__string__object, Value);
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
