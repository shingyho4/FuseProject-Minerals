// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_LINE_CACHE_TRANSFORM_H__
#define __APP_FUSE_INTERNAL_LINE_CACHE_TRANSFORM_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

::uInterfaceType* LineCacheTransform__typeof();

struct LineCacheTransform
{
    ::uString*(*__fp_Transform)(void*, ::uString*);

    static ::uString* Transform(::uObject* __this, ::uString* text) { return ((LineCacheTransform*)uGetInterfacePtr(__this, LineCacheTransform__typeof()))->__fp_Transform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), text); }
};

}}}


#endif
