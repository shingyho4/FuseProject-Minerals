// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Implementations.FallbackTextElement.h>
#include <app/Fuse.Elements.Implementations.NativeTextEdit.h>
#include <app/Fuse.Elements.TextElement.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.LineCache.h>
#include <app/Fuse.Internal.LineCachePasswordTransform.h>
#include <app/Fuse.Internal.LineCacheTransform.h>
#include <app/Fuse.Internal.TextSpan.h>
#include <app/Fuse.Internal.TextWindow.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Node.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.TextInputView.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Rect.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

NativeTextEdit__uType* NativeTextEdit__typeof()
{
    static NativeTextEdit__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NativeTextEdit__uType*)::uAllocClassType(sizeof(NativeTextEdit__uType), "Fuse.Elements.Implementations.NativeTextEdit", ::app::Fuse::Elements::TextEdit__typeof(), 6, 4);
        type->__fp_get_SubElementCount = (int(*)(::app::Fuse::Elements::Element*))NativeTextEdit__get_SubElementCount;
        type->__fp_get_Text = (::uString*(*)(::app::Fuse::Elements::TextElement*))NativeTextEdit__get_Text;
        type->__fp_set_Text = (void(*)(::app::Fuse::Elements::TextElement*, ::uString*))NativeTextEdit__set_Text;
        type->__fp_GetSubElement = (::app::Fuse::Elements::Element*(*)(::app::Fuse::Elements::Element*, int))NativeTextEdit__GetSubElement;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))NativeTextEdit__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))NativeTextEdit__OnUnrooted;
        type->__fp_OnTextChanged = (void(*)(::app::Fuse::Elements::TextElement*))NativeTextEdit__OnTextChanged;
        type->__fp_OnIsPasswordChanged = (void(*)(::app::Fuse::Elements::TextEdit*))NativeTextEdit__OnIsPasswordChanged;
        type->__fp_OnIsMultilineChanged = (void(*)(::app::Fuse::Elements::TextElement*))NativeTextEdit__OnIsMultilineChanged;
        type->__fp_OnInputHintChanged = (void(*)(::app::Fuse::Elements::TextEdit*))NativeTextEdit__OnInputHintChanged;
        type->__fp_OnCaretColorChanged = (void(*)(::app::Fuse::Elements::TextEdit*))NativeTextEdit__OnCaretColorChanged;
        type->__fp_OnSelectionColorChanged = (void(*)(::app::Fuse::Elements::TextEdit*))NativeTextEdit__OnSelectionColorChanged;
        type->__fp_OnTextAlignmentChanged = (void(*)(::app::Fuse::Elements::Element*))NativeTextEdit__OnTextAlignmentChanged;
        type->__fp_OnTextColorChanged = (void(*)(::app::Fuse::Elements::Element*))NativeTextEdit__OnTextColorChanged;
        type->__fp_OnTextWrappingChanged = (void(*)(::app::Fuse::Elements::TextElement*))NativeTextEdit__OnTextWrappingChanged;
        type->__fp_OnFontChanged = (void(*)(::app::Fuse::Elements::Element*))NativeTextEdit__OnFontChanged;
        type->__fp_OnFontSizeChanged = (void(*)(::app::Fuse::Elements::Element*))NativeTextEdit__OnFontSizeChanged;
        type->__fp_OnWorldTransformValidated = (void(*)(::app::Fuse::Node*))NativeTextEdit__OnWorldTransformValidated;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))NativeTextEdit__ArrangePaddingBox;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))NativeTextEdit__GetContentSize;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))NativeTextEdit__OnDraw;

        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))::app::Fuse::Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))::app::Fuse::Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))::app::Fuse::Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))::app::Fuse::Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))::app::Fuse::Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(NativeTextEdit__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(NativeTextEdit__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(NativeTextEdit__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(NativeTextEdit__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(NativeTextEdit__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(NativeTextEdit__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(NativeTextEdit, _lineCache);
        type->StrongRefOffsets[1] = offsetof(NativeTextEdit, _textWindow);
        type->StrongRefOffsets[2] = offsetof(NativeTextEdit, _wrapInfo);
        type->StrongRefOffsets[3] = offsetof(NativeTextEdit, _textInputView);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_lineCache";
        type->StrongRefNames[1] = "_textWindow";
        type->StrongRefNames[2] = "_wrapInfo";
        type->StrongRefNames[3] = "_textInputView";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int NativeTextEdit__get_SubElementCount(NativeTextEdit* __this)
{
    return ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing() ? 0 : 1;
}

::uString* NativeTextEdit__get_Text(NativeTextEdit* __this)
{
    return ::app::Fuse::Elements::TextElement__get_Text(__this);
}

void NativeTextEdit__set_Text(NativeTextEdit* __this, ::uString* value)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->Text(value);
    __this->OnNativeTextChanged((::uObject*)__this, ::app::Uno::EventArgs__Empty);
}

::app::Fuse::Elements::Element* NativeTextEdit__GetSubElement(NativeTextEdit* __this, int index)
{
    return (::app::Fuse::Elements::Element*)__this->_textWindow;
}

void NativeTextEdit__OnRooted(NativeTextEdit* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnFocusGained, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnFocusLost, __this));
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnNativeTextChanged, __this));
    __this->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnUpdate, __this));
}

