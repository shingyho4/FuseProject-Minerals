// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_bool_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_bool_;

struct List__Fuse_Animations_MixerHandle_bool___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_bool___uType* List__Fuse_Animations_MixerHandle_bool___typeof();

int List__Fuse_Animations_MixerHandle_bool___get_Count(List__Fuse_Animations_MixerHandle_bool_* __this);
::app::Fuse::Animations::MixerHandle__bool* List__Fuse_Animations_MixerHandle_bool___get_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
void List__Fuse_Animations_MixerHandle_bool___set_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List__Fuse_Animations_MixerHandle_bool___GetEnumerator(List__Fuse_Animations_MixerHandle_bool_* __this);
void List__Fuse_Animations_MixerHandle_bool___BoundsCheck(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
void List__Fuse_Animations_MixerHandle_bool___EnsureCapacity(List__Fuse_Animations_MixerHandle_bool_* __this);
void List__Fuse_Animations_MixerHandle_bool___Insert(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* item);
bool List__Fuse_Animations_MixerHandle_bool___Remove(List__Fuse_Animations_MixerHandle_bool_* __this, ::app::Fuse::Animations::MixerHandle__bool* item);
void List__Fuse_Animations_MixerHandle_bool___RemoveAt(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
void List__Fuse_Animations_MixerHandle_bool____ObjInit(List__Fuse_Animations_MixerHandle_bool_* __this);
List__Fuse_Animations_MixerHandle_bool_* List__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this);

struct List__Fuse_Animations_MixerHandle_bool_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_bool___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_bool___EnsureCapacity(this); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__bool* item) { List__Fuse_Animations_MixerHandle_bool___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__bool* item) { return List__Fuse_Animations_MixerHandle_bool___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_bool___RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_bool____ObjInit(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_bool___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__bool* Item(int index) { return List__Fuse_Animations_MixerHandle_bool___get_Item(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__bool* value) { List__Fuse_Animations_MixerHandle_bool___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List__Fuse_Animations_MixerHandle_bool_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_bool___GetEnumerator(this); }

}}}


#endif
