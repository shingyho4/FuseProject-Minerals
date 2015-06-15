// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_EFFECT_H__
#define __APP_FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Effect;

struct Effect__uType : ::uClassType
{
    void(*__fp_Render)(Effect*, ::app::Fuse::DrawContext*);
    bool(*__fp_get_ExtendsRenderBounds)(Effect*);
    bool(*__fp_get_Active)(Effect*);
    ::app::Uno::Rect(*__fp_get_RenderBounds)(Effect*);
};

Effect__uType* Effect__typeof();

int Effect__get_Type(Effect* __this);
::app::Fuse::Elements::Element* Effect__get_Element(Effect* __this);
void Effect__set_Element(Effect* __this, ::app::Fuse::Elements::Element* value);
bool Effect__get_ExtendsRenderBounds(Effect* __this);
bool Effect__get_Active(Effect* __this);
::app::Uno::Rect Effect__get_RenderBounds(Effect* __this);
void Effect__OnRooted(Effect* __this);
void Effect__OnUnrooted(Effect* __this);
void Effect__Rooted(Effect* __this);
void Effect__Unrooted(Effect* __this);
void Effect__Added(Effect* __this, ::app::Fuse::Elements::Element* elm);
void Effect__Removed(Effect* __this, ::app::Fuse::Elements::Element* elm);
void Effect__OnRenderingChanged(Effect* __this);
void Effect___ObjInit(Effect* __this, int effectType);
void Effect__add_RenderingChanged(Effect* __this, ::uDelegate* value);
void Effect__remove_RenderingChanged(Effect* __this, ::uDelegate* value);

struct Effect : ::uObject
{
    int _effectType;
    bool AddedByStyle;
    bool _isRooted;
    ::uStrong< ::uDelegate*> RenderingChanged;
    ::uStrong< ::app::Fuse::Elements::Element*> _Element;

    void OnRooted() { Effect__OnRooted(this); }
    void OnUnrooted() { Effect__OnUnrooted(this); }
    void Rooted() { Effect__Rooted(this); }
    void Unrooted() { Effect__Unrooted(this); }
    void Added(::app::Fuse::Elements::Element* elm) { Effect__Added(this, elm); }
    void Removed(::app::Fuse::Elements::Element* elm) { Effect__Removed(this, elm); }
    void OnRenderingChanged() { Effect__OnRenderingChanged(this); }
    void Render(::app::Fuse::DrawContext* dc) { (((Effect__uType*)this->__obj_type)->__fp_Render)(this, dc); }
    void _ObjInit(int effectType) { Effect___ObjInit(this, effectType); }
    void add_RenderingChanged(::uDelegate* value) { Effect__add_RenderingChanged(this, value); }
    void remove_RenderingChanged(::uDelegate* value) { Effect__remove_RenderingChanged(this, value); }
    int Type() { return Effect__get_Type(this); }
    ::app::Fuse::Elements::Element* Element() { return Effect__get_Element(this); }
    void Element(::app::Fuse::Elements::Element* value) { Effect__set_Element(this, value); }
    bool ExtendsRenderBounds() { return (((Effect__uType*)this->__obj_type)->__fp_get_ExtendsRenderBounds)(this); }
    bool Active() { return (((Effect__uType*)this->__obj_type)->__fp_get_Active)(this); }
    ::app::Uno::Rect RenderBounds();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Rect Effect::RenderBounds() { return (((Effect__uType*)this->__obj_type)->__fp_get_RenderBounds)(this); }

}}}


#endif