void NativeTextEdit__OnUnrooted(NativeTextEdit* __this)
{
    ::app::Fuse::Elements::Element__OnUnrooted(__this);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnFocusGained, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnFocusLost, __this));
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->remove_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnNativeTextChanged, __this));
    __this->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeTextEdit__OnUpdate, __this));
}

void NativeTextEdit__ResetNativeFrame(NativeTextEdit* __this)
{
    if (::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        ::app::Uno::Float3 translation = ::app::Uno::Matrix__GetTranslation(NULL, __this->WorldTransform());
        ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->Frame(::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__New_2(NULL, translation.X, translation.Y), __this->AbsoluteZoom()), ::app::Uno::Float2__op_Multiply(NULL, __this->ActualSize(), __this->AbsoluteZoom())));
    }
}

void NativeTextEdit__OnUpdate(NativeTextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->ResetNativeFrame();
}

void NativeTextEdit__OnNativeTextChanged(NativeTextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Text(::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->Text());
    ::app::Fuse::Elements::TextElement__set_Text(__this, ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->Text());
}

void NativeTextEdit__OnTextChanged(NativeTextEdit* __this)
{
    __this->InvalidateLayout();

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::TextElement__OnTextChanged(__this);
}

void NativeTextEdit__OnFocusGained(NativeTextEdit* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsVisible(true);
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing(true);
    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->OnRemoved((::uObject*)__this);
    __this->InvalidateLayout();
    __this->ResetNativeFrame();
}

void NativeTextEdit__OnFocusLost(NativeTextEdit* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Text(__this->Text());
    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->OnAdded((::uObject*)__this);
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing(false);
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsVisible(false);
    __this->InvalidateLayout();
    __this->InvalidateVisual(12);
    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
}

void NativeTextEdit__OnIsPasswordChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsPassword(__this->IsPassword());
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->Transform((::uObject*)(__this->IsPassword() ? ::app::Fuse::Internal::LineCachePasswordTransform__New_1(NULL) : NULL));

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateLayout();
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::TextEdit__OnIsPasswordChanged(__this);
}

void NativeTextEdit__OnIsMultilineChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsMultiline(__this->IsMultiline());
    ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->IsMultiline(__this->IsMultiline());

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateLayout();
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::TextElement__OnIsMultilineChanged(__this);
}

void NativeTextEdit__OnInputHintChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->InputHint(__this->InputHint());
    ::app::Fuse::Elements::TextEdit__OnInputHintChanged(__this);
}

void NativeTextEdit__OnCaretColorChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->CaretColor(__this->CaretColor());
    ::app::Fuse::Elements::TextEdit__OnCaretColorChanged(__this);
}

void NativeTextEdit__OnSelectionColorChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->SelectionColor(__this->SelectionColor());
    ::app::Fuse::Elements::TextEdit__OnSelectionColorChanged(__this);
}

void NativeTextEdit__OnTextAlignmentChanged(NativeTextEdit* __this)
{
    switch (__this->TextAlignment())
    {
        case 0:
        {
            ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextAlignment(0);
            break;
        }
        case 1:
        {
            ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextAlignment(1);
            break;
        }
        case 2:
        {
            ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextAlignment(2);
            break;
        }
    }

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::Element__OnTextAlignmentChanged(__this);
}

void NativeTextEdit__OnTextColorChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextColor(__this->TextColor());

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::Element__OnTextColorChanged(__this);
}

void NativeTextEdit__OnTextWrappingChanged(NativeTextEdit* __this)
{
    switch (__this->TextWrapping())
    {
        case 0:
        {
            ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextWrapping(0);
            break;
        }
        case 1:
        {
            ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->TextWrapping(1);
            break;
        }
    }

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateLayout();
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }

    ::app::Fuse::Elements::TextElement__OnTextWrappingChanged(__this);
}

void NativeTextEdit__OnFontChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->FontFile(::uPtr< ::app::Fuse::Font*>(__this->Font())->BundleFile());
    ::app::Fuse::Elements::Element__OnFontChanged(__this);

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateLayout();
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }
}

