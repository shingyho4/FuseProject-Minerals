// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Dr-8685e6bb.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.Dictionary2_Bucket<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>", sizeof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, Value);
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
