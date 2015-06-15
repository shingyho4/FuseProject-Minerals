// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_LIST_FUSE_INPU_E996ADB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_LIST_FUSE_INPU_E996ADB_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_List_F-96197648.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_;

struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType : ::uClassType
{
};

Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof();

void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Rehash(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Add(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value);
bool Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___TryGetValue(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder** value);
void Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this);

struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Rehash(this); }
    void Add(int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* value) { Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Add(this, key, value); }
    bool TryGetValue(int key, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder** value) { return Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
