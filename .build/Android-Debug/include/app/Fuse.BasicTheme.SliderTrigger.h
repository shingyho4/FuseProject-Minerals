// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_SLIDER_TRIGGER_H__
#define __APP_FUSE_BASIC_THEME_SLIDER_TRIGGER_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Slider; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct SliderTrigger;

struct SliderTrigger__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

SliderTrigger__uType* SliderTrigger__typeof();

float SliderTrigger__get_Max(SliderTrigger* __this);
float SliderTrigger__get_Min(SliderTrigger* __this);
float SliderTrigger__get_Value(SliderTrigger* __this);
void SliderTrigger__OnRooted_1(SliderTrigger* __this, ::app::Fuse::Elements::Element* elm);
void SliderTrigger__OnUnrooted_1(SliderTrigger* __this, ::app::Fuse::Elements::Element* elm);
void SliderTrigger__Update(SliderTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void SliderTrigger___ObjInit_3(SliderTrigger* __this);
SliderTrigger* SliderTrigger__New_1(::uStatic* __this);

struct SliderTrigger : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::app::Fuse::Controls::Slider*> _slider;

    void Update(::uObject* sender, ::app::Uno::EventArgs* args) { SliderTrigger__Update(this, sender, args); }
    void _ObjInit_3() { SliderTrigger___ObjInit_3(this); }
    float Max() { return SliderTrigger__get_Max(this); }
    float Min() { return SliderTrigger__get_Min(this); }
    float Value() { return SliderTrigger__get_Value(this); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

}}}


#endif
