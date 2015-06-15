// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_TESSELATION_HALF_3D4CA6DA_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_TESSELATION_HALF_3D4CA6DA_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2;

struct SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof();

::app::Uno::Float2 SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this);
void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this);
bool SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this);
void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select);
SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2 : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void Dispose() { SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext(this); }
    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(this, source, select); }
    ::app::Uno::Float2 Current();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float2 SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2::Current() { return SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current(this); }

}}}


#endif
