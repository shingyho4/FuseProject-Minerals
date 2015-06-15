// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_RESOURCE_H__
#define __APP_UNO_U_X_RESOURCE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Resource;

struct Resource__uType : ::uClassType
{
};

Resource__uType* Resource__typeof();

::uString* Resource__get_Key(Resource* __this);
void Resource__set_Key(Resource* __this, ::uString* value);
::uObject* Resource__get_Value(Resource* __this);
void Resource__set_Value(Resource* __this, ::uObject* value);
void Resource___ObjInit(Resource* __this, ::uString* key, ::uObject* value);
Resource* Resource__New_1(::uStatic* __this, ::uString* key, ::uObject* value);

struct Resource : ::uObject
{
    ::uStrong< ::uString*> _Key;
    ::uStrong< ::uObject*> _Value;

    void _ObjInit(::uString* key, ::uObject* value) { Resource___ObjInit(this, key, value); }
    ::uString* Key() { return Resource__get_Key(this); }
    void Key(::uString* value) { Resource__set_Key(this, value); }
    ::uObject* Value() { return Resource__get_Value(this); }
    void Value(::uObject* value) { Resource__set_Value(this, value); }
};

}}}


#endif
