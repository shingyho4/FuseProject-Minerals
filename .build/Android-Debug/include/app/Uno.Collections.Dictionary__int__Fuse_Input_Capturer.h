// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Capturer;

struct Dictionary__int__Fuse_Input_Capturer__uType : ::uClassType
{
};

Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof();

::app::Fuse::Input::Capturer* Dictionary__int__Fuse_Input_Capturer__get_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key);
void Dictionary__int__Fuse_Input_Capturer__set_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer__GetEnumerator(Dictionary__int__Fuse_Input_Capturer* __this);
void Dictionary__int__Fuse_Input_Capturer__Rehash(Dictionary__int__Fuse_Input_Capturer* __this);
void Dictionary__int__Fuse_Input_Capturer__Add(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
bool Dictionary__int__Fuse_Input_Capturer__Remove(Dictionary__int__Fuse_Input_Capturer* __this, int key);
bool Dictionary__int__Fuse_Input_Capturer__ContainsKey(Dictionary__int__Fuse_Input_Capturer* __this, int key);
void Dictionary__int__Fuse_Input_Capturer___ObjInit(Dictionary__int__Fuse_Input_Capturer* __this);
Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_1(::uStatic* __this);

struct Dictionary__int__Fuse_Input_Capturer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Capturer__Rehash(this); }
    void Add(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__Add(this, key, value); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Capturer__Remove(this, key); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Capturer__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__int__Fuse_Input_Capturer___ObjInit(this); }
    ::app::Fuse::Input::Capturer* Item(int key) { return Dictionary__int__Fuse_Input_Capturer__get_Item(this, key); }
    void Item(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer::GetEnumerator() { return Dictionary__int__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
