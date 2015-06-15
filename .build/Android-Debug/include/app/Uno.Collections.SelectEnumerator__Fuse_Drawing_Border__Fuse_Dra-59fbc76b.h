// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BORDER__FUSE_DRA_59FBC76B_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BORDER__FUSE_DRA_59FBC76B_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour;

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof();

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
bool SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select);
SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void Dispose() { SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(this); }
    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(this, source, select); }
    ::app::Fuse::Drawing::Contour* Current() { return SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