void NativeTextEdit__OnFontSizeChanged(NativeTextEdit* __this)
{
    ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->FontSize(__this->FontSize());
    ::app::Fuse::Elements::Element__OnFontSizeChanged(__this);

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        __this->InvalidateLayout();
        __this->InvalidateVisual(12);
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->InvalidateVisual(12);
    }
}

void NativeTextEdit__OnWorldTransformValidated(NativeTextEdit* __this)
{
    __this->ResetNativeFrame();
}

void NativeTextEdit__ArrangePaddingBox(NativeTextEdit* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (!::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->ArrangeMarginBox((ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, size, (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))), (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.Z, ind_125.W))), 3);
    }

    ::app::Fuse::Elements::Element__ArrangePaddingBox(__this, size);
}

::app::Fuse::Font* NativeTextEdit__GetFontOrThrow(NativeTextEdit* __this)
{
    if (__this->Font() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Font property was not set. Did you provide a custom style with no font?")));
    }

    return __this->Font();
}

::app::Fuse::Internal::WordWrapInfo* NativeTextEdit__CreateWrapInfo(NativeTextEdit* __this, float wrapWidth, bool haveWidth)
{
    ::app::Fuse::Font* font = __this->GetFontOrThrow();
    ::app::Fuse::Internal::DefaultTextRenderer* renderer = ::app::Fuse::Elements::Implementations::FallbackTextElement__GetTextRenderer(NULL, font);
    float fontSize = __this->FontSize();
    return ::app::Fuse::Internal::WordWrapInfo__New_1(NULL, (::uObject*)renderer, __this->TextWrapping() == 1, haveWidth ? wrapWidth : FLT_INF, fontSize, ::uPtr< ::app::Fuse::Internal::DefaultTextRenderer*>(renderer)->GetLineHeight(fontSize), __this->LineSpacing(), __this->AbsoluteZoom());
}

::app::Uno::Float2 NativeTextEdit__GetWindowSize(NativeTextEdit* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Max_1(NULL, __this->ActualSize().X - (__this->Padding().X + __this->Padding().Z), 0.0f), ::app::Uno::Math__Max_1(NULL, __this->ActualSize().Y - (__this->Padding().Y + __this->Padding().W), 0.0f));
}

::app::Uno::Float2 NativeTextEdit__GetTextBoundsSize(NativeTextEdit* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    return ::uPtr< ::app::Fuse::Internal::LineCache*>(__this->_lineCache)->GetBoundsSize(wrapInfo);
}

::app::Uno::Float2 NativeTextEdit__GetClampedTextBoundsSize(NativeTextEdit* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    return ::app::Uno::Math__Max_3(NULL, __this->GetTextBoundsSize(wrapInfo), __this->GetWindowSize());
}

::app::Uno::Float2 NativeTextEdit__GetContentSize(NativeTextEdit* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing())
    {
        int flags = 0;

        if ((fillSet & 1) == 1)
        {
            flags = flags | 1;
        }

        if ((fillSet & 2) == 2)
        {
            flags = flags | 2;
        }

        return ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->GetContentSize(::app::Uno::Float2__op_Multiply(NULL, fillSize, __this->AbsoluteZoom()), flags), __this->AbsoluteZoom());
    }

    if (__this->Font() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    float wrapWidth = ::app::Uno::Math__Max_1(NULL, fillSize.X, 0.0f);
    __this->_wrapInfo = __this->CreateWrapInfo(wrapWidth, (fillSet & 1) == 1);
    ::app::Uno::Float2 r = ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->GetTextBoundsSize(__this->_wrapInfo)), 1.0f);

    if ((fillSet & 1) == 1)
    {
        r.X = ::app::Uno::Math__Min_1(NULL, r.X, fillSize.X);
    }

    return r;
}

void NativeTextEdit__OnDraw(NativeTextEdit* __this, ::app::Fuse::DrawContext* dc)
{
    if (::uPtr< ::app::Uno::Platform2::TextInputView*>(__this->_textInputView)->IsEditing() || ::app::Uno::String__IsNullOrEmpty(NULL, __this->Text()))
    {
        return;
    }

    __this->GetFontOrThrow();

    if (__this->_wrapInfo == NULL)
    {
        __this->_wrapInfo = __this->CreateWrapInfo(__this->ActualSize().X, true);
    }

    ::uPtr< ::app::Fuse::Internal::TextWindow*>(__this->_textWindow)->Draw_1(__this->_wrapInfo, NULL, __this->TextColor(), __this->SelectionColor(), ::uPtr< ::uString*>(__this->Text())->Length(), __this->TextAlignment(), __this->GetClampedTextBoundsSize(__this->_wrapInfo), ::app::Uno::Float2__New_1(NULL, 0.0f), dc);
}

}}}}
