// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-7a997982.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType : ::uClassType
{
};

Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof();

::app::Fuse::Input::Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this);

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(this); }
    void Add(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(this, key, value); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(this, key); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this); }
    ::app::Fuse::Input::Pointer_PointerRecord* Item(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(this, key); }
    void Item(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-99c36562.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord::GetEnumerator() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(this); }

}}}


#endif
