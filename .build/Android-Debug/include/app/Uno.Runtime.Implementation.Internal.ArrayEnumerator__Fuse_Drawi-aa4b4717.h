// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_AA4B4717_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_AA4B4717_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Drawing_PolygonDrawable;

struct ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof();

::app::Fuse::Drawing::PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this);
void ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this);
bool ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this);
void ArrayEnumerator__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source);
ArrayEnumerator__Fuse_Drawing_PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__Fuse_Drawing_PolygonDrawable : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::PolygonDrawable*> _current;

    void Dispose() { ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Drawing_PolygonDrawable___ObjInit(this, source); }
    ::app::Fuse::Drawing::PolygonDrawable* Current() { return ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current(this); }
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

}}}}}


#endif
