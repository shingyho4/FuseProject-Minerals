// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Uno.Collections.Dictionary__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocClassType(sizeof(Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.Dictionary<string,Fuse.Shapes.GeometryCacheEntry>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__string__Fuse_Shapes_GeometryCacheEntry, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Shapes::GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__set_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__New_1(NULL, __this);
}

void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Rehash(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(i).Value);
        }
    }
}

void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Add(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key, key))
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

bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__TryGetValue(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry>(x).State == 0)
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

void Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Fuse_Shapes_GeometryCacheEntry__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this)
{
    Dictionary__string__Fuse_Shapes_GeometryCacheEntry* inst = (::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry), ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
