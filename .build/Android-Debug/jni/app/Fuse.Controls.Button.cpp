// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Controls {

Button__uType* Button__typeof()
{
    static Button__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.Controls.Button", ::app::Fuse::Controls::Panel__typeof(), 9);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(Button__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Button__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Button__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Button__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Button__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Button__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Button__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(Button__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(Button__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Controls::Text* Button__GetTextControl(Button* __this, bool create)
{
    if ((::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(__this->Children())) == 0) || (::uAs< ::app::Fuse::Controls::Text*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), 0), ::app::Fuse::Controls::Text__typeof()) == NULL))
    {
        if (create)
        {
            ::app::Fuse::Controls::Text* tb = ::app::Fuse::Controls::Text__New_1(NULL);
            ::uPtr< ::app::Fuse::Controls::Text*>(tb)->Alignment(8);
            ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Clear(::uPtr< ::uObject*>(__this->Children()));
            ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Elements::Element*)tb);
            return tb;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        return ::uAs< ::app::Fuse::Controls::Text*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(__this->Children()), 0), ::app::Fuse::Controls::Text__typeof());
    }
}

void Button__SetStyleText(Button* __this, ::uString* text)
{
    if (__this->_textState == 0)
    {
        __this->_textState = 1;
        __this->SetTextInternal(text);
    }
}

void Button__SetTextInternal(Button* __this, ::uString* val)
{
    ::app::Fuse::Controls::Text* tb = __this->GetTextControl(true);

    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< ::app::Fuse::Controls::Text*>(tb)->Content(), val))
    {
        ::uPtr< ::app::Fuse::Controls::Text*>(tb)->Content(val);
    }
}

}}}
