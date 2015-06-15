// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_NATIVE_TEXT_EDIT_H__
#define __APP_FUSE_ELEMENTS_IMPLEMENTATIONS_NATIVE_TEXT_EDIT_H__

#include <app/Fuse.Elements.TextEdit.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }
namespace app { namespace Fuse { namespace Internal { struct LineCache; } } }
namespace app { namespace Fuse { namespace Internal { struct TextWindow; } } }
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Platform2 { struct TextInputView; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

struct NativeTextEdit;

struct NativeTextEdit__uType : ::app::Fuse::Elements::TextEdit__uType
{
};

NativeTextEdit__uType* NativeTextEdit__typeof();

int NativeTextEdit__get_SubElementCount(NativeTextEdit* __this);
::uString* NativeTextEdit__get_Text(NativeTextEdit* __this);
void NativeTextEdit__set_Text(NativeTextEdit* __this, ::uString* value);
::app::Fuse::Elements::Element* NativeTextEdit__GetSubElement(NativeTextEdit* __this, int index);
void NativeTextEdit__OnRooted(NativeTextEdit* __this);
void NativeTextEdit__OnUnrooted(NativeTextEdit* __this);
void NativeTextEdit__ResetNativeFrame(NativeTextEdit* __this);
void NativeTextEdit__OnUpdate(NativeTextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeTextEdit__OnNativeTextChanged(NativeTextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeTextEdit__OnTextChanged(NativeTextEdit* __this);
void NativeTextEdit__OnFocusGained(NativeTextEdit* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args);
void NativeTextEdit__OnFocusLost(NativeTextEdit* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args);
void NativeTextEdit__OnIsPasswordChanged(NativeTextEdit* __this);
void NativeTextEdit__OnIsMultilineChanged(NativeTextEdit* __this);
void NativeTextEdit__OnInputHintChanged(NativeTextEdit* __this);
void NativeTextEdit__OnCaretColorChanged(NativeTextEdit* __this);
void NativeTextEdit__OnSelectionColorChanged(NativeTextEdit* __this);
void NativeTextEdit__OnTextAlignmentChanged(NativeTextEdit* __this);
void NativeTextEdit__OnTextColorChanged(NativeTextEdit* __this);
void NativeTextEdit__OnTextWrappingChanged(NativeTextEdit* __this);
void NativeTextEdit__OnFontChanged(NativeTextEdit* __this);
void NativeTextEdit__OnFontSizeChanged(NativeTextEdit* __this);
void NativeTextEdit__OnWorldTransformValidated(NativeTextEdit* __this);
void NativeTextEdit__ArrangePaddingBox(NativeTextEdit* __this, ::app::Uno::Float2 size);
::app::Fuse::Font* NativeTextEdit__GetFontOrThrow(NativeTextEdit* __this);
::app::Fuse::Internal::WordWrapInfo* NativeTextEdit__CreateWrapInfo(NativeTextEdit* __this, float wrapWidth, bool haveWidth);
::app::Uno::Float2 NativeTextEdit__GetWindowSize(NativeTextEdit* __this);
::app::Uno::Float2 NativeTextEdit__GetTextBoundsSize(NativeTextEdit* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 NativeTextEdit__GetClampedTextBoundsSize(NativeTextEdit* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 NativeTextEdit__GetContentSize(NativeTextEdit* __this, ::app::Uno::Float2 fillSize, int fillSet);
void NativeTextEdit__OnDraw(NativeTextEdit* __this, ::app::Fuse::DrawContext* dc);

struct NativeTextEdit : ::app::Fuse::Elements::TextEdit
{
    ::uStrong< ::app::Fuse::Internal::LineCache*> _lineCache;
    ::uStrong< ::app::Fuse::Internal::TextWindow*> _textWindow;
    ::uStrong< ::app::Fuse::Internal::WordWrapInfo*> _wrapInfo;
    ::uStrong< ::app::Uno::Platform2::TextInputView*> _textInputView;

    void ResetNativeFrame() { NativeTextEdit__ResetNativeFrame(this); }
    void OnUpdate(::uObject* sender, ::app::Uno::EventArgs* args) { NativeTextEdit__OnUpdate(this, sender, args); }
    void OnNativeTextChanged(::uObject* sender, ::app::Uno::EventArgs* args) { NativeTextEdit__OnNativeTextChanged(this, sender, args); }
    void OnFocusGained(::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { NativeTextEdit__OnFocusGained(this, sender, args); }
    void OnFocusLost(::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args) { NativeTextEdit__OnFocusLost(this, sender, args); }
    ::app::Fuse::Font* GetFontOrThrow() { return NativeTextEdit__GetFontOrThrow(this); }
    ::app::Fuse::Internal::WordWrapInfo* CreateWrapInfo(float wrapWidth, bool haveWidth) { return NativeTextEdit__CreateWrapInfo(this, wrapWidth, haveWidth); }
    ::app::Uno::Float2 GetWindowSize();
    ::app::Uno::Float2 GetTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo);
    ::app::Uno::Float2 GetClampedTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo);
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

inline ::app::Uno::Float2 NativeTextEdit::GetWindowSize() { return NativeTextEdit__GetWindowSize(this); }
inline ::app::Uno::Float2 NativeTextEdit::GetTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return NativeTextEdit__GetTextBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 NativeTextEdit::GetClampedTextBoundsSize(::app::Fuse::Internal::WordWrapInfo* wrapInfo) { return NativeTextEdit__GetClampedTextBoundsSize(this, wrapInfo); }

}}}}


#endif
