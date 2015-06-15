// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__UNO_COLLECTIONS_E5128EBD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__UNO_COLLECTIONS_E5128EBD_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Col-2fb23846.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uClassType
{
};

Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof();

::app::Uno::Collections::List__Fuse_Entities_Entry* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Item(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key);
void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___set_Item(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Rehash(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Add(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
bool Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___ContainsKey(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key);
void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this);

struct Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ GetEnumerator();
    void Rehash() { Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Rehash(this); }
    void Add(::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Add(this, key, value); }
    bool ContainsKey(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___ContainsKey(this, key); }
    void _ObjInit() { Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this); }
    ::app::Uno::Collections::List__Fuse_Entities_Entry* Item(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Item(this, key); }
    void Item(::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno-1ab9a0de.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_::GetEnumerator() { return Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(this); }

}}}


#endif
