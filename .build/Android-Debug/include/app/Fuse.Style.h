// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_H__
#define __APP_FUSE_STYLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Fuse {

struct Style;

struct Style__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
};

Style__uType* Style__typeof();

::uObject* Style__get_Templates(Style* __this);
bool Style__get_HasResources(Style* __this);
::uObject* Style__get_Resources(Style* __this);
void Style__OnTemplateChanged(Style* __this, ::uObject* _);
bool Style__Apply(Style* __this, ::uObject* target);
void Style__OnResourceChanged(Style* __this, ::app::Uno::UX::Resource* r);
void Style___ObjInit(Style* __this);
Style* Style__New_1(::uStatic* __this);
void Style__add_TemplatesChanged(Style* __this, ::uDelegate* value);
void Style__remove_TemplatesChanged(Style* __this, ::uDelegate* value);

struct Style : ::uObject
{
    ::uStrong< ::uObject*> _templates;
    ::uStrong< ::uObject*> _resources;
    ::uStrong< ::uDelegate*> TemplatesChanged;

    void OnTemplateChanged(::uObject* _) { Style__OnTemplateChanged(this, _); }
    bool Apply(::uObject* target) { return Style__Apply(this, target); }
    void OnResourceChanged(::app::Uno::UX::Resource* r) { Style__OnResourceChanged(this, r); }
    void _ObjInit() { Style___ObjInit(this); }
    void add_TemplatesChanged(::uDelegate* value) { Style__add_TemplatesChanged(this, value); }
    void remove_TemplatesChanged(::uDelegate* value) { Style__remove_TemplatesChanged(this, value); }
    ::uObject* Templates() { return Style__get_Templates(this); }
    bool HasResources() { return Style__get_HasResources(this); }
    ::uObject* Resources() { return Style__get_Resources(this); }
};

}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {

}}


#endif
