// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__FUSE_DRAWING_BA_653F1B88_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__FUSE_DRAWING_BA_653F1B88_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Dr-8685e6bb.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uClassType
{
};

Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

::app::Fuse::Drawing::Batching::MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__set_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Rehash(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Add(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__TryGetValue(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher** value);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this);

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Rehash(this); }
    void Add(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value) { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Add(this, key, value); }
    bool TryGetValue(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher** value) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(this); }
    ::app::Fuse::Drawing::Batching::MeshBatcher* Item(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Item(this, key); }
    void Item(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value) { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
