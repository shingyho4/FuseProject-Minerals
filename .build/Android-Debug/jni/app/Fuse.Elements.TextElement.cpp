// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.TextElement.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Elements {

TextElement__uType* TextElement__typeof()
{
    static TextElement__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextElement__uType*)::uAllocClassType(sizeof(TextElement__uType), "Fuse.Elements.TextElement", ::app::Fuse::Elements::Element__typeof(), 6, 2);
        type->__fp_get_Text = TextElement__get_Text;
        type->__fp_set_Text = TextElement__set_Text;
        type->__fp_OnTextChanged = TextElement__OnTextChanged;
        type->__fp_OnIsMultilineChanged = TextElement__OnIsMultilineChanged;
        type->__fp_OnTextWrappingChanged = TextElement__OnTextWrappingChanged;
        type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))TextElement__OnHitTestLocalVisual;
        type->__fp_OnLineSpacingChanged = TextElement__OnLineSpacingChanged;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(TextElement__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(TextElement__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(TextElement__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(TextElement__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(TextElement__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(TextElement__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(TextElement, _text);
        type->StrongRefOffsets[1] = offsetof(TextElement, TextChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_text";
        type->StrongRefNames[1] = "TextChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* TextElement__get_Text(TextElement* __this)
{
    return __this->_text;
}

void TextElement__set_Text(TextElement* __this, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->_text, value))
    {
        __this->_text = value;
        __this->OnTextChanged();
    }
}

bool TextElement__get_IsMultiline(TextElement* __this)
{
    return __this->_isMultiline;
}

void TextElement__set_IsMultiline(TextElement* __this, bool value)
{
    if (__this->_isMultiline != value)
    {
        __this->_isMultiline = value;
        __this->OnIsMultilineChanged();
    }
}

int TextElement__get_TextWrapping(TextElement* __this)
{
    return __this->_textWrapping;
}

void TextElement__set_TextWrapping(TextElement* __this, int value)
{
    if (value == __this->_textWrapping)
    {
        return;
    }

    __this->_textWrapping = value;
    __this->OnTextWrappingChanged();
}

float TextElement__get_LineSpacing(TextElement* __this)
{
    return __this->_lineSpacing;
}

void TextElement__set_LineSpacing(TextElement* __this, float value)
{
    __this->_lineSpacing = value;
    __this->OnLineSpacingChanged();
}

void TextElement__OnTextChanged(TextElement* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextElement__OnIsMultilineChanged(TextElement* __this)
{
}

void TextElement__OnTextWrappingChanged(TextElement* __this)
{
}

void TextElement__OnHitTestLocalVisual(TextElement* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void TextElement__OnLineSpacingChanged(TextElement* __this)
{
}

void TextElement___ObjInit_2(TextElement* __this)
{
    __this->_text = ::uGetConstString("");
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
}

void TextElement__add_TextChanged(TextElement* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextElement__remove_TextChanged(TextElement* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
