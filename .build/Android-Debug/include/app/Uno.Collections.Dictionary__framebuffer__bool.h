// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__bool.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__framebuffer__bool;

struct Dictionary__framebuffer__bool__uType : ::uClassType
{
};

Dictionary__framebuffer__bool__uType* Dictionary__framebuffer__bool__typeof();

bool Dictionary__framebuffer__bool__get_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
void Dictionary__framebuffer__bool__set_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);
void Dictionary__framebuffer__bool__Rehash(Dictionary__framebuffer__bool* __this);
void Dictionary__framebuffer__bool__Add(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);
bool Dictionary__framebuffer__bool__Remove(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
bool Dictionary__framebuffer__bool__ContainsKey(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
void Dictionary__framebuffer__bool___ObjInit(Dictionary__framebuffer__bool* __this);
Dictionary__framebuffer__bool* Dictionary__framebuffer__bool__New_1(::uStatic* __this);

struct Dictionary__framebuffer__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__framebuffer__bool__Rehash(this); }
    void Add(::app::Uno::Graphics::Framebuffer* key, bool value) { Dictionary__framebuffer__bool__Add(this, key, value); }
    bool Remove(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__Remove(this, key); }
    bool ContainsKey(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__framebuffer__bool___ObjInit(this); }
    bool Item(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__get_Item(this, key); }
    void Item(::app::Uno::Graphics::Framebuffer* key, bool value) { Dictionary__framebuffer__bool__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
