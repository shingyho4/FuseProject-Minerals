// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Triggers.ContainingText.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Triggers {

ContainingText__uType* ContainingText__typeof()
{
    static ContainingText__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ContainingText__uType*)::uAllocClassType(sizeof(ContainingText__uType), "Fuse.Triggers.ContainingText", ::app::Fuse::Triggers::ElementTrigger__typeof(), 0, 1);
        type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))ContainingText__OnRooted_1;
        type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))ContainingText__OnUnrooted_1;

        type->StrongRefOffsets[0] = offsetof(ContainingText, _textInput);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_textInput";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ContainingText__OnRooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_textInput = ::uAs< ::app::Fuse::Controls::TextInput*>(elm, ::app::Fuse::Controls::TextInput__typeof());

    if (__this->_textInput != NULL)
    {
        if (!::app::Uno::String__IsNullOrEmpty(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->Text()))
        {
            __this->BypassActivate();
        }

        ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::ContainingText__OnTextChanged, __this));
    }
}

void ContainingText__OnUnrooted_1(ContainingText* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->_textInput != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->remove_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Triggers::ContainingText__OnTextChanged, __this));
    }

    __this->_textInput = NULL;
}

void ContainingText__OnTextChanged(ContainingText* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->ApplyState();
}

void ContainingText__ApplyState(ContainingText* __this)
{
    if (!::app::Uno::String__IsNullOrEmpty(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->_textInput)->Text()))
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->Deactivate();
    }
}

}}}
