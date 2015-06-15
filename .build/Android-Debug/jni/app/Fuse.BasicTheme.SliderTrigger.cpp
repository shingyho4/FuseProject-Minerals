// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.SliderTrigger.h>
#include <app/Fuse.Controls.Primitives.RangeControl.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

SliderTrigger__uType* SliderTrigger__typeof()
{
    static SliderTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SliderTrigger__uType*)::uAllocClassType(sizeof(SliderTrigger__uType), "Fuse.BasicTheme.SliderTrigger", ::app::Fuse::Triggers::ElementTrigger__typeof(), 0, 1);
        type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))SliderTrigger__OnRooted_1;
        type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))SliderTrigger__OnUnrooted_1;

        type->StrongRefOffsets[0] = offsetof(SliderTrigger, _slider);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_slider";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float SliderTrigger__get_Max(SliderTrigger* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->Maximum();
}

float SliderTrigger__get_Min(SliderTrigger* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->Minimum();
}

float SliderTrigger__get_Value(SliderTrigger* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->Value();
}

void SliderTrigger__OnRooted_1(SliderTrigger* __this, ::app::Fuse::Elements::Element* elm)
{
    if (::uIs(elm, ::app::Fuse::Controls::Slider__typeof()))
    {
        __this->_slider = ::uCast< ::app::Fuse::Controls::Slider*>(elm, ::app::Fuse::Controls::Slider__typeof());
        __this->Update(NULL, NULL);
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->add_MinimumChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->add_MaximumChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
    }
}

void SliderTrigger__OnUnrooted_1(SliderTrigger* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->_slider != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->remove_MinimumChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->remove_MaximumChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->_slider)->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::BasicTheme::SliderTrigger__Update, __this));
        __this->_slider = NULL;
    }
}

void SliderTrigger__Update(SliderTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    double progress = (double)((__this->Value() - __this->Min()) / (__this->Max() - __this->Min()));
    __this->Seek(progress);
}

void SliderTrigger___ObjInit_3(SliderTrigger* __this)
{
    ::app::Fuse::Triggers::ElementTrigger___ObjInit_2(__this);
}

SliderTrigger* SliderTrigger__New_1(::uStatic* __this)
{
    SliderTrigger* inst = (::app::Fuse::BasicTheme::SliderTrigger*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::SliderTrigger), ::app::Fuse::BasicTheme::SliderTrigger__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
