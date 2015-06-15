// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.IFlush.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Fuse_IFlush__bool__uType* Dictionary__Fuse_IFlush__bool__typeof()
{
    static Dictionary__Fuse_IFlush__bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Fuse_IFlush__bool__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Fuse_IFlush__bool, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Dictionary__Fuse_IFlush__bool__get_Item(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_IFlush(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 0)
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

void Dictionary__Fuse_IFlush__bool__set_Item(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key, bool value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_IFlush(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 0)
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

void Dictionary__Fuse_IFlush__bool__Rehash(Dictionary__Fuse_IFlush__bool* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Value);
        }
    }
}

void Dictionary__Fuse_IFlush__bool__Clear(Dictionary__Fuse_IFlush__bool* __this)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_buckets)->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).State = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Value = 0;
        ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(i).Key = NULL;
    }

    __this->_count = 0;
    __this->_dummies = 0;
    __this->_version++;
}

void Dictionary__Fuse_IFlush__bool__Add(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key, bool value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_IFlush(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key, key))
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

bool Dictionary__Fuse_IFlush__bool__ContainsKey(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_IFlush(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(x).State == 0)
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

void Dictionary__Fuse_IFlush__bool___ObjInit(Dictionary__Fuse_IFlush__bool* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Fuse_IFlush__bool* Dictionary__Fuse_IFlush__bool__New_1(::uStatic* __this)
{
    Dictionary__Fuse_IFlush__bool* inst = (::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Fuse_IFlush__bool), ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
