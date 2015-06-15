// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Internal_De-3ffa3b58.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRenderer; } } }
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer;

struct Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType : ::uClassType
{
};

Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof();

void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Rehash(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this);
void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Add(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer* value);
bool Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__TryGetValue(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer** value);
void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer___ObjInit(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this);
Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__New_1(::uStatic* __this);

struct Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Rehash(this); }
    void Add(::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer* value) { Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Add(this, key, value); }
    bool TryGetValue(::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer** value) { return Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
