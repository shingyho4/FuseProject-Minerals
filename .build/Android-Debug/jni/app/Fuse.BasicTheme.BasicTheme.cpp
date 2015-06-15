// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template1.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template2.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template3.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template4.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template5.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Style.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Color.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.Template__Fuse_Controls_BackButton.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>
#include <app/Uno.UX.Template__Fuse_Controls_NavigationBar.h>
#include <app/Uno.UX.Template__Fuse_Controls_Slider.h>
#include <app/Uno.UX.Template__Fuse_Controls_Switch.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

::uStaticStrong< ::app::Fuse::Theme*> BasicTheme___singleton;
::uStaticStrong< ::uArray*> BasicTheme__ColorCodes;
::uStaticStrong< ::uArray*> BasicTheme__Red;
::uStaticStrong< ::uArray*> BasicTheme__Pink;
::uStaticStrong< ::uArray*> BasicTheme__Purple;
::uStaticStrong< ::uArray*> BasicTheme__DeepPurple;
::uStaticStrong< ::uArray*> BasicTheme__Indigo;
::uStaticStrong< ::uArray*> BasicTheme__Blue;
::uStaticStrong< ::uArray*> BasicTheme__LightBlue;
::uStaticStrong< ::uArray*> BasicTheme__Cyan;
::uStaticStrong< ::uArray*> BasicTheme__Teal;
::uStaticStrong< ::uArray*> BasicTheme__Green;
::uStaticStrong< ::uArray*> BasicTheme__LightGreen;
::uStaticStrong< ::uArray*> BasicTheme__Lime;
::uStaticStrong< ::uArray*> BasicTheme__Yellow;
::uStaticStrong< ::uArray*> BasicTheme__Amber;
::uStaticStrong< ::uArray*> BasicTheme__Orange;
::uStaticStrong< ::uArray*> BasicTheme__DeepOrange;
::uStaticStrong< ::uArray*> BasicTheme__Brown;
::uStaticStrong< ::uArray*> BasicTheme__Grey;
::uStaticStrong< ::uArray*> BasicTheme__BlueGrey;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedBold;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedBoldItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedLight;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedLightItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoCondensedRegular;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoLight;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoLightItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoMedium;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoMediumItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoRegular;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoThin;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoThinItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBlack;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBlackItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBold;
::uStaticStrong< ::app::Fuse::Font*> BasicTheme__RobotoBoldItalic;

BasicTheme__uType* BasicTheme__typeof()
{
    static BasicTheme__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme__uType*)::uAllocClassType(sizeof(BasicTheme__uType), "Fuse.BasicTheme.BasicTheme", ::app::Fuse::Theme__typeof(), 1);
        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Theme* BasicTheme__get_Singleton(::uStatic* __this)
{
    if (BasicTheme___singleton == NULL)
    {
        BasicTheme___singleton = (::app::Fuse::Theme*)BasicTheme__New_3(NULL);
    }

    return BasicTheme___singleton;
}

int BasicTheme__get_ColorScheme(BasicTheme* __this)
{
    return __this->_colorScheme;
}

void BasicTheme__set_ColorScheme(BasicTheme* __this, int value)
{
    if (__this->_colorScheme != value)
    {
        __this->_colorScheme = value;
        __this->SetColorScheme();
    }
}

