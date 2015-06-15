// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.LineCache.h>
#include <app/Fuse.Internal.LineCacheLine.h>
#include <app/Fuse.Internal.LineCacheTransform.h>
#include <app/Fuse.Internal.TextPosition.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Uno.Action.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

LineCache__uType* LineCache__typeof()
{
    static LineCache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LineCache__uType*)::uAllocClassType(sizeof(LineCache__uType), "Fuse.Internal.LineCache", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(LineCache, _lines);
        type->StrongRefOffsets[1] = offsetof(LineCache, _text);
        type->StrongRefOffsets[2] = offsetof(LineCache, _transform);
        type->StrongRefOffsets[3] = offsetof(LineCache, _onTextChanged);
        type->StrongRefOffsets[4] = offsetof(LineCache, _invalideLayout);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_lines";
        type->StrongRefNames[1] = "_text";
        type->StrongRefNames[2] = "_transform";
        type->StrongRefNames[3] = "_onTextChanged";
        type->StrongRefNames[4] = "_invalideLayout";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* LineCache__get_Lines(LineCache* __this)
{
    if (__this->_lines == NULL)
    {
        __this->_lines = __this->DecomposeLines(__this->_text);
    }

    return __this->_lines;
}

::uString* LineCache__get_Text(LineCache* __this)
{
    if (!__this->_isTextValid)
    {
        __this->_text = ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::app::Uno::Collections::EnumerableExtensions__First__Fuse_Internal_LineCacheLine(NULL, (::uObject*)__this->Lines()))->Text();

        for (int i = 1; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Count(); i++)
        {
            __this->_text = ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, __this->_text, ::uGetConstString("\n")), ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Item(i))->Text());
        }

        __this->_isTextValid = true;
    }

    return __this->_text;
}

void LineCache__set_Text(LineCache* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, value, __this->Text()))
    {
        return;
    }

    __this->_text = value;
    __this->_isTextValid = true;
    __this->_lines = NULL;
}

bool LineCache__get_IsMultiline(LineCache* __this)
{
    return __this->_isMultiline;
}

void LineCache__set_IsMultiline(LineCache* __this, bool value)
{
    if (value == __this->_isMultiline)
    {
        return;
    }

    __this->_isMultiline = value;
    __this->_lines = NULL;
}

::uObject* LineCache__get_Transform(LineCache* __this)
{
    return __this->_transform;
}

void LineCache__set_Transform(LineCache* __this, ::uObject* value)
{
    __this->_transform = value;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Internal::LineCacheLine* line = enum_123.Current();
        ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(line)->Transform(__this->_transform);
    }

    __this->InvalidateText();
}

::app::Uno::Float2 LineCache__GetBoundsSize(LineCache* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* array_125;
    int index_126 = int();
    int length_127 = int();
    float maxWidth = 0.0f;
    float height = 0.0f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Internal::LineCacheLine* line = enum_124.Current();

        for (array_125 = ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(line)->GetWrappedLines(wrapInfo), index_126 = 0, length_127 = ::uPtr< ::uArray*>(array_125)->Length(); index_126 < length_127; ++index_126)
        {
            ::app::Fuse::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(array_125)->Item< ::app::Fuse::Internal::WrappedLine*>(index_126);
            maxWidth = ::app::Uno::Math__Max_1(NULL, maxWidth, ::uPtr< ::app::Fuse::Internal::WrappedLine*>(wrappedLine)->LineWidth);
            height = height + ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->LineHeight;
        }
    }

    return ::app::Uno::Float2__New_2(NULL, maxWidth, height);
}

::app::Uno::Float2 LineCache__TextPosToBounds(LineCache* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Internal::TextPosition* p)
{
    float startY = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Fuse::Internal::TextPosition*>(p)->Line; i++)
    {
        startY = startY + ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Item(i))->GetTotalHeight(wrapInfo);
    }

    ::app::Uno::Float2 linePos = ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Internal::TextPosition*>(p)->Line))->PosToBounds(wrapInfo, textAlignment, boundsWidth, ::uPtr< ::app::Fuse::Internal::TextPosition*>(p)->Char);
    return ::app::Uno::Float2__New_2(NULL, linePos.X, startY + linePos.Y);
}

::app::Fuse::Internal::TextPosition* LineCache__GetLastTextPos(LineCache* __this)
{
    return ::app::Fuse::Internal::TextPosition__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Count() - 1, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Internal::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->Count() - 1))->Text())->Length());
}

void LineCache__InvalidateVisual(LineCache* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine enum_128 = ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Fuse::Internal::LineCacheLine* line = enum_128.Current();
        ::uPtr< ::app::Fuse::Internal::LineCacheLine*>(line)->Invalidate();
    }

    __this->InvalidateLayout();
}

void LineCache__InvalidateText(LineCache* __this)
{
    __this->_text = NULL;
    __this->_isTextValid = false;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_onTextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_onTextChanged)->InvokeVoid();
    }

    __this->InvalidateLayout();
}

void LineCache__InvalidateLayout(LineCache* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_invalideLayout, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_invalideLayout)->InvokeVoid();
    }
}

::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* LineCache__DecomposeLines(LineCache* __this, ::uString* text)
{
    ::uArray* array_132;
    ::uArray* array_129;
    int index_130 = int();
    int length_131 = int();
    ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* lines = ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine__New_1(NULL);

    if (::app::Uno::String__op_Inequality(NULL, text, NULL))
    {
        if (__this->IsMultiline())
        {
            for (array_129 = ::app::Uno::String::Split(::uPtr< ::uString*>(text), (array_132 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_132)->Item< ::uChar>(0) = 10, array_132)), index_130 = 0, length_131 = ::uPtr< ::uArray*>(array_129)->Length(); index_130 < length_131; ++index_130)
            {
                ::uString* line = ::uPtr< ::uArray*>(array_129)->Item< ::uString*>(index_130);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(lines)->Add(::app::Fuse::Internal::LineCacheLine__New_1(NULL, line, __this->_transform));
            }
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(lines)->Add(::app::Fuse::Internal::LineCacheLine__New_1(NULL, text, __this->_transform));
        }
    }

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(lines)->Count() == 0)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*>(lines)->Add(::app::Fuse::Internal::LineCacheLine__New_1(NULL, ::app::Uno::String__Empty, __this->_transform));
    }

    return lines;
}

void LineCache___ObjInit(LineCache* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout)
{
    __this->_isTextValid = true;
    __this->_onTextChanged = onTextChanged;
    __this->_invalideLayout = invalideLayout;
    __this->_lines = NULL;
}

LineCache* LineCache__New_1(::uStatic* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout)
{
    LineCache* inst = (::app::Fuse::Internal::LineCache*)::uAllocObject(sizeof(::app::Fuse::Internal::LineCache), ::app::Fuse::Internal::LineCache__typeof());
    inst->_ObjInit(onTextChanged, invalideLayout);
    return inst;
}

}}}
