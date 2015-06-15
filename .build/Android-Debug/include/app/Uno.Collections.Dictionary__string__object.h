// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__object;

struct Dictionary__string__object__uType : ::uClassType
{
};

Dictionary__string__object__uType* Dictionary__string__object__typeof();

void Dictionary__string__object___ObjInit(Dictionary__string__object* __this);
Dictionary__string__object* Dictionary__string__object__New_1(::uStatic* __this);

struct Dictionary__string__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;

    void _ObjInit() { Dictionary__string__object___ObjInit(this); }
};

}}}


#endif
