// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FUSE_I_FLUSH_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FUSE_I_FLUSH_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_IFlush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__Fuse_IFlush;

struct HashSet__Fuse_IFlush__uType : ::uClassType
{
};

HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof();

bool HashSet__Fuse_IFlush__Add(HashSet__Fuse_IFlush* __this, ::uObject* item);
void HashSet__Fuse_IFlush__Clear(HashSet__Fuse_IFlush* __this);
::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush__GetEnumerator(HashSet__Fuse_IFlush* __this);
void HashSet__Fuse_IFlush___ObjInit(HashSet__Fuse_IFlush* __this);
HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_1(::uStatic* __this);

struct HashSet__Fuse_IFlush : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*> _map;

    bool Add(::uObject* item) { return HashSet__Fuse_IFlush__Add(this, item); }
    void Clear() { HashSet__Fuse_IFlush__Clear(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush GetEnumerator();
    void _ObjInit() { HashSet__Fuse_IFlush___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush::GetEnumerator() { return HashSet__Fuse_IFlush__GetEnumerator(this); }

}}}


#endif
