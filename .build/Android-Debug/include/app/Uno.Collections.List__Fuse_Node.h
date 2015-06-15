// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Node;

struct List__Fuse_Node__uType : ::uClassType
{
};

List__Fuse_Node__uType* List__Fuse_Node__typeof();

::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node__GetEnumerator(List__Fuse_Node* __this);
void List__Fuse_Node__EnsureCapacity(List__Fuse_Node* __this);
void List__Fuse_Node__Add(List__Fuse_Node* __this, ::app::Fuse::Node* item);
void List__Fuse_Node__Clear(List__Fuse_Node* __this);

struct List__Fuse_Node : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Node GetEnumerator();
    void EnsureCapacity() { List__Fuse_Node__EnsureCapacity(this); }
    void Add(::app::Fuse::Node* item) { List__Fuse_Node__Add(this, item); }
    void Clear() { List__Fuse_Node__Clear(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node::GetEnumerator() { return List__Fuse_Node__GetEnumerator(this); }

}}}


#endif
