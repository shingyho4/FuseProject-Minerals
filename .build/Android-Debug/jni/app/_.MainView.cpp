// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.MainView.h>
#include <app/_.MainView_Template.h>
#include <app/_.MainView_Template1.h>
#include <app/_.MainView_Template2.h>
#include <app/_.MainView_Template3.h>
#include <app/_.NavButton.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Net.Http.HttpMessageHandler.h>
#include <app/Experimental.Net.Http.HttpMethodStringConverter.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Primitives.Track.h>
#include <app/Fuse.Controls.ScrollViewer.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.StatusBarBackground.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Implementations.FallbackTextElement.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.ImageElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Internal.TextPosition.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.Resources.BundleFileImageSourceCache.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Color.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.DefaultSetup.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>
#include <app/Uno.UX.Template__NavButton.h>

namespace app {

MainView__uType* MainView__typeof()
{
    static MainView__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MainView__uType*)::uAllocClassType(sizeof(MainView__uType), "MainView", ::app::Fuse::App__typeof(), 1, 2);
        type->Implements[0] = ::app::Fuse::IResourceParent__typeof();

        type->InterfaceOffsets[0] = offsetof(MainView__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MainView, PhotoCol1);
        type->StrongRefOffsets[1] = offsetof(MainView, PhotoCol2);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "PhotoCol1";
        type->StrongRefNames[1] = "PhotoCol2";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MainView__InitializeUX(MainView* __this)
{
    ::app::MainView_Template* collection_123;
    ::app::MainView_Template1* collection_124;
    ::app::MainView_Template2* collection_125;
    ::app::MainView_Template3* collection_126;
    ::app::Fuse::Controls::DockPanel* temp = ::app::Fuse::Controls::DockPanel__New_2(NULL);
    ::app::Fuse::Controls::StatusBarBackground* temp1 = ::app::Fuse::Controls::StatusBarBackground__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp2 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::NavigationBar* temp3 = ::app::Fuse::Controls::NavigationBar__New_2(NULL);
    ::app::Fuse::Layouts::GridLayout* temp4 = ::app::Fuse::Layouts::GridLayout__New_1(NULL);
    ::app::Fuse::Style* temp5 = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::MainView_Template__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::MainView_Template* temp6 = collection_123;
    collection_124 = ::app::MainView_Template1__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template1*>(collection_124)->Cascade(false);
    collection_124->AffectSubtypes(true);
    ::app::MainView_Template1* temp7 = collection_124;
    ::app::NavButton* temp8 = ::app::NavButton__New_2(NULL);
    ::app::Fuse::Controls::Text* temp9 = ::app::Fuse::Controls::Text__New_1(NULL);
    ::app::NavButton* temp10 = ::app::NavButton__New_2(NULL);
    ::app::Fuse::Controls::Text* temp11 = ::app::Fuse::Controls::Text__New_1(NULL);
    ::app::NavButton* temp12 = ::app::NavButton__New_2(NULL);
    ::app::Fuse::Controls::Text* temp13 = ::app::Fuse::Controls::Text__New_1(NULL);
    ::app::NavButton* temp14 = ::app::NavButton__New_2(NULL);
    ::app::Fuse::Controls::Text* temp15 = ::app::Fuse::Controls::Text__New_1(NULL);
    ::app::Fuse::Controls::ScrollViewer* temp16 = ::app::Fuse::Controls::ScrollViewer__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp17 = ::app::Fuse::Controls::Grid__New_2(NULL);
    __this->PhotoCol1 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Style* temp18 = ::app::Fuse::Style__New_1(NULL);
    collection_125 = ::app::MainView_Template2__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template2*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::MainView_Template2* temp19 = collection_125;
    ::app::Fuse::Controls::Image* temp20 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp21 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp22 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp23 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp24 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp25 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp26 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp27 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp28 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp29 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp30 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp31 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp32 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp33 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp34 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp35 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp36 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp37 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp38 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp39 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp40 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp41 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp42 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp43 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp44 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp45 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp46 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp47 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp48 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp49 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp50 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp51 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp52 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp53 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp54 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp55 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp56 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp57 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp58 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp59 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp60 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp61 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp62 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp63 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp64 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp65 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp66 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp67 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp68 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp69 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->PhotoCol2 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Style* temp70 = ::app::Fuse::Style__New_1(NULL);
    collection_126 = ::app::MainView_Template3__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template3*>(collection_126)->Cascade(true);
    collection_126->AffectSubtypes(true);
    ::app::MainView_Template3* temp71 = collection_126;
    ::app::Fuse::Controls::Image* temp72 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp73 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp74 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp75 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp76 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp77 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp78 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp79 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp80 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp81 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp82 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp83 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp84 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp85 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp86 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp87 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp88 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp89 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp90 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp91 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp92 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp93 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp94 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp95 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp96 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp97 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp98 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp99 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp100 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp101 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp102 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp103 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp104 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp105 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp106 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp107 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp108 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp109 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp110 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp111 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp112 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp113 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp114 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp115 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp116 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp117 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp118 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp119 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp120 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp121 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->ClearColor(::app::Uno::Float4__New_2(NULL, 0.8901961f, 0.8901961f, 0.8901961f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::DockPanel*>(temp)->Children()), (::app::Fuse::Elements::Element*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)temp16);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp1, 2);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp2)->RowCount(1);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp2, 3);
    ::app::Fuse::Controls::Grid__SetRow(NULL, (::app::Fuse::Elements::Element*)temp2, 1);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp2->Children()), (::app::Fuse::Elements::Element*)temp3);
    ::uPtr< ::app::Fuse::Controls::NavigationBar*>(temp3)->Layout((::app::Fuse::Layouts::Layout*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Elements::Element*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Elements::Element*)temp10);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Elements::Element*)temp12);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Elements::Element*)temp14);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(temp3->Styles()), temp5);
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(temp4)->RowCount(1);
    temp4->ColumnCount(4);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp5)->Templates()), (::uObject*)temp6);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp5->Templates()), (::uObject*)temp7);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::NavButton*>(temp8)->Children()), (::app::Fuse::Elements::Element*)temp9);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp9)->Content(::uGetConstString("Home"));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::NavButton*>(temp10)->Children()), (::app::Fuse::Elements::Element*)temp11);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp11)->Content(::uGetConstString("People"));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::NavButton*>(temp12)->Children()), (::app::Fuse::Elements::Element*)temp13);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp13)->Content(::uGetConstString("Dict."));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::NavButton*>(temp14)->Children()), (::app::Fuse::Elements::Element*)temp15);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp15)->Content(::uGetConstString("Search"));
    ::uPtr< ::app::Fuse::Controls::ScrollViewer*>(temp16)->Content((::app::Fuse::Elements::Element*)temp17);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp17)->ColumnCount(2);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp17->Children()), (::app::Fuse::Elements::Element*)__this->PhotoCol1);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp17->Children()), (::app::Fuse::Elements::Element*)__this->PhotoCol2);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Width(100.0f);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->WidthUnit(1);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Margin(::app::Uno::Float4__New_2(NULL, 10.0f, 10.0f, 5.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp20);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp21);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp22);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp23);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp24);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp25);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp26);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp27);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp28);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp29);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp30);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp31);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp32);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp33);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp34);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp35);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp36);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp37);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp38);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp39);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp40);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp41);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp42);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp43);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp44);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp45);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp46);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp47);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp48);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp49);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp50);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp51);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp52);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp53);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp54);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp55);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp56);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp57);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp58);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp59);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp60);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp61);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp62);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp63);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp64);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp65);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp66);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp67);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp68);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Children()), (::app::Fuse::Elements::Element*)temp69);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol1)->Styles()), temp18);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp18)->Templates()), (::uObject*)temp19);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp20)->Width(100.0f);
    temp20->WidthUnit(1);
    temp20->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 0), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp21)->Width(100.0f);
    temp21->WidthUnit(1);
    temp21->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 1), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp22)->Width(100.0f);
    temp22->WidthUnit(1);
    temp22->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 2), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp23)->Width(100.0f);
    temp23->WidthUnit(1);
    temp23->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 3), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp24)->Width(100.0f);
    temp24->WidthUnit(1);
    temp24->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 4), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp25)->Width(100.0f);
    temp25->WidthUnit(1);
    temp25->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 5), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp26)->Width(100.0f);
    temp26->WidthUnit(1);
    temp26->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 6), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp27)->Width(100.0f);
    temp27->WidthUnit(1);
    temp27->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 7), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp28)->Width(100.0f);
    temp28->WidthUnit(1);
    temp28->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 8), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp29)->Width(100.0f);
    temp29->WidthUnit(1);
    temp29->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 9), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp30)->Width(100.0f);
    temp30->WidthUnit(1);
    temp30->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 10), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp31)->Width(100.0f);
    temp31->WidthUnit(1);
    temp31->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 11), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp32)->Width(100.0f);
    temp32->WidthUnit(1);
    temp32->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 12), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp33)->Width(100.0f);
    temp33->WidthUnit(1);
    temp33->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 13), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp34)->Width(100.0f);
    temp34->WidthUnit(1);
    temp34->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 14), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp35)->Width(100.0f);
    temp35->WidthUnit(1);
    temp35->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 15), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp36)->Width(100.0f);
    temp36->WidthUnit(1);
    temp36->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 16), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp37)->Width(100.0f);
    temp37->WidthUnit(1);
    temp37->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 17), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp38)->Width(100.0f);
    temp38->WidthUnit(1);
    temp38->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 18), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp39)->Width(100.0f);
    temp39->WidthUnit(1);
    temp39->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 19), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp40)->Width(100.0f);
    temp40->WidthUnit(1);
    temp40->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 20), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp41)->Width(100.0f);
    temp41->WidthUnit(1);
    temp41->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 21), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp42)->Width(100.0f);
    temp42->WidthUnit(1);
    temp42->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 22), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp43)->Width(100.0f);
    temp43->WidthUnit(1);
    temp43->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 23), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp44)->Width(100.0f);
    temp44->WidthUnit(1);
    temp44->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 24), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp45)->Width(100.0f);
    temp45->WidthUnit(1);
    temp45->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 25), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp46)->Width(100.0f);
    temp46->WidthUnit(1);
    temp46->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 26), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp47)->Width(100.0f);
    temp47->WidthUnit(1);
    temp47->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 27), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp48)->Width(100.0f);
    temp48->WidthUnit(1);
    temp48->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 28), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp49)->Width(100.0f);
    temp49->WidthUnit(1);
    temp49->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 29), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp50)->Width(100.0f);
    temp50->WidthUnit(1);
    temp50->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 30), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp51)->Width(100.0f);
    temp51->WidthUnit(1);
    temp51->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 31), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp52)->Width(100.0f);
    temp52->WidthUnit(1);
    temp52->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 32), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp53)->Width(100.0f);
    temp53->WidthUnit(1);
    temp53->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 33), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp54)->Width(100.0f);
    temp54->WidthUnit(1);
    temp54->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 34), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp55)->Width(100.0f);
    temp55->WidthUnit(1);
    temp55->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 35), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp56)->Width(100.0f);
    temp56->WidthUnit(1);
    temp56->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 36), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp57)->Width(100.0f);
    temp57->WidthUnit(1);
    temp57->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 37), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp58)->Width(100.0f);
    temp58->WidthUnit(1);
    temp58->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 38), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp59)->Width(100.0f);
    temp59->WidthUnit(1);
    temp59->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 39), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp60)->Width(100.0f);
    temp60->WidthUnit(1);
    temp60->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 40), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp61)->Width(100.0f);
    temp61->WidthUnit(1);
    temp61->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 41), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp62)->Width(100.0f);
    temp62->WidthUnit(1);
    temp62->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 42), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp63)->Width(100.0f);
    temp63->WidthUnit(1);
    temp63->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 43), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp64)->Width(100.0f);
    temp64->WidthUnit(1);
    temp64->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 44), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp65)->Width(100.0f);
    temp65->WidthUnit(1);
    temp65->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 45), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp66)->Width(100.0f);
    temp66->WidthUnit(1);
    temp66->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 46), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp67)->Width(100.0f);
    temp67->WidthUnit(1);
    temp67->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 47), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp68)->Width(100.0f);
    temp68->WidthUnit(1);
    temp68->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 48), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp69)->Width(100.0f);
    temp69->WidthUnit(1);
    temp69->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 49), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Width(100.0f);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->WidthUnit(1);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Margin(::app::Uno::Float4__New_2(NULL, 5.0f, 10.0f, 10.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp72);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp73);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp74);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp75);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp76);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp77);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp78);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp79);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp80);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp81);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp82);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp83);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp84);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp85);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp86);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp87);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp88);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp89);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp90);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp91);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp92);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp93);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp94);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp95);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp96);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp97);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp98);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp99);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp100);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp101);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp102);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp103);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp104);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp105);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp106);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp107);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp108);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp109);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp110);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp111);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp112);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp113);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp114);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp115);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp116);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp117);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp118);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp119);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp120);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Children()), (::app::Fuse::Elements::Element*)temp121);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::StackPanel*>(__this->PhotoCol2)->Styles()), temp70);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp70)->Templates()), (::uObject*)temp71);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp72)->Width(100.0f);
    temp72->WidthUnit(1);
    temp72->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 50), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp73)->Width(100.0f);
    temp73->WidthUnit(1);
    temp73->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 51), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp74)->Width(100.0f);
    temp74->WidthUnit(1);
    temp74->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 52), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp75)->Width(100.0f);
    temp75->WidthUnit(1);
    temp75->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 53), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp76)->Width(100.0f);
    temp76->WidthUnit(1);
    temp76->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 54), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp77)->Width(100.0f);
    temp77->WidthUnit(1);
    temp77->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 55), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp78)->Width(100.0f);
    temp78->WidthUnit(1);
    temp78->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 56), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp79)->Width(100.0f);
    temp79->WidthUnit(1);
    temp79->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 57), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp80)->Width(100.0f);
    temp80->WidthUnit(1);
    temp80->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 58), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp81)->Width(100.0f);
    temp81->WidthUnit(1);
    temp81->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 59), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp82)->Width(100.0f);
    temp82->WidthUnit(1);
    temp82->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 60), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp83)->Width(100.0f);
    temp83->WidthUnit(1);
    temp83->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 61), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp84)->Width(100.0f);
    temp84->WidthUnit(1);
    temp84->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 62), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp85)->Width(100.0f);
    temp85->WidthUnit(1);
    temp85->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 63), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp86)->Width(100.0f);
    temp86->WidthUnit(1);
    temp86->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 64), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp87)->Width(100.0f);
    temp87->WidthUnit(1);
    temp87->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 65), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp88)->Width(100.0f);
    temp88->WidthUnit(1);
    temp88->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 66), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp89)->Width(100.0f);
    temp89->WidthUnit(1);
    temp89->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 67), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp90)->Width(100.0f);
    temp90->WidthUnit(1);
    temp90->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 68), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp91)->Width(100.0f);
    temp91->WidthUnit(1);
    temp91->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 69), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp92)->Width(100.0f);
    temp92->WidthUnit(1);
    temp92->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 70), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp93)->Width(100.0f);
    temp93->WidthUnit(1);
    temp93->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 71), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp94)->Width(100.0f);
    temp94->WidthUnit(1);
    temp94->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 72), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp95)->Width(100.0f);
    temp95->WidthUnit(1);
    temp95->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 73), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp96)->Width(100.0f);
    temp96->WidthUnit(1);
    temp96->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 74), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp97)->Width(100.0f);
    temp97->WidthUnit(1);
    temp97->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 75), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp98)->Width(100.0f);
    temp98->WidthUnit(1);
    temp98->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 76), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp99)->Width(100.0f);
    temp99->WidthUnit(1);
    temp99->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 77), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp100)->Width(100.0f);
    temp100->WidthUnit(1);
    temp100->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 78), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp101)->Width(100.0f);
    temp101->WidthUnit(1);
    temp101->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 79), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp102)->Width(100.0f);
    temp102->WidthUnit(1);
    temp102->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 80), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp103)->Width(100.0f);
    temp103->WidthUnit(1);
    temp103->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 81), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp104)->Width(100.0f);
    temp104->WidthUnit(1);
    temp104->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 82), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp105)->Width(100.0f);
    temp105->WidthUnit(1);
    temp105->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 83), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp106)->Width(100.0f);
    temp106->WidthUnit(1);
    temp106->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 84), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp107)->Width(100.0f);
    temp107->WidthUnit(1);
    temp107->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 85), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp108)->Width(100.0f);
    temp108->WidthUnit(1);
    temp108->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 86), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp109)->Width(100.0f);
    temp109->WidthUnit(1);
    temp109->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 87), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp110)->Width(100.0f);
    temp110->WidthUnit(1);
    temp110->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 88), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp111)->Width(100.0f);
    temp111->WidthUnit(1);
    temp111->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 89), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp112)->Width(100.0f);
    temp112->WidthUnit(1);
    temp112->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 90), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp113)->Width(100.0f);
    temp113->WidthUnit(1);
    temp113->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 91), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp114)->Width(100.0f);
    temp114->WidthUnit(1);
    temp114->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 92), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp115)->Width(100.0f);
    temp115->WidthUnit(1);
    temp115->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 93), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp116)->Width(100.0f);
    temp116->WidthUnit(1);
    temp116->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 94), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp117)->Width(100.0f);
    temp117->WidthUnit(1);
    temp117->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 95), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp118)->Width(100.0f);
    temp118->WidthUnit(1);
    temp118->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 96), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp119)->Width(100.0f);
    temp119->WidthUnit(1);
    temp119->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 97), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp120)->Width(100.0f);
    temp120->WidthUnit(1);
    temp120->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 98), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp121)->Width(100.0f);
    temp121->WidthUnit(1);
    temp121->File(::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 99), ::app::Uno::BundleFile__typeof()));
    __this->Theme(::app::Fuse::BasicTheme::BasicTheme__get_Singleton(NULL));
    __this->RootNode((::app::Fuse::Node*)temp);
}

