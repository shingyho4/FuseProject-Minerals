// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MATERIAL__UNO_COLLECT_2534C055_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MATERIAL__UNO_COLLECT_2534C055_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Material__Uno-23ecff5e.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uClassType
{
};

Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Rehash(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Clear(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Add(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___TryGetValue(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry** value);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this);

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ GetEnumerator();
    void Rehash() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Rehash(this); }
    void Clear() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Clear(this); }
    void Add(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Add(this, key, value); }
    bool TryGetValue(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry** value) { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Material_-a8403dc6.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_::GetEnumerator() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(this); }

}}}


#endif
