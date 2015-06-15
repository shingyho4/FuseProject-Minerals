// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.TextInputTemplate.h>
#include <app/Fuse.Gestures.Tapped.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>

namespace app {
namespace Fuse {
namespace Controls {

TextInputTemplate__uType* TextInputTemplate__typeof()
{
    static TextInputTemplate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextInputTemplate__uType*)::uAllocClassType(sizeof(TextInputTemplate__uType), "Fuse.Controls.TextInputTemplate", ::app::Uno::UX::Template__Fuse_Controls_TextInput__typeof(), 1);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextInput*, ::app::Fuse::Controls::TextInput*))TextInputTemplate__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(TextInputTemplate__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextInputTemplate__OnApply(TextInputTemplate* __this, ::app::Fuse::Controls::TextInput* self)
{
    ::app::Fuse::Gestures::Tapped* temp = ::app::Fuse::Gestures::Tapped__New_2(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Tapped*>(temp)->Actions()), ::app::Fuse::Triggers::Actions::GiveFocus__Singleton);
    ::uPtr< ::app::Fuse::Controls::TextInput*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

void TextInputTemplate___ObjInit_1(TextInputTemplate* __this)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextInput___ObjInit(__this);
}

TextInputTemplate* TextInputTemplate__New_1(::uStatic* __this)
{
    TextInputTemplate* inst = (::app::Fuse::Controls::TextInputTemplate*)::uAllocObject(sizeof(::app::Fuse::Controls::TextInputTemplate), ::app::Fuse::Controls::TextInputTemplate__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
