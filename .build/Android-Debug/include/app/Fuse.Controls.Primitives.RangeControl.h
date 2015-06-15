// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Primitives\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PRIMITIVES_RANGE_CONTROL_H__
#define __APP_FUSE_CONTROLS_PRIMITIVES_RANGE_CONTROL_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

struct RangeControl;

struct RangeControl__uType : ::app::Fuse::Controls::Control__uType
{
    void(*__fp_OnValueChanged)(RangeControl*);
};

RangeControl__uType* RangeControl__typeof();

float RangeControl__get_Minimum(RangeControl* __this);
void RangeControl__set_Minimum(RangeControl* __this, float value);
float RangeControl__get_Maximum(RangeControl* __this);
void RangeControl__set_Maximum(RangeControl* __this, float value);
float RangeControl__get_Value(RangeControl* __this);
void RangeControl__set_Value(RangeControl* __this, float value);
void RangeControl__OnMinimumChanged(RangeControl* __this);
void RangeControl__OnMaximumChanged(RangeControl* __this);
void RangeControl__OnValueChanged(RangeControl* __this);
void RangeControl__add_MinimumChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__remove_MinimumChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__add_MaximumChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__remove_MaximumChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__add_ValueChanged(RangeControl* __this, ::uDelegate* value);
void RangeControl__remove_ValueChanged(RangeControl* __this, ::uDelegate* value);

struct RangeControl : ::app::Fuse::Controls::Control
{
    float _minimum;
    float _maxmimum;
    float _value;
    ::uStrong< ::uDelegate*> MinimumChanged;
    ::uStrong< ::uDelegate*> MaximumChanged;
    ::uStrong< ::uDelegate*> ValueChanged;

    void OnMinimumChanged() { RangeControl__OnMinimumChanged(this); }
    void OnMaximumChanged() { RangeControl__OnMaximumChanged(this); }
    void OnValueChanged() { (((RangeControl__uType*)this->__obj_type)->__fp_OnValueChanged)(this); }
    void add_MinimumChanged(::uDelegate* value) { RangeControl__add_MinimumChanged(this, value); }
    void remove_MinimumChanged(::uDelegate* value) { RangeControl__remove_MinimumChanged(this, value); }
    void add_MaximumChanged(::uDelegate* value) { RangeControl__add_MaximumChanged(this, value); }
    void remove_MaximumChanged(::uDelegate* value) { RangeControl__remove_MaximumChanged(this, value); }
    void add_ValueChanged(::uDelegate* value) { RangeControl__add_ValueChanged(this, value); }
    void remove_ValueChanged(::uDelegate* value) { RangeControl__remove_ValueChanged(this, value); }
    float Minimum() { return RangeControl__get_Minimum(this); }
    void Minimum(float value) { RangeControl__set_Minimum(this, value); }
    float Maximum() { return RangeControl__get_Maximum(this); }
    void Maximum(float value) { RangeControl__set_Maximum(this, value); }
    float Value() { return RangeControl__get_Value(this); }
    void Value(float value) { RangeControl__set_Value(this, value); }
};

}}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

}}}}


#endif
