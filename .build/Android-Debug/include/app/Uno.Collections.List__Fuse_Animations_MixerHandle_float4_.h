// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT4__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT4__H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_float4_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_float4_;

struct List__Fuse_Animations_MixerHandle_float4___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_float4___uType* List__Fuse_Animations_MixerHandle_float4___typeof();

int List__Fuse_Animations_MixerHandle_float4___get_Count(List__Fuse_Animations_MixerHandle_float4_* __this);
::app::Fuse::Animations::MixerHandle__float4* List__Fuse_Animations_MixerHandle_float4___get_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index);
void List__Fuse_Animations_MixerHandle_float4___set_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List__Fuse_Animations_MixerHandle_float4___GetEnumerator(List__Fuse_Animations_MixerHandle_float4_* __this);
void List__Fuse_Animations_MixerHandle_float4___BoundsCheck(List__Fuse_Animations_MixerHandle_float4_* __this, int index);
void List__Fuse_Animations_MixerHandle_float4___EnsureCapacity(List__Fuse_Animations_MixerHandle_float4_* __this);
void List__Fuse_Animations_MixerHandle_float4___Insert(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* item);
bool List__Fuse_Animations_MixerHandle_float4___Remove(List__Fuse_Animations_MixerHandle_float4_* __this, ::app::Fuse::Animations::MixerHandle__float4* item);
void List__Fuse_Animations_MixerHandle_float4___RemoveAt(List__Fuse_Animations_MixerHandle_float4_* __this, int index);
void List__Fuse_Animations_MixerHandle_float4____ObjInit(List__Fuse_Animations_MixerHandle_float4_* __this);
List__Fuse_Animations_MixerHandle_float4_* List__Fuse_Animations_MixerHandle_float4___New_1(::uStatic* __this);

struct List__Fuse_Animations_MixerHandle_float4_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_float4___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_float4___EnsureCapacity(this); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__float4* item) { List__Fuse_Animations_MixerHandle_float4___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__float4* item) { return List__Fuse_Animations_MixerHandle_float4___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_float4___RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_float4____ObjInit(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_float4___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__float4* Item(int index) { return List__Fuse_Animations_MixerHandle_float4___get_Item(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__float4* value) { List__Fuse_Animations_MixerHandle_float4___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List__Fuse_Animations_MixerHandle_float4_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_float4___GetEnumerator(this); }

}}}


#endif
