// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Uno.Collections.Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Ba-653f1b88.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof()
{
    static Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType*)::uAllocClassType(sizeof(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType), "Uno.Collections.Dictionary<Fuse.Entities.Mesh,Fuse.Drawing.Batching.MeshBatcher>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Batching::MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 0)
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

void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__set_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 0)
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

void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Rehash(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(i).Value);
        }
    }
}

void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Add(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key, key))
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

bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__TryGetValue(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::app::Fuse::Entities::Mesh*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__Fuse_Entities_Mesh(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher>(x).State == 0)
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

void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this)
{
    Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* inst = (::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher), ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
