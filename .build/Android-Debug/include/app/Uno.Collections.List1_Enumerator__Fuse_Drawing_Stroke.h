// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Stroke;

struct List1_Enumerator__Fuse_Drawing_Stroke__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Stroke__uType* List1_Enumerator__Fuse_Drawing_Stroke__typeof();

::app::Fuse::Drawing::Stroke* List1_Enumerator__Fuse_Drawing_Stroke__get_Current(List1_Enumerator__Fuse_Drawing_Stroke* __this);
void List1_Enumerator__Fuse_Drawing_Stroke__Dispose(List1_Enumerator__Fuse_Drawing_Stroke* __this);
bool List1_Enumerator__Fuse_Drawing_Stroke__MoveNext(List1_Enumerator__Fuse_Drawing_Stroke* __this);
void List1_Enumerator__Fuse_Drawing_Stroke___ObjInit(List1_Enumerator__Fuse_Drawing_Stroke* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source);
List1_Enumerator__Fuse_Drawing_Stroke List1_Enumerator__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source);

struct List1_Enumerator__Fuse_Drawing_Stroke
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Stroke*> _current;

    void Dispose() { List1_Enumerator__Fuse_Drawing_Stroke__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Stroke__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Stroke* source) { List1_Enumerator__Fuse_Drawing_Stroke___ObjInit(this, source); }
    ::app::Fuse::Drawing::Stroke* Current() { return List1_Enumerator__Fuse_Drawing_Stroke__get_Current(this); }

    List1_Enumerator__Fuse_Drawing_Stroke& operator =(const List1_Enumerator__Fuse_Drawing_Stroke& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Drawing_Stroke__typeof(), &copy);
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
