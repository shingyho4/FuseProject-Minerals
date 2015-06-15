// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_PRIORITY_QUEUE__FUSE_DRAWIN_129E2459_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_PRIORITY_QUEUE__FUSE_DRAWIN_129E2459_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct PriorityQueue__Fuse_Drawing_Tesselation_Vertex;

struct PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType : ::uClassType
{
    bool(*__fp_Leq_1)(PriorityQueue__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*);
};

PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof();

::app::Fuse::Drawing::Tesselation::Vertex* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_Peek(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this);
bool PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_IsEmpty(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this);
bool PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Leq(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int ai, int bi);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Enqueue(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* newKey);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__EnsureCapacity(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__HeapIncreaseKey(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i, ::app::Fuse::Drawing::Tesselation::Vertex* key);
::app::Fuse::Drawing::Tesselation::Vertex* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Dequeue(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Remove(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* item);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__RemoveAt(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int index);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__MaxHeapify(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Swap(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int a, int b);
int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Parent(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i);
int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Left(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i);
int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Right(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i);
void PriorityQueue__Fuse_Drawing_Tesselation_Vertex___ObjInit(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* maxValue);

struct PriorityQueue__Fuse_Drawing_Tesselation_Vertex : ::uObject
{
    ::uStrong< ::uArray*> _elements;
    int _used;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _maxValue;

    bool Leq(int ai, int bi) { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Leq(this, ai, bi); }
    bool Leq_1(::app::Fuse::Drawing::Tesselation::Vertex* a, ::app::Fuse::Drawing::Tesselation::Vertex* b) { return (((PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType*)this->__obj_type)->__fp_Leq_1)(this, a, b); }
    void Enqueue(::app::Fuse::Drawing::Tesselation::Vertex* newKey) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Enqueue(this, newKey); }
    void EnsureCapacity() { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__EnsureCapacity(this); }
    void HeapIncreaseKey(int i, ::app::Fuse::Drawing::Tesselation::Vertex* key) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__HeapIncreaseKey(this, i, key); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Dequeue() { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Dequeue(this); }
    void Remove(::app::Fuse::Drawing::Tesselation::Vertex* item) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Remove(this, item); }
    void RemoveAt(int index) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__RemoveAt(this, index); }
    void MaxHeapify(int i) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__MaxHeapify(this, i); }
    void Swap(int a, int b) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Swap(this, a, b); }
    int Parent(int i) { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Parent(this, i); }
    int Left(int i) { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Left(this, i); }
    int Right(int i) { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Right(this, i); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::Vertex* maxValue) { PriorityQueue__Fuse_Drawing_Tesselation_Vertex___ObjInit(this, maxValue); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Peek() { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_Peek(this); }
    bool IsEmpty() { return PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_IsEmpty(this); }
};

}}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

}}}}}


#endif