void MainView___InitTypes(::uStatic* __this)
{
    ::app::Uno::Diagnostics::Debug___TypeInit(NULL);
    ::app::Uno::Platform2::DefaultSetup___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::Internal::NumericFormatter___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl___TypeInit(NULL);
    ::app::Uno::CharPunctuationChecker___TypeInit(NULL);
    ::app::Uno::Color___TypeInit(NULL);
    ::app::Uno::EventArgs___TypeInit(NULL);
    ::app::Uno::String___TypeInit(NULL);
    ::app::Fuse::Input::Focus___TypeInit(NULL);
    ::app::Fuse::Input::Keyboard___TypeInit(NULL);
    ::app::Fuse::Input::Pointer___TypeInit(NULL);
    ::app::Fuse::Input::TextService___TypeInit(NULL);
    ::app::Fuse::Internal::Drawing::SolidRectangle___TypeInit(NULL);
    ::app::Fuse::Internal::BlenderMap___TypeInit(NULL);
    ::app::Fuse::Internal::TextPosition___TypeInit(NULL);
    ::app::Fuse::Resources::ResourceRegistry___TypeInit(NULL);
    ::app::Fuse::Resources::BundleFileImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Resources::DisposalManager___TypeInit(NULL);
    ::app::Fuse::Resources::HttpImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Animations::Mixer___TypeInit(NULL);
    ::app::Fuse::Animations::MasterTransform___TypeInit(NULL);
    ::app::Fuse::Drawing::BlendModeHelpers___TypeInit(NULL);
    ::app::Fuse::Drawing::Colors___TypeInit(NULL);
    ::app::Fuse::Drawing::Brushes___TypeInit(NULL);
    ::app::Fuse::Triggers::Actions::GiveFocus___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::Scale9Rectangle___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::ElementDraw___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::ImageElementDraw___TypeInit(NULL);
    ::app::Fuse::Elements::Implementations::FallbackTextElement___TypeInit_2(NULL);
    ::app::Fuse::Elements::Cache___TypeInit(NULL);
    ::app::Fuse::Elements::Element___TypeInit_1(NULL);
    ::app::Fuse::Entities::Designer::PreloadedResources___TypeInit(NULL);
    ::app::Fuse::Gestures::Internal::EdgeSwiper___TypeInit(NULL);
    ::app::Fuse::Gestures::Scroller___TypeInit(NULL);
    ::app::Fuse::Gestures::Clicker___TypeInit(NULL);
    ::app::Fuse::Navigation::DirectNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::EdgeNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::Navigation___TypeInit(NULL);
    ::app::Fuse::Navigation::SwipeNavigate___TypeInit(NULL);
    ::app::Fuse::Controls::Primitives::Track___TypeInit_3(NULL);
    ::app::Fuse::Controls::Control___TypeInit_2(NULL);
    ::app::Fuse::Controls::EdgeNavigator___TypeInit_3(NULL);
    ::app::Fuse::Controls::TextInput___TypeInit_3(NULL);
    ::app::Fuse::Layouts::DockLayout___TypeInit(NULL);
    ::app::Fuse::Layouts::GridLayout___TypeInit(NULL);
    ::app::Fuse::Layouts::Layouts___TypeInit(NULL);
    ::app::Fuse::BasicTheme::BasicTheme___TypeInit(NULL);
    ::app::Fuse::DrawContext___TypeInit(NULL);
    ::app::Fuse::Node___TypeInit(NULL);
    ::app::Fuse::Profiling___TypeInit(NULL);
    ::app::Fuse::Properties___TypeInit(NULL);
    ::app::Fuse::UpdateManager___TypeInit(NULL);
    ::app::Experimental::Net::Http::HttpMessageHandler___TypeInit(NULL);
    ::app::Experimental::Net::Http::HttpMethodStringConverter___TypeInit(NULL);
    ::app::Experimental::Http::HttpLoader___TypeInit(NULL);
}

void MainView___ObjInit_2(MainView* __this)
{
    MainView___InitTypes(NULL);
    ::app::Fuse::App___ObjInit_1(__this);
    __this->InitializeUX();
}

MainView* MainView__New_2(::uStatic* __this)
{
    MainView* inst = (::app::MainView*)::uAllocObject(sizeof(::app::MainView), ::app::MainView__typeof());
    inst->_ObjInit_2();
    return inst;
}

}
