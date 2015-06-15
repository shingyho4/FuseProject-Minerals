// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof()
{
    static Dictionary__int__Fuse_Input_Capturer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__int__Fuse_Input_Capturer__uType*)::uAllocClassType(sizeof(Dictionary__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__int__Fuse_Input_Capturer, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::Capturer* Dictionary__int__Fuse_Input_Capturer__get_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
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

void Dictionary__int__Fuse_Input_Capturer__set_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
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

::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer__GetEnumerator(Dictionary__int__Fuse_Input_Capturer* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer__New_1(NULL, __this);
}

void Dictionary__int__Fuse_Input_Capturer__Rehash(Dictionary__int__Fuse_Input_Capturer* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(i).Value);
        }
    }
}

void Dictionary__int__Fuse_Input_Capturer__Add(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
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

bool Dictionary__int__Fuse_Input_Capturer__Remove(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State = 2;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Value = NULL;
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key = 0;
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
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

bool Dictionary__int__Fuse_Input_Capturer__ContainsKey(Dictionary__int__Fuse_Input_Capturer* __this, int key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(x).State == 0)
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

void Dictionary__int__Fuse_Input_Capturer___ObjInit(Dictionary__int__Fuse_Input_Capturer* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_1(::uStatic* __this)
{
    Dictionary__int__Fuse_Input_Capturer* inst = (::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer), ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
