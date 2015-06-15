// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CACHE__FLOAT2_H__
#define __APP_FUSE_DRAWING_CACHE__FLOAT2_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct Cache__float2;

struct Cache__float2__uType : ::uClassType
{
};

Cache__float2__uType* Cache__float2__typeof();

::uObject* Cache__float2__get_Items(Cache__float2* __this);
int Cache__float2__get_Length(Cache__float2* __this);
::app::Uno::Float2 Cache__float2__get_Item(Cache__float2* __this, int index);
void Cache__float2__Evaluate(Cache__float2* __this);
void Cache__float2___ObjInit_1(Cache__float2* __this, ::uObject* source);
Cache__float2* Cache__float2__New_2(::uStatic* __this, ::uObject* source);

struct Cache__float2 : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uArray*> _cache;

    void Evaluate() { Cache__float2__Evaluate(this); }
    void _ObjInit_1(::uObject* source) { Cache__float2___ObjInit_1(this, source); }
    ::uObject* Items() { return Cache__float2__get_Items(this); }
    int Length() { return Cache__float2__get_Length(this); }
    ::app::Uno::Float2 Item(int index);
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Cache__float2::Item(int index) { return Cache__float2__get_Item(this, index); }

}}}


#endif
