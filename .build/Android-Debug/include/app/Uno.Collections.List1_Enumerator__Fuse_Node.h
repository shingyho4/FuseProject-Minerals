// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NODE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Node;

struct List1_Enumerator__Fuse_Node__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Node__uType* List1_Enumerator__Fuse_Node__typeof();

::app::Fuse::Node* List1_Enumerator__Fuse_Node__get_Current(List1_Enumerator__Fuse_Node* __this);
void List1_Enumerator__Fuse_Node__Dispose(List1_Enumerator__Fuse_Node* __this);
bool List1_Enumerator__Fuse_Node__MoveNext(List1_Enumerator__Fuse_Node* __this);
void List1_Enumerator__Fuse_Node___ObjInit(List1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::List__Fuse_Node* source);
List1_Enumerator__Fuse_Node List1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Node* source);

struct List1_Enumerator__Fuse_Node
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Node*> _current;

    void Dispose() { List1_Enumerator__Fuse_Node__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Node__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Node* source) { List1_Enumerator__Fuse_Node___ObjInit(this, source); }
    ::app::Fuse::Node* Current() { return List1_Enumerator__Fuse_Node__get_Current(this); }

    List1_Enumerator__Fuse_Node& operator =(const List1_Enumerator__Fuse_Node& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Node__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
