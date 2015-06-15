// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_I_LIST_FUSE_INP_E2BE1E95_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_I_LIST_FUSE_INP_E2BE1E95_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-f23f0de.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uClassType
{
};

Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

::uObject* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___set_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);
::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Rehash(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Add(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);
bool Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___ContainsKey(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this);

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ GetEnumerator();
    void Rehash() { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Rehash(this); }
    void Add(int key, ::uObject* value) { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Add(this, key, value); }
    bool ContainsKey(int key) { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___ContainsKey(this, key); }
    void _ObjInit() { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this); }
    ::uObject* Item(int key) { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Item(this, key); }
    void Item(int key, ::uObject* value) { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-552901c6.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_::GetEnumerator() { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(this); }

}}}


#endif
