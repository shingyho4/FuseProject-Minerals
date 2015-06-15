// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_CHILD_COLLECTION_H__
#define __APP_FUSE_CONTROLS_INTERNAL_CHILD_COLLECTION_H__

#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct ChildCollection;

struct ChildCollection__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Elements_Element __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element __interface_2;
};

ChildCollection__uType* ChildCollection__typeof();

::uObject* ChildCollection__get_Children(ChildCollection* __this);
int ChildCollection__get_Count(ChildCollection* __this);
::app::Fuse::Elements::Element* ChildCollection__get_Item(ChildCollection* __this, int index);
bool ChildCollection__get_HasZOrder(ChildCollection* __this);
::uObject* ChildCollection__GetEnumerator(ChildCollection* __this);
void ChildCollection__Clear(ChildCollection* __this);
void ChildCollection__Add(ChildCollection* __this, ::app::Fuse::Elements::Element* item);
bool ChildCollection__Remove(ChildCollection* __this, ::app::Fuse::Elements::Element* item);
void ChildCollection__AddChild(ChildCollection* __this, ::app::Fuse::Elements::Element* child);
void ChildCollection__RemoveChild(ChildCollection* __this, ::app::Fuse::Elements::Element* child);
bool ChildCollection__Contains(ChildCollection* __this, ::app::Fuse::Elements::Element* item);
void ChildCollection__Insert(ChildCollection* __this, int index, ::app::Fuse::Elements::Element* item);
void ChildCollection__RemoveAt(ChildCollection* __this, int index);
::app::Fuse::Elements::Element* ChildCollection__GetZOrderChild(ChildCollection* __this, int index);
void ChildCollection__RemoveStyleChildren(ChildCollection* __this);
void ChildCollection__Draw(ChildCollection* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Rect ChildCollection__CalcRenderBounds(ChildCollection* __this, ::app::Uno::Rect baseRect);
void ChildCollection__HitTest(ChildCollection* __this, ::app::Fuse::HitTestContext* htc);
void ChildCollection___ObjInit(ChildCollection* __this, ::uObject* owner);
ChildCollection* ChildCollection__New_1(::uStatic* __this, ::uObject* owner);

struct ChildCollection : ::uObject
{
    ::uStrong< ::uObject*> _children;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _zOrder;
    ::uStrong< ::uObject*> _owner;

    ::uObject* GetEnumerator() { return ChildCollection__GetEnumerator(this); }
    void Clear() { ChildCollection__Clear(this); }
    void Add(::app::Fuse::Elements::Element* item) { ChildCollection__Add(this, item); }
    bool Remove(::app::Fuse::Elements::Element* item) { return ChildCollection__Remove(this, item); }
    void AddChild(::app::Fuse::Elements::Element* child) { ChildCollection__AddChild(this, child); }
    void RemoveChild(::app::Fuse::Elements::Element* child) { ChildCollection__RemoveChild(this, child); }
    bool Contains(::app::Fuse::Elements::Element* item) { return ChildCollection__Contains(this, item); }
    void Insert(int index, ::app::Fuse::Elements::Element* item) { ChildCollection__Insert(this, index, item); }
    void RemoveAt(int index) { ChildCollection__RemoveAt(this, index); }
    ::app::Fuse::Elements::Element* GetZOrderChild(int index) { return ChildCollection__GetZOrderChild(this, index); }
    void RemoveStyleChildren() { ChildCollection__RemoveStyleChildren(this); }
    void Draw(::app::Fuse::DrawContext* dc) { ChildCollection__Draw(this, dc); }
    ::app::Uno::Rect CalcRenderBounds(::app::Uno::Rect baseRect);
    void HitTest(::app::Fuse::HitTestContext* htc) { ChildCollection__HitTest(this, htc); }
    void _ObjInit(::uObject* owner) { ChildCollection___ObjInit(this, owner); }
    ::uObject* Children() { return ChildCollection__get_Children(this); }
    int Count() { return ChildCollection__get_Count(this); }
    ::app::Fuse::Elements::Element* Item(int index) { return ChildCollection__get_Item(this, index); }
    bool HasZOrder() { return ChildCollection__get_HasZOrder(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

inline ::app::Uno::Rect ChildCollection::CalcRenderBounds(::app::Uno::Rect baseRect) { return ChildCollection__CalcRenderBounds(this, baseRect); }

}}}}


#endif
