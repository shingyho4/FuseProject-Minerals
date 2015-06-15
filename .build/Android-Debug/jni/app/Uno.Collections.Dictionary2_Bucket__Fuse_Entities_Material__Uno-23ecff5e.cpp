// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Material.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Material__Uno-23ecff5e.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary2_Bucket<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>", sizeof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, Value);
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
