// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.Dictionary__Uno_BundleFile__Uno_WeakReference_F-3d45da76.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.WeakReference__Fuse_Resources_BundleFileImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType* Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof()
{
    static Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.BundleFile,Uno.WeakReference<Fuse.Resources.BundleFileImageSourceImpl>>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Rehash(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(i).Value);
        }
    }
}

void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Add(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::BundleFile*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_BundleFile(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key, key))
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

bool Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___TryGetValue(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::BundleFile*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_BundleFile(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 0)
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

bool Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Remove(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::BundleFile*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Uno_BundleFile(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).Key = NULL;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl____ObjInit(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___New_1(::uStatic* __this)
{
    Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* inst = (::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_), ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof());
    inst->_ObjInit();
    return inst;
}

}}}
