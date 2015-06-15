// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Mesh.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Uno_Collections-e5128ebd.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Uno.Collections.List<Fuse.Entities.Entry>>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List__Fuse_Entities_Entry* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___get_Item(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 0)
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

void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___set_Item(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 0)
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

::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(NULL, __this);
}

void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Rehash(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(i).Value);
        }
    }
}

void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___Add(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key, key))
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

bool Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___ContainsKey(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Mesh* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_>(x).State == 0)
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

void Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this)
{
    Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_* inst = (::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry_), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Uno_Collections_List_Fuse_Entities_Entry___typeof());
    inst->_ObjInit();
    return inst;
}

}}}
