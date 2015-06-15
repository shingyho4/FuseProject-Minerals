// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_21BE5771_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_21BE5771_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-f7f4ae32.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uClassType
{
};

Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this);

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller GetEnumerator();
    void Rehash() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(this); }
    void Clear() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(this); }
    void Add(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(this, key, value); }
    bool TryGetValue(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(this, key, value); }
    bool Remove(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(this, key); }
    void _ObjInit() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Values() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(this); }
    ::app::Fuse::Drawing::PolygonFiller* Item(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(this, key); }
    void Item(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-97ecb3f2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller::GetEnumerator() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(this); }

}}}


#endif
