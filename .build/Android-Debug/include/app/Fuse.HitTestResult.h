// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_HIT_TEST_RESULT_H__
#define __APP_FUSE_HIT_TEST_RESULT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct HitTestResult;

struct HitTestResult__uType : ::uClassType
{
};

HitTestResult__uType* HitTestResult__typeof();

bool HitTestResult__get_HasHitDistance(HitTestResult* __this);
void HitTestResult__set_HasHitDistance(HitTestResult* __this, bool value);
float HitTestResult__get_HitDistance(HitTestResult* __this);
void HitTestResult__set_HitDistance(HitTestResult* __this, float value);
::app::Fuse::Node* HitTestResult__get_HitObject(HitTestResult* __this);
void HitTestResult__set_HitObject(HitTestResult* __this, ::app::Fuse::Node* value);
void HitTestResult___ObjInit(HitTestResult* __this);
HitTestResult* HitTestResult__New_1(::uStatic* __this);

struct HitTestResult : ::uObject
{
    bool _HasHitDistance;
    float _HitDistance;
    ::uStrong< ::app::Fuse::Node*> _HitObject;

    void _ObjInit() { HitTestResult___ObjInit(this); }
    bool HasHitDistance() { return HitTestResult__get_HasHitDistance(this); }
    void HasHitDistance(bool value) { HitTestResult__set_HasHitDistance(this, value); }
    float HitDistance() { return HitTestResult__get_HitDistance(this); }
    void HitDistance(float value) { HitTestResult__set_HitDistance(this, value); }
    ::app::Fuse::Node* HitObject() { return HitTestResult__get_HitObject(this); }
    void HitObject(::app::Fuse::Node* value) { HitTestResult__set_HitObject(this, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {

}}


#endif
