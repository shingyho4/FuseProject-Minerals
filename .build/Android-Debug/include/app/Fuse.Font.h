// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FONT_H__
#define __APP_FUSE_FONT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Fuse {

struct Font;

struct Font__uType : ::uClassType
{
};

Font__uType* Font__typeof();

::app::Uno::BundleFile* Font__get_BundleFile(Font* __this);
void Font___ObjInit(Font* __this, ::app::Uno::BundleFile* file);
Font* Font__New_1(::uStatic* __this, ::app::Uno::BundleFile* file);

struct Font : ::uObject
{
    ::uStrong< ::app::Uno::BundleFile*> _file;

    void _ObjInit(::app::Uno::BundleFile* file) { Font___ObjInit(this, file); }
    ::app::Uno::BundleFile* BundleFile() { return Font__get_BundleFile(this); }
};

}}


#endif
