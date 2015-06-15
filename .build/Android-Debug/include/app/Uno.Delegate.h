// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DELEGATE_H__
#define __APP_UNO_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Delegate__uType : ::uClassType
{
};

Delegate__uType* Delegate__typeof();

::uDelegate* Delegate__Combine(::uStatic* __this, ::uDelegate* __source, ::uDelegate* __value);
::uDelegate* Delegate__Remove(::uStatic* __this, ::uDelegate* __source, ::uDelegate* __value);
bool Delegate__EqualsImpl(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right);
bool Delegate__Equals(::uDelegate* __this, ::uObject* other);
int Delegate__GetHashCode(::uDelegate* __this);
bool Delegate__op_Inequality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Delegate__op_Equality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);

struct Delegate
{
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
