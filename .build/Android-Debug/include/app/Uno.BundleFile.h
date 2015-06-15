// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BUNDLE_FILE_H__
#define __APP_UNO_BUNDLE_FILE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct BundleFile;

struct BundleFile__uType : ::uClassType
{
};

BundleFile__uType* BundleFile__typeof();

::uString* BundleFile__get_Name(BundleFile* __this);
void BundleFile__set_Name(BundleFile* __this, ::uString* value);
::uArray* BundleFile__ReadAllBytes(BundleFile* __this);
void BundleFile___ObjInit(BundleFile* __this, ::uString* filename);
BundleFile* BundleFile__New_1(::uStatic* __this, ::uString* filename);

struct BundleFile : ::uObject
{
    ::uStrong< ::uString*> _Name;

    ::uArray* ReadAllBytes() { return BundleFile__ReadAllBytes(this); }
    void _ObjInit(::uString* filename) { BundleFile___ObjInit(this, filename); }
    ::uString* Name() { return BundleFile__get_Name(this); }
    void Name(::uString* value) { BundleFile__set_Name(this, value); }
};

}}


#endif
