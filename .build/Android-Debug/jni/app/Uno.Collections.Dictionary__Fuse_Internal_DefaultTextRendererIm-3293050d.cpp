// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.DefaultTextRendererImpl_FontKey.h>
#include <app/Uno.Collections.Dictionary__Fuse_Internal_DefaultTextRendererIm-3293050d.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof()
{
    static Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType), "Uno.Collections.Dictionary<Fuse.Internal.DefaultTextRendererImpl_FontKey,Uno.Content.Fonts.BitmapFont>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Rehash(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(i).Value);
        }
    }
}

void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Add(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__TryGetValue(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* inst = (::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont), ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
