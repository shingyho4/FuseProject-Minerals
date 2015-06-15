// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_BF0E78B9_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_BF0E78B9_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Drawing_Contour;

struct ArrayEnumerable__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

ArrayEnumerable__Fuse_Drawing_Contour__uType* ArrayEnumerable__Fuse_Drawing_Contour__typeof();

::uObject* ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Contour* __this);
void ArrayEnumerable__Fuse_Drawing_Contour___ObjInit(ArrayEnumerable__Fuse_Drawing_Contour* __this, ::uArray* source);
ArrayEnumerable__Fuse_Drawing_Contour* ArrayEnumerable__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uArray*> _source;

    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Drawing_Contour___ObjInit(this, source); }
};

}}}}}


#endif
