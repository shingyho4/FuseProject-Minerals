// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Brush;

struct List1_Enumerator__Fuse_Drawing_Brush__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Brush__uType* List1_Enumerator__Fuse_Drawing_Brush__typeof();

::app::Fuse::Drawing::Brush* List1_Enumerator__Fuse_Drawing_Brush__get_Current(List1_Enumerator__Fuse_Drawing_Brush* __this);
void List1_Enumerator__Fuse_Drawing_Brush__Dispose(List1_Enumerator__Fuse_Drawing_Brush* __this);
bool List1_Enumerator__Fuse_Drawing_Brush__MoveNext(List1_Enumerator__Fuse_Drawing_Brush* __this);
void List1_Enumerator__Fuse_Drawing_Brush___ObjInit(List1_Enumerator__Fuse_Drawing_Brush* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source);
List1_Enumerator__Fuse_Drawing_Brush List1_Enumerator__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source);

struct List1_Enumerator__Fuse_Drawing_Brush
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Brush*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Brush*> _current;

    void Dispose() { List1_Enumerator__Fuse_Drawing_Brush__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Brush__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Brush* source) { List1_Enumerator__Fuse_Drawing_Brush___ObjInit(this, source); }
    ::app::Fuse::Drawing::Brush* Current() { return List1_Enumerator__Fuse_Drawing_Brush__get_Current(this); }

    List1_Enumerator__Fuse_Drawing_Brush& operator =(const List1_Enumerator__Fuse_Drawing_Brush& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Drawing_Brush__typeof(), &copy);
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
