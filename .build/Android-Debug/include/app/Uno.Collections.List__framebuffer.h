// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_LIST__FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__framebuffer;

struct List__framebuffer__uType : ::uClassType
{
};

List__framebuffer__uType* List__framebuffer__typeof();

int List__framebuffer__get_Count(List__framebuffer* __this);
::app::Uno::Graphics::Framebuffer* List__framebuffer__get_Item(List__framebuffer* __this, int index);
void List__framebuffer__set_Item(List__framebuffer* __this, int index, ::app::Uno::Graphics::Framebuffer* value);
void List__framebuffer__BoundsCheck(List__framebuffer* __this, int index);
void List__framebuffer__EnsureCapacity(List__framebuffer* __this);
void List__framebuffer__Add(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void List__framebuffer__RemoveAt(List__framebuffer* __this, int index);
void List__framebuffer___ObjInit(List__framebuffer* __this);
List__framebuffer* List__framebuffer__New_1(::uStatic* __this);

struct List__framebuffer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__framebuffer__BoundsCheck(this, index); }
    void EnsureCapacity() { List__framebuffer__EnsureCapacity(this); }
    void Add(::app::Uno::Graphics::Framebuffer* item) { List__framebuffer__Add(this, item); }
    void RemoveAt(int index) { List__framebuffer__RemoveAt(this, index); }
    void _ObjInit() { List__framebuffer___ObjInit(this); }
    int Count() { return List__framebuffer__get_Count(this); }
    ::app::Uno::Graphics::Framebuffer* Item(int index) { return List__framebuffer__get_Item(this, index); }
    void Item(int index, ::app::Uno::Graphics::Framebuffer* value) { List__framebuffer__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
