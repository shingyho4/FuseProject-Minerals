// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct RenderTargetEntry; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_RenderTargetEntry;

struct List__Fuse_RenderTargetEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry __interface_1;
};

List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof();

int List__Fuse_RenderTargetEntry__get_Count(List__Fuse_RenderTargetEntry* __this);
::app::Fuse::RenderTargetEntry* List__Fuse_RenderTargetEntry__get_Item(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__set_Item(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* value);
void List__Fuse_RenderTargetEntry__BoundsCheck(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__EnsureCapacity(List__Fuse_RenderTargetEntry* __this);
void List__Fuse_RenderTargetEntry__Add(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__RemoveAt(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry___ObjInit(List__Fuse_RenderTargetEntry* __this);
List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_1(::uStatic* __this);

struct List__Fuse_RenderTargetEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_RenderTargetEntry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_RenderTargetEntry__EnsureCapacity(this); }
    void Add(::app::Fuse::RenderTargetEntry* item) { List__Fuse_RenderTargetEntry__Add(this, item); }
    void RemoveAt(int index) { List__Fuse_RenderTargetEntry__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_RenderTargetEntry___ObjInit(this); }
    int Count() { return List__Fuse_RenderTargetEntry__get_Count(this); }
    ::app::Fuse::RenderTargetEntry* Item(int index) { return List__Fuse_RenderTargetEntry__get_Item(this, index); }
    void Item(int index, ::app::Fuse::RenderTargetEntry* value) { List__Fuse_RenderTargetEntry__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