void BasicTheme__SetColorScheme(BasicTheme* __this)
{
    switch (__this->ColorScheme())
    {
        case 0:
        {
            __this->UpdateColorCodes(BasicTheme__Amber);
            break;
        }
        case 2:
        {
            __this->UpdateColorCodes(BasicTheme__BlueGrey);
            break;
        }
        case 3:
        {
            __this->UpdateColorCodes(BasicTheme__Blue);
            break;
        }
        case 4:
        {
            __this->UpdateColorCodes(BasicTheme__Brown);
            break;
        }
        case 5:
        {
            __this->UpdateColorCodes(BasicTheme__Cyan);
            break;
        }
        case 6:
        {
            __this->UpdateColorCodes(BasicTheme__DeepOrange);
            break;
        }
        case 7:
        {
            __this->UpdateColorCodes(BasicTheme__DeepPurple);
            break;
        }
        case 8:
        {
            __this->UpdateColorCodes(BasicTheme__Green);
            break;
        }
        case 9:
        {
            __this->UpdateColorCodes(BasicTheme__Grey);
            break;
        }
        case 10:
        {
            __this->UpdateColorCodes(BasicTheme__Indigo);
            break;
        }
        case 1:
        {
            __this->UpdateColorCodes(BasicTheme__LightBlue);
            break;
        }
        case 11:
        {
            __this->UpdateColorCodes(BasicTheme__LightGreen);
            break;
        }
        case 12:
        {
            __this->UpdateColorCodes(BasicTheme__Lime);
            break;
        }
        case 13:
        {
            __this->UpdateColorCodes(BasicTheme__Orange);
            break;
        }
        case 14:
        {
            __this->UpdateColorCodes(BasicTheme__Pink);
            break;
        }
        case 15:
        {
            __this->UpdateColorCodes(BasicTheme__Purple);
            break;
        }
        case 16:
        {
            __this->UpdateColorCodes(BasicTheme__Red);
            break;
        }
        case 17:
        {
            __this->UpdateColorCodes(BasicTheme__Teal);
            break;
        }
        case 18:
        {
            __this->UpdateColorCodes(BasicTheme__Yellow);
            break;
        }
    }
}

void BasicTheme__UpdateColorCodes(BasicTheme* __this, ::uArray* hexValues)
{
    if (::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->Resources())) > 0)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(BasicTheme__ColorCodes)->Length(); i++)
        {
            for (int j = ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->Resources())) - 1; j != 0; j--)
            {
                if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(__this->Resources()), j))->Key(), ::uPtr< ::uArray*>(BasicTheme__ColorCodes)->Item< ::uString*>(i)))
                {
                    ::app::Uno::Collections::IList__Uno_UX_Resource::RemoveAt(::uPtr< ::uObject*>(__this->Resources()), j);
                }
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(BasicTheme__ColorCodes)->Length(); i++)
    {
        ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), ::app::Uno::UX::Resource__New_1(NULL, ::uPtr< ::uArray*>(BasicTheme__ColorCodes)->Item< ::uString*>(i), ::uBox(::app::Uno::Float4__typeof(), ::app::Uno::Color__FromHex(NULL, ::uPtr< ::uArray*>(hexValues)->Item< ::uString*>(i)))));
    }
}

void BasicTheme__InitializeUX(BasicTheme* __this)
{
    ::app::Fuse::BasicTheme::BasicTheme_Template* collection_123;
    ::app::Fuse::BasicTheme::BasicTheme_Template1* collection_124;
    ::app::Fuse::BasicTheme::BasicTheme_Template2* collection_125;
    ::app::Fuse::BasicTheme::BasicTheme_Template3* collection_126;
    ::app::Fuse::BasicTheme::BasicTheme_Template4* collection_127;
    ::app::Fuse::BasicTheme::BasicTheme_Template5* collection_128;
    collection_123 = ::app::Fuse::BasicTheme::BasicTheme_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template*>(collection_123)->Cascade(false);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template* temp = collection_123;
    collection_124 = ::app::Fuse::BasicTheme::BasicTheme_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template1*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template1* temp1 = collection_124;
    collection_125 = ::app::Fuse::BasicTheme::BasicTheme_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template2*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template2* temp2 = collection_125;
    collection_126 = ::app::Fuse::BasicTheme::BasicTheme_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template3*>(collection_126)->Cascade(true);
    collection_126->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template3* temp3 = collection_126;
    collection_127 = ::app::Fuse::BasicTheme::BasicTheme_Template4__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template4*>(collection_127)->Cascade(true);
    collection_127->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template4* temp4 = collection_127;
    collection_128 = ::app::Fuse::BasicTheme::BasicTheme_Template5__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicTheme_Template5*>(collection_128)->Cascade(true);
    collection_128->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicTheme_Template5* temp5 = collection_128;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp4);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp5);
}

