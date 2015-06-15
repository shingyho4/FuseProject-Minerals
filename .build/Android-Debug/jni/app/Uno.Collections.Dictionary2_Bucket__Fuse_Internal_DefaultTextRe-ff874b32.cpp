// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.DefaultTextRendererImpl_FontKey.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Internal_DefaultTextRe-ff874b32.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.Dictionary2_Bucket<Fuse.Internal.DefaultTextRendererImpl_FontKey,Uno.Content.Fonts.BitmapFont>", sizeof(Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
        type->StrongRefNames[1] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
