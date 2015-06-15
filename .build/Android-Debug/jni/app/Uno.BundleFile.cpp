// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliPlatform.h>

namespace app {
namespace Uno {

BundleFile__uType* BundleFile__typeof()
{
    static BundleFile__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BundleFile__uType*)::uAllocClassType(sizeof(BundleFile__uType), "Uno.BundleFile", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(BundleFile, _Name);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Name";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* BundleFile__get_Name(BundleFile* __this)
{
    return __this->_Name;
}

void BundleFile__set_Name(BundleFile* __this, ::uString* value)
{
    __this->_Name = value;
}

::uArray* BundleFile__ReadAllBytes(BundleFile* __this)
{
    Xli::String filename = ::uStringToXliString(__this->_Name);
    
    Xli::PrintLine("Loading: " + filename);
    Xli::Out->GetStream()->Flush();
    
    Xli::Managed<Xli::DataAccessor> buffer = Xli::Bundle->OpenFileAsBuffer(filename);
    
    return ::uNewArray(::app::Uno::Byte__typeof(), buffer->GetSizeInBytes(), buffer->GetPtr());
}

void BundleFile___ObjInit(BundleFile* __this, ::uString* filename)
{
    __this->Name(filename);
}

BundleFile* BundleFile__New_1(::uStatic* __this, ::uString* filename)
{
    BundleFile* inst = (::app::Uno::BundleFile*)::uAllocObject(sizeof(::app::Uno::BundleFile), ::app::Uno::BundleFile__typeof());
    inst->_ObjInit(filename);
    return inst;
}

}}
