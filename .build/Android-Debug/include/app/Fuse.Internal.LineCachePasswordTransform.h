// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_LINE_CACHE_PASSWORD_TRANSFORM_H__
#define __APP_FUSE_INTERNAL_LINE_CACHE_PASSWORD_TRANSFORM_H__

#include <app/Fuse.Internal.LineCacheTransform.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct LineCachePasswordTransform;

struct LineCachePasswordTransform__uType : ::uClassType
{
    ::app::Fuse::Internal::LineCacheTransform __interface_0;
};

LineCachePasswordTransform__uType* LineCachePasswordTransform__typeof();

bool LineCachePasswordTransform__SetReveal(LineCachePasswordTransform* __this, int r);
::uString* LineCachePasswordTransform__Transform(LineCachePasswordTransform* __this, ::uString* text);
void LineCachePasswordTransform___ObjInit(LineCachePasswordTransform* __this);
LineCachePasswordTransform* LineCachePasswordTransform__New_1(::uStatic* __this);

struct LineCachePasswordTransform : ::uObject
{
    int _reveal;

    bool SetReveal(int r) { return LineCachePasswordTransform__SetReveal(this, r); }
    ::uString* Transform(::uString* text) { return LineCachePasswordTransform__Transform(this, text); }
    void _ObjInit() { LineCachePasswordTransform___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
