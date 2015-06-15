// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Font.h>
#include <app/Uno.BundleFile.h>

namespace app {
namespace Fuse {

Font__uType* Font__typeof()
{
    static Font__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Font__uType*)::uAllocClassType(sizeof(Font__uType), "Fuse.Font", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Font, _file);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_file";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* Font__get_BundleFile(Font* __this)
{
    return __this->_file;
}

void Font___ObjInit(Font* __this, ::app::Uno::BundleFile* file)
{
    __this->_file = file;
}

Font* Font__New_1(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    Font* inst = (::app::Fuse::Font*)::uAllocObject(sizeof(::app::Fuse::Font), ::app::Fuse::Font__typeof());
    inst->_ObjInit(file);
    return inst;
}

}}
