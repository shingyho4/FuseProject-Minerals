// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_SOURCE_DISPOSABLE_H__
#define __APP_FUSE_RESOURCES_LOADING_IMAGE_SOURCE_SOURCE_DISPOSABLE_H__

#include <app/Fuse.Resources.IAutoDisposable.h>
#include <app/Fuse.Resources.PolicyAutoDisposable.h>
#include <app/Uno.IDisposable.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct LoadingImageSource; } } }

namespace app {
namespace Fuse {
namespace Resources {

struct LoadingImageSource_SourceDisposable;

struct LoadingImageSource_SourceDisposable__uType : ::app::Fuse::Resources::PolicyAutoDisposable__uType
{
};

LoadingImageSource_SourceDisposable__uType* LoadingImageSource_SourceDisposable__typeof();

bool LoadingImageSource_SourceDisposable__get_ShouldDispose(LoadingImageSource_SourceDisposable* __this);
void LoadingImageSource_SourceDisposable__Dispose(LoadingImageSource_SourceDisposable* __this);
void LoadingImageSource_SourceDisposable___ObjInit_1(LoadingImageSource_SourceDisposable* __this);
LoadingImageSource_SourceDisposable* LoadingImageSource_SourceDisposable__New_1(::uStatic* __this);

struct LoadingImageSource_SourceDisposable : ::app::Fuse::Resources::PolicyAutoDisposable
{
    ::uStrong< ::app::Fuse::Resources::LoadingImageSource*> _source;

    void _ObjInit_1() { LoadingImageSource_SourceDisposable___ObjInit_1(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
