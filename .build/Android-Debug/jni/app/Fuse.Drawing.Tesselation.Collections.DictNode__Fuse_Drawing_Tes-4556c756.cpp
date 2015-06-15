// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-4556c756.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType), "Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _key);
        type->StrongRefOffsets[1] = offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _prev);
        type->StrongRefOffsets[2] = offsetof(DictNode__Fuse_Drawing_Tesselation_ActiveRegion, _Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_prev";
        type->StrongRefNames[2] = "_Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_key;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Key(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    __this->_key = value;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_Next;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Next(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_Next = value;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__get_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    return __this->_prev;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__set_Prev(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, DictNode__Fuse_Drawing_Tesselation_ActiveRegion* value)
{
    __this->_prev = value;
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__InsertBefore(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::ActiveRegion* key)
{
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* collection_123;
    collection_123 = DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(NULL);
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(collection_123)->Key(key);
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* newNode = collection_123;
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* node = __this;
    newNode->Next(node->Next());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(node->Next())->Prev(newNode);
    newNode->Prev(node);
    node->Next(newNode);
    return newNode;
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion__Unlink(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Prev())->Next(__this->Next());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(__this->Next())->Prev(__this->Prev());
    __this->Next(NULL);
    __this->Prev(NULL);
}

void DictNode__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit(DictNode__Fuse_Drawing_Tesselation_ActiveRegion* __this)
{
    __this->Key(NULL);
    __this->Next(__this);
    __this->Prev(__this);
}

DictNode__Fuse_Drawing_Tesselation_ActiveRegion* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this)
{
    DictNode__Fuse_Drawing_Tesselation_ActiveRegion* inst = (::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion), ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}}
