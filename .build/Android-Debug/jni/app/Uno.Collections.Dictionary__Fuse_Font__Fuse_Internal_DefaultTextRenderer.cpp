// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Font.h>
#include <app/Fuse.Internal.DefaultTextRenderer.h>
#include <app/Uno.Collections.Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof()
{
    static Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Internal.DefaultTextRenderer>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Rehash(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(i).Value);
        }
    }
}

void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__Add(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Font*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Font(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Key, key))
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

bool Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__TryGetValue(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Internal::DefaultTextRenderer** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Font*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Font(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer>(x).State == 0)
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

void Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer___ObjInit(Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer* inst = (::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer), ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Internal_DefaultTextRenderer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
