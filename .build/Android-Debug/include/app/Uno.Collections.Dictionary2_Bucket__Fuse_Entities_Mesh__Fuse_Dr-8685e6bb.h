// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_ENTITIES_MESH__FUSE_DR_8685E6BB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_ENTITIES_MESH__FUSE_DR_8685E6BB_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uValueType
{
};

Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher
{
    ::uStrong< ::app::Fuse::Entities::Mesh*> Key;
    ::uStrong< ::app::Fuse::Drawing::Batching::MeshBatcher*> Value;
    int State;

    Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher& operator =(const Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
