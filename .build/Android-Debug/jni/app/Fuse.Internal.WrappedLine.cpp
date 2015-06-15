// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Fuse.Internal.WrappedLine.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

WrappedLine__uType* WrappedLine__typeof()
{
    static WrappedLine__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WrappedLine__uType*)::uAllocClassType(sizeof(WrappedLine__uType), "Fuse.Internal.WrappedLine", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(WrappedLine, Text);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Text";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int WrappedLine__get_LineTextEndOffset(WrappedLine* __this)
{
    return __this->LineTextStartOffset + ::uPtr< ::uString*>(__this->Text)->Length();
}

float WrappedLine__GetXOffset(WrappedLine* __this, int textAlignment, float boundsWidth, float absoluteZoom)
{
    switch (textAlignment)
    {
        case 0:
        {
            return 0.0f;
        }
        case 1:
        {
            return ::app::Uno::Math__Round_1(NULL, ((boundsWidth - __this->LineWidth) / 2.0f) * absoluteZoom) / absoluteZoom;
        }
        case 2:
        {
            return boundsWidth - __this->LineWidth;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_4(NULL, ::uGetConstString("unsupported enum-value"), ::uGetConstString("textAlignment")));
}

float WrappedLine__PosToBounds(WrappedLine* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, int p)
{
    return ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer), ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Text), 0, p)).X;
}

void WrappedLine___ObjInit(WrappedLine* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    __this->Text = text;
    __this->LineTextStartOffset = lineTextStartOffset;
    __this->YOffset = yOffset;
    __this->LineWidth = lineWidth;
}

WrappedLine* WrappedLine__New_1(::uStatic* __this, ::uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    WrappedLine* inst = (::app::Fuse::Internal::WrappedLine*)::uAllocObject(sizeof(::app::Fuse::Internal::WrappedLine), ::app::Fuse::Internal::WrappedLine__typeof());
    inst->_ObjInit(text, lineTextStartOffset, yOffset, lineWidth);
    return inst;
}

}}}
