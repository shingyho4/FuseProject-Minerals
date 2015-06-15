// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Fuse.Internal.WordWrapInfo.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Internal {

WordWrapInfo__uType* WordWrapInfo__typeof()
{
    static WordWrapInfo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WordWrapInfo__uType*)::uAllocClassType(sizeof(WordWrapInfo__uType), "Fuse.Internal.WordWrapInfo", ::uObject__typeof(), 0, 1);
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))WordWrapInfo__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))WordWrapInfo__GetHashCode;

        type->StrongRefOffsets[0] = offsetof(WordWrapInfo, TextRenderer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "TextRenderer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool WordWrapInfo__Equals(WordWrapInfo* __this, ::uObject* obj)
{
    if (!::uIs(obj, WordWrapInfo__typeof()))
    {
        return false;
    }

    WordWrapInfo* other = ::uCast< WordWrapInfo*>(obj, WordWrapInfo__typeof());
    return (((((__this->TextRenderer == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->TextRenderer) && (__this->IsEnabled == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->IsEnabled)) && (__this->WrapWidth == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->WrapWidth)) && (__this->FontSize == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->FontSize)) && (__this->LineHeight == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->LineHeight)) && (__this->AbsoluteZoom == ::uPtr< ::app::Fuse::Internal::WordWrapInfo*>(other)->AbsoluteZoom);
}

int WordWrapInfo__GetHashCode(WordWrapInfo* __this)
{
    bool ind_123 = bool();
    float ind_124 = float();
    float ind_125 = float();
    float ind_126 = float();
    float ind_127 = float();
    return ((((::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(__this->TextRenderer)) ^ ::app::Uno::Bool::GetHashCode((ind_123 = __this->IsEnabled, ind_123))) ^ ::app::Uno::Float::GetHashCode((ind_124 = __this->WrapWidth, ind_124))) ^ ::app::Uno::Float::GetHashCode((ind_125 = __this->FontSize, ind_125))) ^ ::app::Uno::Float::GetHashCode((ind_126 = __this->LineHeight, ind_126))) ^ ::app::Uno::Float::GetHashCode((ind_127 = __this->AbsoluteZoom, ind_127));
}

void WordWrapInfo___ObjInit(WordWrapInfo* __this, ::uObject* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    __this->AbsoluteZoom = absoluteZoom;
    __this->TextRenderer = textRenderer;
    __this->IsEnabled = isEnabled;
    __this->WrapWidth = wrapWidth;
    __this->FontSize = fontSize;
    __this->LineHeight = ::app::Uno::Math__Ceil_1(NULL, lineHeight * absoluteZoom) / absoluteZoom;
    __this->LineHeight = __this->LineHeight + (lineSpacing * absoluteZoom);
}

WordWrapInfo* WordWrapInfo__New_1(::uStatic* __this, ::uObject* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    WordWrapInfo* inst = (::app::Fuse::Internal::WordWrapInfo*)::uAllocObject(sizeof(::app::Fuse::Internal::WordWrapInfo), ::app::Fuse::Internal::WordWrapInfo__typeof());
    inst->_ObjInit(textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom);
    return inst;
}

}}}
