// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_AD236A2A_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_AD236A2A_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour;

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof();

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this);
void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select);
SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator(this); }
    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(this, source, select); }
};

}}}


#endif
