// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_BUNDLE_FILE__UNO_WEAK_REFERENCE_F_3D45DA76_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_BUNDLE_FILE__UNO_WEAK_REFERENCE_F_3D45DA76_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_BundleFile__Uno_WeakRef-b077b91f.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_BundleFileImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_;

struct Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType : ::uClassType
{
};

Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType* Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof();

void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Rehash(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this);
void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Add(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl* value);
bool Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___TryGetValue(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl** value);
bool Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Remove(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this, ::app::Uno::BundleFile* key);
void Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl____ObjInit(Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* __this);
Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_* Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___New_1(::uStatic* __this);

struct Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Rehash(this); }
    void Add(::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl* value) { Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Add(this, key, value); }
    bool TryGetValue(::app::Uno::BundleFile* key, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl** value) { return Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___TryGetValue(this, key, value); }
    bool Remove(::app::Uno::BundleFile* key) { return Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___Remove(this, key); }
    void _ObjInit() { Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl____ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
