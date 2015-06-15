// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRANSFORM__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRANSFORM__H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Transform_;

struct List__Fuse_Animations_MixerHandle_Fuse_Transform___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof();

int List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Transform* List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List__Fuse_Animations_MixerHandle_Fuse_Transform___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___Insert(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item);
bool List__Fuse_Animations_MixerHandle_Fuse_Transform___Remove(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
List__Fuse_Animations_MixerHandle_Fuse_Transform_* List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(::uStatic* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Transform_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Transform___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Transform___EnsureCapacity(this); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item) { List__Fuse_Animations_MixerHandle_Fuse_Transform___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Transform* item) { return List__Fuse_Animations_MixerHandle_Fuse_Transform___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Transform___RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Transform* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Item(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* value) { List__Fuse_Animations_MixerHandle_Fuse_Transform___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-a7a26afe.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List__Fuse_Animations_MixerHandle_Fuse_Transform_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Transform___GetEnumerator(this); }

}}}


#endif
