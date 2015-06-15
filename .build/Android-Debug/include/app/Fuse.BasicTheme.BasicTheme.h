// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_H__

#include <app/Fuse.Theme.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme;

extern ::uStaticStrong< ::app::Fuse::Theme*> BasicTheme___singleton;
extern ::uStaticStrong< ::uArray*> BasicTheme__ColorCodes;
extern ::uStaticStrong< ::uArray*> BasicTheme__Red;
extern ::uStaticStrong< ::uArray*> BasicTheme__Pink;
extern ::uStaticStrong< ::uArray*> BasicTheme__Purple;
extern ::uStaticStrong< ::uArray*> BasicTheme__DeepPurple;
extern ::uStaticStrong< ::uArray*> BasicTheme__Indigo;
extern ::uStaticStrong< ::uArray*> BasicTheme__Blue;
extern ::uStaticStrong< ::uArray*> BasicTheme__LightBlue;
extern ::uStaticStrong< ::uArray*> BasicTheme__Cyan;
extern ::uStaticStrong< ::uArray*> BasicTheme__Teal;
extern ::uStaticStrong< ::uArray*> BasicTheme__Green;
extern ::uStaticStrong< ::uArray*> BasicTheme__LightGreen;
extern ::uStaticStrong< ::uArray*> BasicTheme__Lime;
extern ::uStaticStrong< ::uArray*> BasicTheme__Yellow;
extern ::uStaticStrong< ::uArray*> BasicTheme__Amber;
extern ::uStaticStrong< ::uArray*> BasicTheme__Orange;
extern ::uStaticStrong< ::uArray*> BasicTheme__DeepOrange;
extern ::uStaticStrong< ::uArray*> BasicTheme__Brown;
extern ::uStaticStrong< ::uArray*> BasicTheme__Grey;
extern ::uStaticStrong< ::uArray*> BasicTheme__BlueGrey;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedBold;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedBoldItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedLight;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedLightItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedRegular;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoLight;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoLightItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoMedium;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoMediumItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoRegular;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoThin;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoThinItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBlack;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBlackItalic;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBold;
extern ::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBoldItalic;

struct BasicTheme__uType : ::app::Fuse::Theme__uType
{
};

BasicTheme__uType* BasicTheme__typeof();

::app::Fuse::Theme* BasicTheme__get_Singleton(::uStatic* __this);
int BasicTheme__get_ColorScheme(BasicTheme* __this);
void BasicTheme__set_ColorScheme(BasicTheme* __this, int value);
void BasicTheme__SetColorScheme(BasicTheme* __this);
void BasicTheme__UpdateColorCodes(BasicTheme* __this, ::uArray* hexValues);
void BasicTheme__InitializeUX(BasicTheme* __this);
void BasicTheme___TypeInit(::uStatic* __this);
void BasicTheme___ObjInit_2(BasicTheme* __this);
BasicTheme* BasicTheme__New_3(::uStatic* __this);

struct BasicTheme : ::app::Fuse::Theme
{
    int _colorScheme;

    void SetColorScheme() { BasicTheme__SetColorScheme(this); }
    void UpdateColorCodes(::uArray* hexValues) { BasicTheme__UpdateColorCodes(this, hexValues); }
    void InitializeUX() { BasicTheme__InitializeUX(this); }
    void _ObjInit_2() { BasicTheme___ObjInit_2(this); }
    int ColorScheme() { return BasicTheme__get_ColorScheme(this); }
    void ColorScheme(int value) { BasicTheme__set_ColorScheme(this, value); }
};

}}}


#endif
