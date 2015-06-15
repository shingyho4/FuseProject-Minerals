// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_BundleFile__Uno_WeakRef-b077b91f.h>
#include <app/Uno.Int.h>
#include <app/Uno.WeakReference__Fuse_Resources_BundleFileImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType* Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___typeof()
{
    static Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___uType), "Uno.Collections.Dictionary2_Bucket<Uno.BundleFile,Uno.WeakReference<Fuse.Resources.BundleFileImageSourceImpl>>", sizeof(Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_, Key);
        type->StrongRefOffsets[1] = offsetof(Dictionary2_Bucket__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_, Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Key";
        type->StrongRefNames[1] = "Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
