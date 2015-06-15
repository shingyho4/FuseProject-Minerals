// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_Element.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_Element;

struct List1_Enumerator__Fuse_Elements_Element__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_Element __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Elements_Element__uType* List1_Enumerator__Fuse_Elements_Element__typeof();

::app::Fuse::Elements::Element* List1_Enumerator__Fuse_Elements_Element__get_Current(List1_Enumerator__Fuse_Elements_Element* __this);
void List1_Enumerator__Fuse_Elements_Element__Dispose(List1_Enumerator__Fuse_Elements_Element* __this);
bool List1_Enumerator__Fuse_Elements_Element__MoveNext(List1_Enumerator__Fuse_Elements_Element* __this);
void List1_Enumerator__Fuse_Elements_Element___ObjInit(List1_Enumerator__Fuse_Elements_Element* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source);
List1_Enumerator__Fuse_Elements_Element List1_Enumerator__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source);

struct List1_Enumerator__Fuse_Elements_Element
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Elements::Element*> _current;

    void Dispose() { List1_Enumerator__Fuse_Elements_Element__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_Element__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_Element* source) { List1_Enumerator__Fuse_Elements_Element___ObjInit(this, source); }
    ::app::Fuse::Elements::Element* Current() { return List1_Enumerator__Fuse_Elements_Element__get_Current(this); }

    List1_Enumerator__Fuse_Elements_Element& operator =(const List1_Enumerator__Fuse_Elements_Element& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Elements_Element__typeof(), &copy);
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
