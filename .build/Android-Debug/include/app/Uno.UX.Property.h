// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY_H__
#define __APP_UNO_U_X_PROPERTY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property;

struct Property__uType : ::uClassType
{
};

Property__uType* Property__typeof();

void Property___ObjInit(Property* __this, int stage);

struct Property : ::uObject
{
    int Stage;

    void _ObjInit(int stage) { Property___ObjInit(this, stage); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace UX {

}}}


#endif
