// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_COPY_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_COPY_IMPL_H__

#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct ArrayCopyImpl__uType : ::uClassType
{
};

ArrayCopyImpl__uType* ArrayCopyImpl__typeof();

void ArrayCopyImpl__Copy__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void ArrayCopyImpl__ValidateArguments__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);

}}}}


#endif
