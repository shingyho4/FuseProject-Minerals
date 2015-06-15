// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_STAR_H__
#define __APP_FUSE_SHAPES_STAR_H__

#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Star;

struct Star__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Star__uType* Star__typeof();

::app::Uno::Float2 Star__get_Offset_1(Star* __this);
float Star__get_Radius(Star* __this);
float Star__get_Ratio(Star* __this);
void Star__set_Ratio(Star* __this, float value);
float Star__get_RoundRatio(Star* __this);
void Star__set_RoundRatio(Star* __this, float value);
float Star__get_SpokeRadius(Star* __this);
float Star__get_RotationDegrees(Star* __this);
void Star__set_RotationDegrees(Star* __this, float value);
float Star__get_RotationRadians(Star* __this);
void Star__UpdatePath(Star* __this);

struct Star : ::app::Fuse::Shapes::Shape
{
    int _points;
    float _ratio;
    float _roundRatio;
    int _cachedPoints;
    float _cachedRadius;
    float _cachedSpokeRadius;
    float _cachedDegrees;
    float _cachedRoundRatio;
    float _degrees;

    ::app::Uno::Float2 Offset_1();
    float Radius() { return Star__get_Radius(this); }
    float Ratio() { return Star__get_Ratio(this); }
    void Ratio(float value) { Star__set_Ratio(this, value); }
    float RoundRatio() { return Star__get_RoundRatio(this); }
    void RoundRatio(float value) { Star__set_RoundRatio(this, value); }
    float SpokeRadius() { return Star__get_SpokeRadius(this); }
    float RotationDegrees() { return Star__get_RotationDegrees(this); }
    void RotationDegrees(float value) { Star__set_RotationDegrees(this, value); }
    float RotationRadians() { return Star__get_RotationRadians(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 Star::Offset_1() { return Star__get_Offset_1(this); }

}}}


#endif
