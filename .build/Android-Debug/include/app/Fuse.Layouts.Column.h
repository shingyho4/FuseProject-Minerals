// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_COLUMN_H__
#define __APP_FUSE_LAYOUTS_COLUMN_H__

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct Column;

struct Column__uType : ::app::Fuse::Layouts::DefinitionBase__uType
{
};

Column__uType* Column__typeof();

int Column__get_WidthMetric(Column* __this);
void Column__set_WidthMetric(Column* __this, int value);
float Column__get_Width(Column* __this);
void Column__set_Width(Column* __this, float value);
float Column__get_ActualWidth(Column* __this);
void Column__set_ActualWidth(Column* __this, float value);
Column* Column__CloneDef(Column* __this);
void Column___ObjInit_1(Column* __this);
Column* Column__New_1(::uStatic* __this);

struct Column : ::app::Fuse::Layouts::DefinitionBase
{
    int _widthMetric;
    float _width;
    float _actualWidth;

    Column* CloneDef() { return Column__CloneDef(this); }
    void _ObjInit_1() { Column___ObjInit_1(this); }
    int WidthMetric() { return Column__get_WidthMetric(this); }
    void WidthMetric(int value) { Column__set_WidthMetric(this, value); }
    float Width() { return Column__get_Width(this); }
    void Width(float value) { Column__set_Width(this, value); }
    float ActualWidth() { return Column__get_ActualWidth(this); }
    void ActualWidth(float value) { Column__set_ActualWidth(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Layouts {

}}}


#endif
