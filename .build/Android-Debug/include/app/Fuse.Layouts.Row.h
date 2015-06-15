// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_ROW_H__
#define __APP_FUSE_LAYOUTS_ROW_H__

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct Row;

struct Row__uType : ::app::Fuse::Layouts::DefinitionBase__uType
{
};

Row__uType* Row__typeof();

int Row__get_HeightMetric(Row* __this);
void Row__set_HeightMetric(Row* __this, int value);
float Row__get_Height(Row* __this);
void Row__set_Height(Row* __this, float value);
float Row__get_ActualHeight(Row* __this);
void Row__set_ActualHeight(Row* __this, float value);
Row* Row__CloneDef(Row* __this);
void Row___ObjInit_1(Row* __this);
Row* Row__New_1(::uStatic* __this);

struct Row : ::app::Fuse::Layouts::DefinitionBase
{
    int _heightMetric;
    float _height;
    float _actualHeight;

    Row* CloneDef() { return Row__CloneDef(this); }
    void _ObjInit_1() { Row___ObjInit_1(this); }
    int HeightMetric() { return Row__get_HeightMetric(this); }
    void HeightMetric(int value) { Row__set_HeightMetric(this, value); }
    float Height() { return Row__get_Height(this); }
    void Height(float value) { Row__set_Height(this, value); }
    float ActualHeight() { return Row__get_ActualHeight(this); }
    void ActualHeight(float value) { Row__set_ActualHeight(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Layouts {

}}}


#endif
