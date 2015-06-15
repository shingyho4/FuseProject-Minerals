// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Content.Images.Bitmap.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

RenderedGlyph__uType* RenderedGlyph__typeof()
{
    static RenderedGlyph__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RenderedGlyph__uType*)::uAllocValueType(sizeof(RenderedGlyph__uType), "Uno.Content.Fonts.RenderedGlyph", sizeof(RenderedGlyph), 0, 1);
        type->StrongRefOffsets[0] = offsetof(RenderedGlyph, Bitmap);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Bitmap";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void RenderedGlyph___ObjInit(RenderedGlyph* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap)
{
    __this->Advance = advance;
    __this->Bearing = bearing;
    __this->Bitmap = bitmap;
}

RenderedGlyph RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap)
{
    RenderedGlyph inst = ::uDefault< RenderedGlyph>();
    inst._ObjInit(advance, bearing, bitmap);
    return inst;
}

}}}}
