// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWING_BORDER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWING_BORDER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Drawing_Border;

struct ArrayEnumerator__Fuse_Drawing_Border__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Drawing_Border__uType* ArrayEnumerator__Fuse_Drawing_Border__typeof();

::app::Fuse::Drawing::Border* ArrayEnumerator__Fuse_Drawing_Border__get_Current(ArrayEnumerator__Fuse_Drawing_Border* __this);
void ArrayEnumerator__Fuse_Drawing_Border__Dispose(ArrayEnumerator__Fuse_Drawing_Border* __this);
bool ArrayEnumerator__Fuse_Drawing_Border__MoveNext(ArrayEnumerator__Fuse_Drawing_Border* __this);
void ArrayEnumerator__Fuse_Drawing_Border___ObjInit(ArrayEnumerator__Fuse_Drawing_Border* __this, ::uArray* source);
ArrayEnumerator__Fuse_Drawing_Border* ArrayEnumerator__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__Fuse_Drawing_Border : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Border*> _current;

    void Dispose() { ArrayEnumerator__Fuse_Drawing_Border__Dispose(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Drawing_Border__MoveNext(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Drawing_Border___ObjInit(this, source); }
    ::app::Fuse::Drawing::Border* Current() { return ArrayEnumerator__Fuse_Drawing_Border__get_Current(this); }
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
