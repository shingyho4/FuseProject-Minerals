// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Implementations.FallbackTextElement.h>
#include <app/Fuse.Elements.TextElement.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Controls {

Text__uType* Text__typeof()
{
    static Text__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Text__uType*)::uAllocClassType(sizeof(Text__uType), "Fuse.Controls.Text", ::app::Fuse::Controls::Control__typeof(), 7, 2);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Text__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Text__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Text__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Text__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Text__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Text__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Text__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(Text, _elm);
        type->StrongRefOffsets[1] = offsetof(Text, ContentChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_elm";
        type->StrongRefNames[1] = "ContentChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* Text__get_Content(Text* __this)
{
    return ::uPtr< ::app::Fuse::Elements::TextElement*>(__this->_elm)->Text();
}

void Text__set_Content(Text* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Elements::TextElement*>(__this->_elm)->Text(value);
}

void Text__OnTextChanged(Text* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ContentChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ContentChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Text___ObjInit_3(Text* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
    __this->_elm = (::app::Fuse::Elements::TextElement*)::app::Fuse::Elements::Implementations::FallbackTextElement__New_1(NULL);
    ::uPtr< ::app::Fuse::Elements::TextElement*>(__this->_elm)->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Controls::Text__OnTextChanged, __this));
    __this->VisualTree((::app::Fuse::Elements::Element*)__this->_elm);
}

Text* Text__New_1(::uStatic* __this)
{
    Text* inst = (::app::Fuse::Controls::Text*)::uAllocObject(sizeof(::app::Fuse::Controls::Text), ::app::Fuse::Controls::Text__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
