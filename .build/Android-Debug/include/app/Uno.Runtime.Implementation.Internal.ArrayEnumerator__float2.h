// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FLOAT2_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FLOAT2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__float2;

struct ArrayEnumerator__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof();

::app::Uno::Float2 ArrayEnumerator__float2__get_Current(ArrayEnumerator__float2* __this);
void ArrayEnumerator__float2__Dispose(ArrayEnumerator__float2* __this);
bool ArrayEnumerator__float2__MoveNext(ArrayEnumerator__float2* __this);
void ArrayEnumerator__float2___ObjInit(ArrayEnumerator__float2* __this, ::uArray* source);
ArrayEnumerator__float2* ArrayEnumerator__float2__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__float2 : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::app::Uno::Float2 _current;

    void Dispose() { ArrayEnumerator__float2__Dispose(this); }
    bool MoveNext() { return ArrayEnumerator__float2__MoveNext(this); }
    void _ObjInit(::uArray* source) { ArrayEnumerator__float2___ObjInit(this, source); }
    ::app::Uno::Float2 Current();
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

inline ::app::Uno::Float2 ArrayEnumerator__float2::Current() { return ArrayEnumerator__float2__get_Current(this); }

}}}}}


#endif