void BasicTheme___TypeInit(::uStatic* __this)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    ::uArray* array_135;
    ::uArray* array_136;
    ::uArray* array_137;
    ::uArray* array_138;
    ::uArray* array_139;
    ::uArray* array_140;
    ::uArray* array_141;
    ::uArray* array_142;
    ::uArray* array_143;
    ::uArray* array_144;
    ::uArray* array_145;
    ::uArray* array_146;
    ::uArray* array_147;
    ::uArray* array_148;
    BasicTheme__ColorCodes = (array_129 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(0) = ::uGetConstString("C50"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(1) = ::uGetConstString("C100"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(2) = ::uGetConstString("C200"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(3) = ::uGetConstString("C300"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(4) = ::uGetConstString("C400"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(5) = ::uGetConstString("C500"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(6) = ::uGetConstString("C600"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(7) = ::uGetConstString("C700"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(8) = ::uGetConstString("C800"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(9) = ::uGetConstString("C900"), array_129);
    BasicTheme__Red = (array_130 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFEBEE"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFCDD2"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(2) = ::uGetConstString("#EF9A9A"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(3) = ::uGetConstString("#E57373"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(4) = ::uGetConstString("#EF5350"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(5) = ::uGetConstString("#F44336"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(6) = ::uGetConstString("#E53935"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(7) = ::uGetConstString("#D32F2F"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(8) = ::uGetConstString("#C62828"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(9) = ::uGetConstString("#B71C1C"), array_130);
    BasicTheme__Pink = (array_131 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FCE4EC"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F8BBD0"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(2) = ::uGetConstString("#F48FB1"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(3) = ::uGetConstString("#F06292"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(4) = ::uGetConstString("#EC407A"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(5) = ::uGetConstString("#E91E63"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(6) = ::uGetConstString("#D81B60"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(7) = ::uGetConstString("#C2185B"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(8) = ::uGetConstString("#AD1457"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(9) = ::uGetConstString("#880E4F"), array_131);
    BasicTheme__Purple = (array_132 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F3E5F5"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(1) = ::uGetConstString("#E1BEE7"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(2) = ::uGetConstString("#CE93D8"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(3) = ::uGetConstString("#BA68C8"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(4) = ::uGetConstString("#AB47BC"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(5) = ::uGetConstString("#9C27B0"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(6) = ::uGetConstString("#8E24AA"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(7) = ::uGetConstString("#7B1FA2"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(8) = ::uGetConstString("#6A1B9A"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(9) = ::uGetConstString("#4A148C"), array_132);
    BasicTheme__DeepPurple = (array_133 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(0) = ::uGetConstString("#EDE7F6"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(1) = ::uGetConstString("#D1C4E9"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(2) = ::uGetConstString("#B39DDB"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(3) = ::uGetConstString("#9575CD"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(4) = ::uGetConstString("#7E57C2"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(5) = ::uGetConstString("#673AB7"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(6) = ::uGetConstString("#5E35B1"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(7) = ::uGetConstString("#512DA8"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(8) = ::uGetConstString("#4527A0"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(9) = ::uGetConstString("#311B92"), array_133);
    BasicTheme__Indigo = (array_134 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E8EAF6"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(1) = ::uGetConstString("#C5CAE9"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(2) = ::uGetConstString("#9FA8DA"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(3) = ::uGetConstString("#7986CB"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(4) = ::uGetConstString("#5C6BC0"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(5) = ::uGetConstString("#3F51B5"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(6) = ::uGetConstString("#3949AB"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(7) = ::uGetConstString("#303F9F"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(8) = ::uGetConstString("#283593"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(9) = ::uGetConstString("#1A237E"), array_134);
    BasicTheme__Blue = (array_135 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E3F2FD"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(1) = ::uGetConstString("#BBDEFB"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(2) = ::uGetConstString("#90CAF9"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(3) = ::uGetConstString("#64B5F6"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(4) = ::uGetConstString("#42A5F5"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(5) = ::uGetConstString("#2196F3"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(6) = ::uGetConstString("#1E88E5"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(7) = ::uGetConstString("#1976D2"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(8) = ::uGetConstString("#1565C0"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(9) = ::uGetConstString("#0D47A1"), array_135);
    BasicTheme__LightBlue = (array_136 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E1F5FE"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B3E5FC"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(2) = ::uGetConstString("#81D4FA"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4FC3F7"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(4) = ::uGetConstString("#29B6F6"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(5) = ::uGetConstString("#03A9F4"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(6) = ::uGetConstString("#039BE5"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(7) = ::uGetConstString("#0288D1"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(8) = ::uGetConstString("#0277BD"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(9) = ::uGetConstString("#01579B"), array_136);
    BasicTheme__Cyan = (array_137 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E0F7FA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B2EBF2"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(2) = ::uGetConstString("#80DEEA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4DD0E1"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(4) = ::uGetConstString("#26C6DA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(5) = ::uGetConstString("#00BCD4"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(6) = ::uGetConstString("#00ACC1"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(7) = ::uGetConstString("#0097A7"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(8) = ::uGetConstString("#00838F"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(9) = ::uGetConstString("#006064"), array_137);
    BasicTheme__Teal = (array_138 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E0F2F1"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B2DFDB"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(2) = ::uGetConstString("#80CBC4"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4DB6AC"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(4) = ::uGetConstString("#26A69A"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(5) = ::uGetConstString("#009688"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(6) = ::uGetConstString("#00897B"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(7) = ::uGetConstString("#00796B"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(8) = ::uGetConstString("#00695C"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(9) = ::uGetConstString("#004D40"), array_138);
    BasicTheme__Green = (array_139 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E8F5E9"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(1) = ::uGetConstString("#C8E6C9"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(2) = ::uGetConstString("#A5D6A7"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(3) = ::uGetConstString("#81C784"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(4) = ::uGetConstString("#66BB6A"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(5) = ::uGetConstString("#4CAF50"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(6) = ::uGetConstString("#43A047"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(7) = ::uGetConstString("#388E3C"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(8) = ::uGetConstString("#2E7D32"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(9) = ::uGetConstString("#1B5E20"), array_139);
    BasicTheme__LightGreen = (array_140 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F1F8E9"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(1) = ::uGetConstString("#DCEDC8"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(2) = ::uGetConstString("#C5E1A5"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(3) = ::uGetConstString("#AED581"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(4) = ::uGetConstString("#9CCC65"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(5) = ::uGetConstString("#8BC34A"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(6) = ::uGetConstString("#7CB342"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(7) = ::uGetConstString("#689F38"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(8) = ::uGetConstString("#558B2F"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(9) = ::uGetConstString("#33691E"), array_140);
    BasicTheme__Lime = (array_141 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F9FBE7"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F0F4C3"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(2) = ::uGetConstString("#E6EE9C"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(3) = ::uGetConstString("#DCE775"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(4) = ::uGetConstString("#D4E157"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(5) = ::uGetConstString("#CDDC39"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(6) = ::uGetConstString("#C0CA33"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(7) = ::uGetConstString("#AFB42B"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(8) = ::uGetConstString("#9E9D24"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(9) = ::uGetConstString("#827717"), array_141);
    BasicTheme__Yellow = (array_142 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFFDE7"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFF9C4"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFF59D"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFF176"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFEE58"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FFEB3B"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FDD835"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(7) = ::uGetConstString("#FBC02D"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(8) = ::uGetConstString("#F9A825"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(9) = ::uGetConstString("#F57F17"), array_142);
    BasicTheme__Amber = (array_143 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFF8E1"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFECB3"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFE082"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFD54F"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFCA28"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FFC107"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FFB300"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(7) = ::uGetConstString("#FFA000"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(8) = ::uGetConstString("#FF8F00"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(9) = ::uGetConstString("#FF6F00"), array_143);
    BasicTheme__Orange = (array_144 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFF3E0"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFE0B2"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFCC80"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFB74D"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFA726"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FF9800"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FB8C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(7) = ::uGetConstString("#F57C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(8) = ::uGetConstString("#EF6C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(9) = ::uGetConstString("#E65100"), array_144);
    BasicTheme__DeepOrange = (array_145 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FBE9E7"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFCCBC"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFAB91"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FF8A65"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FF7043"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FF5722"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(6) = ::uGetConstString("#F4511E"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(7) = ::uGetConstString("#E64A19"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(8) = ::uGetConstString("#D84315"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(9) = ::uGetConstString("#BF360C"), array_145);
    BasicTheme__Brown = (array_146 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(0) = ::uGetConstString("#EFEBE9"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(1) = ::uGetConstString("#D7CCC8"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(2) = ::uGetConstString("#BCAAA4"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(3) = ::uGetConstString("#A1887F"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(4) = ::uGetConstString("#8D6E63"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(5) = ::uGetConstString("#795548"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(6) = ::uGetConstString("#6D4C41"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(7) = ::uGetConstString("#5D4037"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(8) = ::uGetConstString("#4E342E"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(9) = ::uGetConstString("#3E2723"), array_146);
    BasicTheme__Grey = (array_147 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FAFAFA"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F5F5F5"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(2) = ::uGetConstString("#EEEEEE"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(3) = ::uGetConstString("#E0E0E0"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(4) = ::uGetConstString("#BDBDBD"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(5) = ::uGetConstString("#9E9E9E"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(6) = ::uGetConstString("#757575"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(7) = ::uGetConstString("#616161"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(8) = ::uGetConstString("#424242"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(9) = ::uGetConstString("#212121"), array_147);
    BasicTheme__BlueGrey = (array_148 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(0) = ::uGetConstString("#ECEFF1"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(1) = ::uGetConstString("#CFD8DC"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(2) = ::uGetConstString("#B0BEC5"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(3) = ::uGetConstString("#90A4AE"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(4) = ::uGetConstString("#78909C"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(5) = ::uGetConstString("#607D8B"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(6) = ::uGetConstString("#546E7A"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(7) = ::uGetConstString("#455A64"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(8) = ::uGetConstString("#37474F"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(9) = ::uGetConstString("#263238"), array_148);
    BasicTheme__RobotoCondensedBold = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 101), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoCondensedBoldItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 102), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoCondensedItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 103), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoCondensedLight = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 104), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoCondensedLightItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 105), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoCondensedRegular = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 106), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 107), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoLight = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 108), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoLightItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 109), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoMedium = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 110), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoMediumItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 111), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoRegular = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 112), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoThin = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 113), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoThinItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 114), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoBlack = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 115), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoBlackItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 116), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoBold = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 117), ::app::Uno::BundleFile__typeof()));
    BasicTheme__RobotoBoldItalic = ::app::Fuse::Font__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 118), ::app::Uno::BundleFile__typeof()));
}

void BasicTheme___ObjInit_2(BasicTheme* __this)
{
    ::app::Fuse::Theme___ObjInit_1(__this);
    __this->SetColorScheme();
    __this->InitializeUX();
}

BasicTheme* BasicTheme__New_3(::uStatic* __this)
{
    BasicTheme* inst = (::app::Fuse::BasicTheme::BasicTheme*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme), ::app::Fuse::BasicTheme::BasicTheme__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
