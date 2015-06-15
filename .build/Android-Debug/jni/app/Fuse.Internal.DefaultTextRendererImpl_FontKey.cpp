// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.DefaultTextRendererImpl_FontKey.h>
#include <app/Uno.Content.Fonts.FontFace.h>

namespace app {
namespace Fuse {
namespace Internal {

DefaultTextRendererImpl_FontKey__uType* DefaultTextRendererImpl_FontKey__typeof()
{
    static DefaultTextRendererImpl_FontKey__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultTextRendererImpl_FontKey__uType*)::uAllocClassType(sizeof(DefaultTextRendererImpl_FontKey__uType), "Fuse.Internal.DefaultTextRendererImpl.FontKey", ::uObject__typeof(), 0, 1);
        type->__fp_GetHashCode = (int(*)(::uObject*))DefaultTextRendererImpl_FontKey__GetHashCode;
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))DefaultTextRendererImpl_FontKey__Equals;

        type->StrongRefOffsets[0] = offsetof(DefaultTextRendererImpl_FontKey, FontFace);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "FontFace";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int DefaultTextRendererImpl_FontKey__GetHashCode(DefaultTextRendererImpl_FontKey* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Content::Fonts::FontFace*>(__this->FontFace)) + __this->Size;
}

bool DefaultTextRendererImpl_FontKey__Equals(DefaultTextRendererImpl_FontKey* __this, ::uObject* obj)
{
    if (::uIs(obj, DefaultTextRendererImpl_FontKey__typeof()))
    {
        DefaultTextRendererImpl_FontKey* fk = ::uCast< DefaultTextRendererImpl_FontKey*>(obj, DefaultTextRendererImpl_FontKey__typeof());
        return (::uPtr< ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*>(fk)->Size == __this->Size) && (::uPtr< ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*>(fk)->FontFace == __this->FontFace);
    }

    return false;
}

void DefaultTextRendererImpl_FontKey___ObjInit(DefaultTextRendererImpl_FontKey* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    __this->FontFace = fontFace;
    __this->Size = size;
}

DefaultTextRendererImpl_FontKey* DefaultTextRendererImpl_FontKey__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    DefaultTextRendererImpl_FontKey* inst = (::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*)::uAllocObject(sizeof(::app::Fuse::Internal::DefaultTextRendererImpl_FontKey), ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey__typeof());
    inst->_ObjInit(fontFace, size);
    return inst;
}

}}}
