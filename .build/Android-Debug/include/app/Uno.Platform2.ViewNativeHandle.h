// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_VIEW_NATIVE_HANDLE_H__
#define __APP_UNO_PLATFORM2_VIEW_NATIVE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno/Platform2.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Platform2 {

struct ViewNativeHandle__uType : ::uValueType
{
};

ViewNativeHandle__uType* ViewNativeHandle__typeof();

uPlatform2::ViewNativeHandle ViewNativeHandle__get_Null(::uStatic* __this);
bool ViewNativeHandle__Equals(uPlatform2::ViewNativeHandle* __this, ::uObject* obj);
int ViewNativeHandle__GetHashCode(uPlatform2::ViewNativeHandle* __this);
bool ViewNativeHandle__IsSameView(::uStatic* __this, uPlatform2::ViewNativeHandle __handle1, uPlatform2::ViewNativeHandle __handle2);
bool ViewNativeHandle__op_Implicit(::uStatic* __this, uPlatform2::ViewNativeHandle handle);
bool ViewNativeHandle__op_LogicalNot(::uStatic* __this, uPlatform2::ViewNativeHandle handle);
bool ViewNativeHandle__op_Equality(::uStatic* __this, uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs);

struct ViewNativeHandle
{
    static bool Equals(uPlatform2::ViewNativeHandle __this, ::uObject* obj) { return ViewNativeHandle__Equals(&__this, obj); }
    static int GetHashCode(uPlatform2::ViewNativeHandle __this) { return ViewNativeHandle__GetHashCode(&__this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Platform2 {

}}}


#endif
