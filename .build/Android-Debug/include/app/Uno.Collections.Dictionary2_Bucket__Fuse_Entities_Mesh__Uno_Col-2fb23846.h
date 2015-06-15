// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_ENTITIES_MESH__UNO_COL_2FB23846_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_ENTITIES_MESH__UNO_COL_2FB23846_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uValueType
{
};

Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof();

struct Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Fuse::Entities::Mesh*> Key;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entry*> Value;
    int State;

    Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_& operator =(const Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof(), &copy);
        return *this;
    }
};

}}}


#endif
