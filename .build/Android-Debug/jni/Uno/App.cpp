// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\App.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno/Uno.h>
#include <app/_.MainView.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Application.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Time.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.DefaultSetup.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.DefaultTextRendererImpl.h>
#include <app/Fuse.Internal.TextPosition.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Resources.BundleFileImageSourceCache.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Entities.MeshBatchingEngine.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Shapes.GeometryCache.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Experimental.Http.BinaryLoader.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.ImageElementDraw.h>
#include <app/Fuse.Elements.Implementations.FallbackTextElement.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Controls.Primitives.Track.h>
#include <app/Experimental.Net.Http.HttpMethodStringConverter.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Experimental.Net.Http.Implementation.HttpRequestCallbacks.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>

void uStartApp()
{
    ::uArray* array_127;
    ::uArray* array_128;
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
    ::uArray* array_149;
    ::uArray* array_150;
    ::uArray* array_151;
    ::uArray* array_152;
    ::uArray* array_153;
    ::uArray* array_154;
    ::uArray* array_155;
    ::uArray* array_156;
    ::uArray* array_157;
    ::uArray* array_158;
    ::uArray* array_159;
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Init(NULL, 337);
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 0, ::uGetConstString("01-53f77a62.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 1, ::uGetConstString("02-53f796e5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 2, ::uGetConstString("03-53f792e4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 3, ::uGetConstString("04-53f76d67.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 4, ::uGetConstString("05-53f76966.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 5, ::uGetConstString("06-53f785e9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 6, ::uGetConstString("07-53f781e8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 7, ::uGetConstString("08-53f79e5b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 8, ::uGetConstString("09-53f79a5a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 9, ::uGetConstString("10-4f2275c8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 10, ::uGetConstString("11-4f2271c7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 11, ::uGetConstString("12-4f228e4a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 12, ::uGetConstString("13-4f228a49.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 13, ::uGetConstString("14-4f2264cc.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 14, ::uGetConstString("15-4f2260cb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 15, ::uGetConstString("16-4f227d4e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 16, ::uGetConstString("17-4f22794d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 17, ::uGetConstString("18-4f2295c0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 18, ::uGetConstString("19-4f2291bf.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 19, ::uGetConstString("20-5da18f99.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 20, ::uGetConstString("21-5da18b98.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 21, ::uGetConstString("22-5da1a81b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 22, ::uGetConstString("23-5da1a41a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 23, ::uGetConstString("24-5da17e9d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 24, ::uGetConstString("25-5da17a9c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 25, ::uGetConstString("101-46206d8f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 26, ::uGetConstString("27-5da1931e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 27, ::uGetConstString("28-5da1af91.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 28, ::uGetConstString("29-5da1ab90.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 29, ::uGetConstString("30-58cc86fe.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 30, ::uGetConstString("31-58cc82fd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 31, ::uGetConstString("32-58cc9f80.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 32, ::uGetConstString("33-58cc9b7f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 33, ::uGetConstString("34-58cc7602.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 34, ::uGetConstString("35-58cc7201.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 35, ::uGetConstString("36-58cc8e84.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 36, ::uGetConstString("37-58cc8a83.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 37, ::uGetConstString("38-58cca6f6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 38, ::uGetConstString("39-58cca2f5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 39, ::uGetConstString("40-40a35bf7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 40, ::uGetConstString("41-40a357f6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 41, ::uGetConstString("42-40a37479.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 42, ::uGetConstString("43-40a37078.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 43, ::uGetConstString("44-40a34afb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 44, ::uGetConstString("45-40a346fa.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 45, ::uGetConstString("46-40a3637d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 46, ::uGetConstString("47-40a35f7c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 47, ::uGetConstString("48-40a37bef.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 48, ::uGetConstString("49-40a377ee.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 49, ::uGetConstString("50-3bce535c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 50, ::uGetConstString("111-46206990.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 51, ::uGetConstString("112-3aa28b75.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 52, ::uGetConstString("113-fa28aada.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 53, ::uGetConstString("114-1abac2bf.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 54, ::uGetConstString("115-da40e224.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 55, ::uGetConstString("117-8e49236e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 56, ::uGetConstString("118-5ff20553.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 57, ::uGetConstString("119-1f7824b8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 58, ::uGetConstString("120-869a5628.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 59, ::uGetConstString("121-4620758d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 60, ::uGetConstString("122-3aa29772.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 61, ::uGetConstString("123-fa28b6d7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 62, ::uGetConstString("125-da40ee21.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 63, ::uGetConstString("126-cec31006.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 64, ::uGetConstString("127-8e492f6b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 65, ::uGetConstString("128-5ff21150.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 66, ::uGetConstString("129-1f7830b5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 67, ::uGetConstString("130-869a5229.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 68, ::uGetConstString("131-4620718e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 69, ::uGetConstString("132-3aa29373.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 70, ::uGetConstString("133-fa28b2d8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 71, ::uGetConstString("134-1abacabd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 72, ::uGetConstString("135-da40ea22.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 73, ::uGetConstString("136-cec30c07.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 74, ::uGetConstString("137-8e492b6c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 75, ::uGetConstString("138-5ff20d51.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 76, ::uGetConstString("139-1f782cb6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 77, ::uGetConstString("140-869a3e2e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 78, ::uGetConstString("141-46205d93.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 79, ::uGetConstString("142-3aa27f78.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 80, ::uGetConstString("143-fa289edd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 81, ::uGetConstString("144-1abab6c2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 82, ::uGetConstString("145-da40d627.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 83, ::uGetConstString("146-cec2f80c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 84, ::uGetConstString("147-8e491771.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 85, ::uGetConstString("148-5ff1f956.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 86, ::uGetConstString("149-1f7818bb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 87, ::uGetConstString("150-869a3a2f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 88, ::uGetConstString("152-3aa27b79.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 89, ::uGetConstString("153-fa289ade.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 90, ::uGetConstString("154-1abab2c3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 91, ::uGetConstString("156-cec2f40d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 92, ::uGetConstString("157-8e491372.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 93, ::uGetConstString("158-5ff1f557.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 94, ::uGetConstString("159-1f7814bc.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 95, ::uGetConstString("160-869a462c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 96, ::uGetConstString("161-46206591.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 97, ::uGetConstString("162-3aa28776.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 98, ::uGetConstString("163-fa28a6db.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 99, ::uGetConstString("165-da40de25.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 100, ::uGetConstString("166-cec3000a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 101, ::uGetConstString("167-8e491f6f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 102, ::uGetConstString("168-5ff20154.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 103, ::uGetConstString("169-1f7820b9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 104, ::uGetConstString("170-869a422d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 105, ::uGetConstString("171-46206192.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 106, ::uGetConstString("172-3aa28377.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 107, ::uGetConstString("173-fa28a2dc.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 108, ::uGetConstString("174-1ababac1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 109, ::uGetConstString("175-da40da26.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 110, ::uGetConstString("176-cec2fc0b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 111, ::uGetConstString("177-8e491b70.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 112, ::uGetConstString("178-5ff1fd55.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 113, ::uGetConstString("179-1f781cba.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 114, ::uGetConstString("180-869a6e22.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 115, ::uGetConstString("182-3aa2af6c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 116, ::uGetConstString("183-fa28ced1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 117, ::uGetConstString("184-1abae6b6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 118, ::uGetConstString("185-da41061b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 119, ::uGetConstString("186-cec32800.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 120, ::uGetConstString("187-8e494765.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 121, ::uGetConstString("188-5ff2294a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 122, ::uGetConstString("189-1f7848af.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 123, ::uGetConstString("190-869a6a23.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 124, ::uGetConstString("191-46208988.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 125, ::uGetConstString("192-3aa2ab6d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 126, ::uGetConstString("194-1abae2b7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 127, ::uGetConstString("195-da41021c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 128, ::uGetConstString("196-cec32401.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 129, ::uGetConstString("197-8e494366.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 130, ::uGetConstString("198-5ff2254b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 131, ::uGetConstString("199-1f7844b0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 132, ::uGetConstString("200-cc7474b9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 133, ::uGetConstString("201-76e65a54.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 134, ::uGetConstString("203-c2de190a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 135, ::uGetConstString("204-6094ed4d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 136, ::uGetConstString("205-0b06d2e8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 137, ::uGetConstString("206-1684b103.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 138, ::uGetConstString("207-56fe919e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 139, ::uGetConstString("208-a5cc2fe1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 140, ::uGetConstString("209-503e157c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 141, ::uGetConstString("210-cc7470ba.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 142, ::uGetConstString("51-3bce4f5b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 143, ::uGetConstString("52-3bce6bde.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 144, ::uGetConstString("53-3bce67dd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 145, ::uGetConstString("54-3bce4260.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 146, ::uGetConstString("55-3bce3e5f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 147, ::uGetConstString("56-3bce5ae2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 148, ::uGetConstString("57-3bce56e1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 149, ::uGetConstString("58-3bce7354.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 150, ::uGetConstString("59-3bce6f53.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 151, ::uGetConstString("60-4a4d6d2d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 152, ::uGetConstString("110-869a4a2b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 153, ::uGetConstString("62-4a4d85af.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 154, ::uGetConstString("63-4a4d81ae.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 155, ::uGetConstString("64-4a4d5c31.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 156, ::uGetConstString("105-da40e623.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 157, ::uGetConstString("66-4a4d74b3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 158, ::uGetConstString("67-4a4d70b2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 159, ::uGetConstString("68-4a4d8d25.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 160, ::uGetConstString("102-3aa28f74.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 161, ::uGetConstString("70-45786492.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 162, ::uGetConstString("71-45786091.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 163, ::uGetConstString("72-45787d14.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 164, ::uGetConstString("73-45787913.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 165, ::uGetConstString("74-45785396.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 166, ::uGetConstString("75-45784f95.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 167, ::uGetConstString("76-45786c18.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 168, ::uGetConstString("77-45786817.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 169, ::uGetConstString("78-4578848a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 170, ::uGetConstString("79-45788089.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 171, ::uGetConstString("80-2d4f398b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 172, ::uGetConstString("81-2d4f358a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 173, ::uGetConstString("82-2d4f520d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 174, ::uGetConstString("83-2d4f4e0c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 175, ::uGetConstString("106-cec30808.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 176, ::uGetConstString("85-2d4f248e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 177, ::uGetConstString("104-1abac6be.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 178, ::uGetConstString("87-2d4f3d10.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 179, ::uGetConstString("88-2d4f5983.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 180, ::uGetConstString("89-2d4f5582.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 181, ::uGetConstString("90-287a30f0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 182, ::uGetConstString("91-287a2cef.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 183, ::uGetConstString("92-287a4972.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 184, ::uGetConstString("93-287a4571.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 185, ::uGetConstString("94-287a1ff4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 186, ::uGetConstString("95-287a1bf3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 187, ::uGetConstString("96-287a3876.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 188, ::uGetConstString("97-287a3475.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 189, ::uGetConstString("98-287a50e8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 190, ::uGetConstString("99-287a4ce7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 191, ::uGetConstString("107-8e49276d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 192, ::uGetConstString("212-82643470.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 193, ::uGetConstString("213-c2de150b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 194, ::uGetConstString("214-6094e94e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 195, ::uGetConstString("215-0b06cee9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 196, ::uGetConstString("216-1684ad04.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 197, ::uGetConstString("217-56fe8d9f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 198, ::uGetConstString("218-a5cc2be2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 199, ::uGetConstString("219-503e117d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 200, ::uGetConstString("220-cc747cb7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 201, ::uGetConstString("221-76e66252.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 202, ::uGetConstString("222-8264406d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 203, ::uGetConstString("223-c2de2108.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 204, ::uGetConstString("224-6094f54b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 205, ::uGetConstString("225-0b06dae6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 206, ::uGetConstString("226-1684b901.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 207, ::uGetConstString("227-56fe999c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 208, ::uGetConstString("228-a5cc37df.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 209, ::uGetConstString("229-503e1d7a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 210, ::uGetConstString("230-cc7478b8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 211, ::uGetConstString("231-76e65e53.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 212, ::uGetConstString("232-82643c6e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 213, ::uGetConstString("233-c2de1d09.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 214, ::uGetConstString("234-6094f14c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 215, ::uGetConstString("235-0b06d6e7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 216, ::uGetConstString("236-1684b502.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 217, ::uGetConstString("237-56fe959d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 218, ::uGetConstString("238-a5cc33e0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 219, ::uGetConstString("239-503e197b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 220, ::uGetConstString("240-cc7464bd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 221, ::uGetConstString("241-76e64a58.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 222, ::uGetConstString("242-82642873.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 223, ::uGetConstString("243-c2de090e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 224, ::uGetConstString("244-6094dd51.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 225, ::uGetConstString("245-0b06c2ec.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 226, ::uGetConstString("246-1684a107.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 227, ::uGetConstString("247-56fe81a2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 228, ::uGetConstString("248-a5cc1fe5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 229, ::uGetConstString("249-503e0580.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 230, ::uGetConstString("250-cc7460be.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 231, ::uGetConstString("251-76e64659.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 232, ::uGetConstString("252-82642474.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 233, ::uGetConstString("253-c2de050f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 234, ::uGetConstString("254-6094d952.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 235, ::uGetConstString("255-0b06beed.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 236, ::uGetConstString("256-16849d08.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 237, ::uGetConstString("257-56fe7da3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 238, ::uGetConstString("258-a5cc1be6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 239, ::uGetConstString("259-503e0181.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 240, ::uGetConstString("260-cc746cbb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 241, ::uGetConstString("261-76e65256.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 242, ::uGetConstString("262-82643071.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 243, ::uGetConstString("263-c2de110c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 244, ::uGetConstString("264-6094e54f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 245, ::uGetConstString("265-0b06caea.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 246, ::uGetConstString("266-1684a905.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 247, ::uGetConstString("267-56fe89a0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 248, ::uGetConstString("268-a5cc27e3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 249, ::uGetConstString("269-503e0d7e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 250, ::uGetConstString("270-cc7468bc.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 251, ::uGetConstString("271-76e64e57.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 252, ::uGetConstString("272-82642c72.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 253, ::uGetConstString("273-c2de0d0d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 254, ::uGetConstString("274-6094e150.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 255, ::uGetConstString("276-1684a506.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 256, ::uGetConstString("277-56fe85a1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 257, ::uGetConstString("278-a5cc23e4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 258, ::uGetConstString("279-503e097f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 259, ::uGetConstString("280-cc7494b1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 260, ::uGetConstString("281-76e67a4c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 261, ::uGetConstString("282-82645867.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 262, ::uGetConstString("283-c2de3902.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 263, ::uGetConstString("284-60950d45.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 264, ::uGetConstString("285-0b06f2e0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 265, ::uGetConstString("286-1684d0fb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 266, ::uGetConstString("287-56feb196.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 267, ::uGetConstString("288-a5cc4fd9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 268, ::uGetConstString("289-503e3574.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 269, ::uGetConstString("290-cc7490b2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 270, ::uGetConstString("291-76e6764d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 271, ::uGetConstString("292-82645468.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 272, ::uGetConstString("293-c2de3503.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 273, ::uGetConstString("294-60950946.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 274, ::uGetConstString("295-0b06eee1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 275, ::uGetConstString("296-1684ccfc.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 276, ::uGetConstString("297-56fead97.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 277, ::uGetConstString("298-a5cc4bda.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 278, ::uGetConstString("299-503e3175.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 279, ::uGetConstString("300-1c2a68b4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 280, ::uGetConstString("301-dbb08819.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 281, ::uGetConstString("302-d21a2c6a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 282, ::uGetConstString("303-91a04bcf.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 283, ::uGetConstString("304-b04ae148.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 284, ::uGetConstString("305-6fd100ad.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 285, ::uGetConstString("opensans-light-48dbb5cf.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 286, ::uGetConstString("robotocondensed-bol-0d8d80bd.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 287, ::uGetConstString("robotocondensed-bol-ca4a036b.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 288, ::uGetConstString("robotocondensed-ita-37f1251c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 289, ::uGetConstString("robotocondensed-lig-392026c0.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 290, ::uGetConstString("robotocondensed-lig-234499e4.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 291, ::uGetConstString("robotocondensed-reg-1a044c04.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 292, ::uGetConstString("roboto-italic-418c639d.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 293, ::uGetConstString("roboto-light-6f4384bd.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 294, ::uGetConstString("roboto-lightitalic-578fa3e3.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 295, ::uGetConstString("roboto-medium-2bccff0c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 296, ::uGetConstString("roboto-mediumitalic-21c6e800.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 297, ::uGetConstString("roboto-regular-24feb0d1.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 298, ::uGetConstString("roboto-thin-944c27e4.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 299, ::uGetConstString("roboto-thinitalic-b7c52220.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 300, ::uGetConstString("roboto-black-6bba6a86.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 301, ::uGetConstString("roboto-blackitalic-926bd24e.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 302, ::uGetConstString("roboto-bold-8f07a91c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 303, ::uGetConstString("roboto-bolditalic-2358073c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 304, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, b;\nattribute vec4 c;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    g = b;\n    h = c;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform float e, f;\n\nuniform sampler2D i;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    float j = smoothstep(e, f, texture2D(i, g).x);\n    if (j < 0.15) discard;\n    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n}\n"), 0, 3, (array_127 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(6) = ::uGetConstString("i"), array_127)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 305, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, c;\nattribute vec4 b;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    e = c;\n    f = b;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform sampler2D g;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n}\n"), 0, 3, (array_128 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_128)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 306, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 f, c;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = false ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 d;\nuniform float e;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    vec4 i = b ? d : (texture2D(h, g) * d);\n    gl_FragColor = vec4((i.xyz * i.w) * e, i.w * e);\n}\n"), 1, 1, (array_129 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_129)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 307, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvoid main()\n{\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_130 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_130)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 308, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 j, d;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvoid main()\n{\n    k = false ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = d * (j * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec2 e, f;\nuniform vec4 g[b];\nuniform float h[c], i;\n\nvarying vec2 k;\n\nvec4 l(vec2 m){\n    vec2 n = e - f;\n    vec2 o = m - f;\n    float p = dot(o, normalize(n)) / length(n);\n    vec4 q = g[0];\n\n    for (int r = 0; r < (c - 1); r++)\n    {\n        float s = h[r];\n        float t = h[r + 1];\n        vec4 u = g[r + 1];\n        q = mix(q, u, smoothstep(s, t, p));\n    }\n\n    return q;\n}\n\nvoid main()\n{\n    vec4 m = l(k);\n    gl_FragColor = vec4((m.xyz * m.w) * i, m.w * i);\n}\n"), 2, 1, (array_131 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), array_131)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 309, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec2 a;\n\nvarying vec2 i;\n\nvec4 k(vec2 l, mat4 m){\n    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n}\n\nvoid main()\n{\n    i = a;\n    gl_Position = k(a, c);\n}\n"), ::uGetConstString("uniform float g, h, f;\nuniform vec2 d;\nuniform vec4 e;\n\nuniform sampler2D j;\n\nvarying vec2 i;\n\nvoid main()\n{\n    vec4 l = b ? e : (texture2D(j, (i - vec2(g, h)) / d) * e);\n    gl_FragColor = vec4((l.xyz * l.w) * f, l.w * f);\n}\n"), 1, 1, (array_132 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(8) = ::uGetConstString("j"), array_132)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 310, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec2 a;\n\nvec4 d(vec2 e, mat4 f){\n    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n}\n\nvoid main()\n{\n    gl_Position = d(a, b);\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_133 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_133)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 311, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\nuniform vec2 e;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvec4 l(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nvoid main()\n{\n    k = a / e;\n    gl_Position = l(a, d);\n}\n"), ::uGetConstString("uniform vec2 f, g;\nuniform vec4 h[b];\nuniform float i[c], j;\n\nvarying vec2 k;\n\nvec4 m(vec2 n){\n    vec2 o = f - g;\n    vec2 p = n - g;\n    float q = dot(p, normalize(o)) / length(o);\n    vec4 r = h[0];\n\n    for (int s = 0; s < (c - 1); s++)\n    {\n        float t = i[s];\n        float u = i[s + 1];\n        vec4 v = h[s + 1];\n        r = mix(r, v, smoothstep(t, u, q));\n    }\n\n    return r;\n}\n\nvoid main()\n{\n    vec4 n = m(k);\n    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n}\n"), 2, 1, (array_134 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), array_134)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 312, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec4 a;\n\nvarying vec2 i;\nvarying vec4 j;\n\nvec4 l(vec2 m, mat4 n){\n    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n}\n\nvoid main()\n{\n    i = a.xy;\n    j = vec4(float(1), float(1), float(1), a.zw.x);\n    gl_Position = l(a.xy, c);\n}\n"), ::uGetConstString("uniform float g, h, f;\nuniform vec2 d;\nuniform vec4 e;\n\nuniform sampler2D k;\n\nvarying vec2 i;\nvarying vec4 j;\n\nvoid main()\n{\n    vec4 m = (b ? e : (texture2D(k, (i - vec2(g, h)) / d) * e)) * j;\n    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n}\n"), 1, 1, (array_135 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(8) = ::uGetConstString("k"), array_135)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 313, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\nuniform float d;\n\nattribute vec4 a;\n\nvarying vec4 e;\n\nvec4 f(vec2 g, mat4 h){\n    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n}\n\nvoid main()\n{\n    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n    e = vec4((g.xyz * g.w) * d, g.w * d);\n    gl_Position = f(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 e;\n\nvoid main()\n{\n    gl_FragColor = e;\n}\n"), 0, 1, (array_136 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_136)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 314, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\nuniform vec2 e;\n\nattribute vec4 a;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvec4 m(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    k = vec4(float(1), float(1), float(1), a.zw.x);\n    l = a.xy / e;\n    gl_Position = m(a.xy, d);\n}\n"), ::uGetConstString("uniform vec2 f, g;\nuniform vec4 h[b];\nuniform float i[c], j;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvec4 n(vec2 o){\n    vec2 p = f - g;\n    vec2 q = o - g;\n    float r = dot(q, normalize(p)) / length(p);\n    vec4 s = h[0];\n\n    for (int t = 0; t < (c - 1); t++)\n    {\n        float u = i[t];\n        float v = i[t + 1];\n        vec4 w = h[t + 1];\n        s = mix(s, w, smoothstep(u, v, r));\n    }\n\n    return s;\n}\n\nvoid main()\n{\n    vec4 o = n(l) * k;\n    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n}\n"), 2, 1, (array_137 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), array_137)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 315, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\n\nattribute vec4 a;\n\nvarying vec4 d;\n\nvec4 e(vec2 f, mat4 g){\n    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n}\n\nvoid main()\n{\n    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n    d = vec4((f.xyz * f.w) * 1.0, f.w);\n    gl_Position = e(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 d;\n\nvoid main()\n{\n    gl_FragColor = d;\n}\n"), 0, 1, (array_138 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_138)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 316, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float d, e, f, g, h, i, l, m, n, o;\nuniform mat4 j, k;\nuniform vec2 p;\n\nattribute vec3 a, b;\n\nvarying vec2 s;\n\nvoid main()\n{\n    s = vec2(((a.x * d) + (a.y * l)) + (a.z * m), ((b.x * g) + (b.y * n)) + (b.z * o)) / p;\n    gl_Position = k * (j * vec4(vec2(((a.x * d) + (a.y * e)) + (a.z * f), ((b.x * g) + (b.y * h)) + (b.z * i)), float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec4 q;\nuniform float r;\n\nuniform sampler2D t;\n\nvarying vec2 s;\n\nvoid main()\n{\n    vec4 u = c ? q : (texture2D(t, s) * q);\n    gl_FragColor = vec4((u.xyz * u.w) * r, u.w * r);\n}\n"), 1, 2, (array_139 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(0) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(18) = ::uGetConstString("t"), array_139)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 317, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float c, d, e, f, g, h;\nuniform mat4 i, j;\n\nattribute vec3 a, b;\n\nvoid main()\n{\n    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec4 k;\n\nvoid main()\n{\n    gl_FragColor = k;\n}\n"), 0, 2, (array_140 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), array_140)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 318, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e, f, g, h, i, j, m, n, o, p;\nuniform mat4 k, l;\nuniform vec2 q;\n\nattribute vec3 a, b;\n\nvarying vec2 w;\n\nvoid main()\n{\n    w = vec2(((a.x * e) + (a.y * m)) + (a.z * n), ((b.x * h) + (b.y * o)) + (b.z * p)) / q;\n    gl_Position = l * (k * vec4(vec2(((a.x * e) + (a.y * f)) + (a.z * g), ((b.x * h) + (b.y * i)) + (b.z * j)), float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec2 r, s;\nuniform vec4 t[c];\nuniform float u[d], v;\n\nvarying vec2 w;\n\nvec4 x(vec2 y){\n    vec2 z = r - s;\n    vec2 A = y - s;\n    float B = dot(A, normalize(z)) / length(z);\n    vec4 C = t[0];\n\n    for (int D = 0; D < (d - 1); D++)\n    {\n        float E = u[D];\n        float F = u[D + 1];\n        vec4 G = t[D + 1];\n        C = mix(C, G, smoothstep(E, F, B));\n    }\n\n    return C;\n}\n\nvoid main()\n{\n    vec4 y = x(w);\n    gl_FragColor = vec4((y.xyz * y.w) * v, y.w * v);\n}\n"), 2, 2, (array_141 = ::uNewArray(::app::Uno::String__typeof(), 22), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(0) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(1) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(3) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(19) = ::uGetConstString("t"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(20) = ::uGetConstString("u"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(21) = ::uGetConstString("v"), array_141)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 319, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 h, c;\nuniform vec2 d, e;\n\nattribute vec2 a;\n\nvarying vec2 i;\n\nvoid main()\n{\n    i = (a * d) + e;\n    gl_Position = c * (h * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 f;\nuniform float g;\n\nuniform sampler2D j;\n\nvarying vec2 i;\n\nvoid main()\n{\n    vec4 k = b ? f : (texture2D(j, i) * f);\n    gl_FragColor = vec4((k.xyz * k.w) * g, k.w * g);\n}\n"), 1, 1, (array_142 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(8) = ::uGetConstString("j"), array_142)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 320, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 l, d;\nuniform vec2 e, f;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvoid main()\n{\n    m = (a * e) + f;\n    gl_Position = d * (l * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec2 g, h;\nuniform vec4 i[b];\nuniform float j[c], k;\n\nvarying vec2 m;\n\nvec4 n(vec2 o){\n    vec2 p = g - h;\n    vec2 q = o - h;\n    float r = dot(q, normalize(p)) / length(p);\n    vec4 s = i[0];\n\n    for (int t = 0; t < (c - 1); t++)\n    {\n        float u = j[t];\n        float v = j[t + 1];\n        vec4 w = i[t + 1];\n        s = mix(s, w, smoothstep(u, v, r));\n    }\n\n    return s;\n}\n\nvoid main()\n{\n    vec4 o = n(m);\n    gl_FragColor = vec4((o.xyz * o.w) * k, o.w * k);\n}\n"), 2, 1, (array_143 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_143)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 321, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b;\nuniform mat4 c, d;\n\nattribute vec2 a;\n\nvarying vec2 f;\n\nvoid main()\n{\n    f = vec2(a.x, 1.0 - a.y);\n    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n}\n"), ::uGetConstString("uniform float e;\n\nuniform sampler2D g;\n\nvarying vec2 f;\n\nvoid main()\n{\n    vec4 h = texture2D(g, f);\n    gl_FragColor = vec4(h.xyz * e, h.w * e);\n}\n"), 0, 1, (array_144 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(5) = ::uGetConstString("g"), array_144)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 322, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvoid main()\n{\n    e = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float c;\n\nuniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    vec4 g = texture2D(f, e);\n    vec4 h = vec4(g.xyz / g.w, g.w);\n    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n}\n"), 0, 1, (array_145 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_145)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 323, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 f, b;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec3 e;\nuniform float c, d;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = vec4(e, (texture2D(h, g).w * c) * d);\n}\n"), 0, 1, (array_146 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_146)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 324, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\n\nattribute vec2 a;\n\nvarying vec2 d, e, f, g, h;\n\nvoid main()\n{\n    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 k = (j.xy * 0.5) + 0.5;\n    d = k + b;\n    e = k - b;\n    f = k + c;\n    g = k - c;\n    h = k;\n    gl_Position = vec4(j, float(1));\n}\n"), ::uGetConstString("uniform sampler2D i;\n\nvarying vec2 d, e, f, g, h;\n\nvoid main()\n{\n    gl_FragColor = ((((texture2D(i, h) * 0.204164) + (texture2D(i, d) * 0.304005)) + (texture2D(i, e) * 0.304005)) + (texture2D(i, f) * 0.093913)) + (texture2D(i, g) * 0.093913);\n}\n"), 0, 1, (array_147 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(3) = ::uGetConstString("i"), array_147)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 325, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\nuniform vec2 c;\n\nattribute vec2 a;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec2 i = true ? vec2(a.x, float(1) - a.y) : a;\n    e = i;\n    f = vec2(i.x, float(1) - i.y) * c;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D g, h;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec4 i = texture2D(g, e);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(h, f).w);\n}\n"), 0, 1, (array_148 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(5) = ::uGetConstString("h"), array_148)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 326, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\nuniform vec2 c;\n\nattribute vec2 a;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec2 i = true ? vec2(a.x, float(1) - a.y) : a;\n    e = i;\n    f = vec2(i.x, float(1) - i.y) * c;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D g, h;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec4 i = texture2D(g, e);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(h, f).x);\n}\n"), 0, 1, (array_149 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(5) = ::uGetConstString("h"), array_149)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 327, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\nuniform vec2 c;\n\nattribute vec2 a;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec2 i = true ? vec2(a.x, float(1) - a.y) : a;\n    e = i;\n    f = vec2(i.x, float(1) - i.y) * c;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D g, h;\n\nvarying vec2 e, f;\n\nvoid main()\n{\n    vec4 i = texture2D(g, e);\n    vec4 j = texture2D(h, f);\n    gl_FragColor = vec4(i.xyz * j.xyz, i.w * j.w);\n}\n"), 0, 1, (array_150 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(5) = ::uGetConstString("h"), array_150)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 328, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\n\nattribute vec2 a;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 j = (i.xy * 0.5) + 0.5;\n    d = j + b;\n    e = j - b;\n    f = j + c;\n    g = j - c;\n    gl_Position = vec4(i, float(1));\n}\n"), ::uGetConstString("uniform sampler2D h;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n}\n"), 0, 1, (array_151 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(3) = ::uGetConstString("h"), array_151)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 329, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * 0.5) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_152 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_152)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 330, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, d, e;\n\nattribute vec2 a;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec2 o = vec2(a.x, 1.0 - a.y);\n    vec2 p = vec2(o.x, 1.0 - o.y);\n    i = p + b;\n    j = p + c;\n    k = p + d;\n    l = p + e;\n    m = p;\n    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n}\n"), ::uGetConstString("uniform float f;\nuniform vec4 g, h;\n\nuniform sampler2D n;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec3 o = texture2D(n, m).xyz;\n    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n    gl_FragColor = (g * (1.0 - p)) + (h * p);\n}\n"), 0, 1, (array_153 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(8) = ::uGetConstString("n"), array_153)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 331, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 i[16], q, m[16];\nuniform vec2 j, k;\n\nattribute vec3 a, e;\nattribute float b;\nattribute vec2 c;\nattribute vec4 d;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nmat3 z(mat3 A){\n    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n}\n\nvoid main()\n{\n    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n    r = A * d.xyz;\n    s = A * (cross(d.xyz, e) * d.w);\n    t = A * e;\n    u = (c * j) + k;\n    v = (i[int(b)] * vec4(a, 1.)).xyz;\n    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 l, n, o;\nuniform float p;\n\nuniform sampler2D w, x, y;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nvoid main()\n{\n    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n}\n"), 3, 5, (array_154 = ::uNewArray(::app::Uno::String__typeof(), 20), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(0) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(1) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(2) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(7) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(19) = ::uGetConstString("y"), array_154)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 332, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 o, l, p;\nuniform vec2 h, i;\n\nattribute vec3 a, d;\nattribute vec2 b;\nattribute vec4 c;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n    t = (b * h) + i;\n    u = (l * vec4(a, 1.)).xyz;\n    gl_Position = o * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 j, k, m;\nuniform float n;\n\nuniform sampler2D v, w, x;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n}\n"), 3, 4, (array_155 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(0) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(1) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(2) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(16) = ::uGetConstString("v"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), array_155)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 333, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = b * vec4(a, 1.);\n}\n"), ::uGetConstString("void main()\n{\n    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n}\n"), 0, 1, (array_156 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), array_156)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 334, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = c * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec4 b;\n\nvoid main()\n{\n    gl_FragColor = b;\n}\n"), 0, 1, (array_157 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_157)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 335, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_158 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_158)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 336, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b;\nuniform mat4 c, d;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = a;\n    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec3 f;\nuniform float e;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = vec4(f, pow(texture2D(h, g).z, 2.2) * e);\n}\n"), 0, 1, (array_159 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_159)));
    ::app::MainView__New_2(NULL);
}

uObject*** uGetGlobalStrongRefs()
{
    static uObject** refs[] =
    {
        (uObject**)&::app::Uno::Application___Current,
        (uObject**)&::app::Uno::CharPunctuationChecker__singlePunctuationChars,
        (uObject**)&::app::Uno::CharPunctuationChecker__punctuationRangeList,
        (uObject**)&::app::Uno::EventArgs__Empty,
        (uObject**)&::app::Uno::String__Empty,
        (uObject**)&::app::Uno::Time__FakeTime,
        (uObject**)&::app::Fuse::DrawContext___current,
        (uObject**)&::app::Fuse::DrawContext__DefaultPass,
        (uObject**)&::app::Fuse::DrawContext__renderTargets,
        (uObject**)&::app::Fuse::Fonts___fallback,
        (uObject**)&::app::Fuse::FramebufferPool__framebufferPool,
        (uObject**)&::app::Fuse::Node___isEnabledChangedHandle,
        (uObject**)&::app::Fuse::Node___handleHandle,
        (uObject**)&::app::Fuse::Node___resourcesHandle,
        (uObject**)&::app::Fuse::Node___styleHandle,
        (uObject**)&::app::Fuse::Node___addedHandle,
        (uObject**)&::app::Fuse::Node___removedHandle,
        (uObject**)&::app::Fuse::Node___rootedHandle,
        (uObject**)&::app::Fuse::Node___unrootedHandle,
        (uObject**)&::app::Fuse::Profiling___commandBuffer,
        (uObject**)&::app::Fuse::Profiling___stringCache,
        (uObject**)&::app::Fuse::Profiling___ProfileClient,
        (uObject**)&::app::Fuse::Properties__NoValue,
        (uObject**)&::app::Fuse::UpdateManager__listeners,
        (uObject**)&::app::Fuse::UpdateManager__onces,
        (uObject**)&::app::Fuse::UpdateManager__oncesPending,
        (uObject**)&::app::Uno::Diagnostics::Debug___assertionHandler,
        (uObject**)&::app::Uno::Diagnostics::Debug___indentStr,
        (uObject**)&::app::Uno::Platform2::Application__Started,
        (uObject**)&::app::Uno::Platform2::Application__EnteringForeground,
        (uObject**)&::app::Uno::Platform2::Application__EnteringInteractive,
        (uObject**)&::app::Uno::Platform2::Application__ExitedInteractive,
        (uObject**)&::app::Uno::Platform2::Application__EnteringBackground,
        (uObject**)&::app::Uno::Platform2::Application__Terminating,
        (uObject**)&::app::Uno::Platform2::Application__ReceivedLowMemoryWarning,
        (uObject**)&::app::Uno::Platform2::Application__KeyDown,
        (uObject**)&::app::Uno::Platform2::Application__KeyUp,
        (uObject**)&::app::Uno::Platform2::DefaultSetup___RootView,
        (uObject**)&::app::Uno::Platform2::SystemUI__TopFrameWillResize,
        (uObject**)&::app::Uno::Platform2::SystemUI__BottomFrameWillResize,
        (uObject**)&::app::Fuse::Input::Focus___gained,
        (uObject**)&::app::Fuse::Input::Focus___lost,
        (uObject**)&::app::Fuse::Input::Focus___isFoucsableChanged,
        (uObject**)&::app::Fuse::Input::Focus___focusedObject,
        (uObject**)&::app::Fuse::Input::Focus___lastFocusedNode,
        (uObject**)&::app::Fuse::Input::Focus___focusDelegatorHandle,
        (uObject**)&::app::Fuse::Input::Focus___isFocusableHandle,
        (uObject**)&::app::Fuse::Input::Keyboard___keyPressed,
        (uObject**)&::app::Fuse::Input::Keyboard___keyReleased,
        (uObject**)&::app::Fuse::Input::Keyboard___keysDown,
        (uObject**)&::app::Fuse::Input::Keyboard___keyboardHandle,
        (uObject**)&::app::Fuse::Input::Pointer___pressed,
        (uObject**)&::app::Fuse::Input::Pointer___moved,
        (uObject**)&::app::Fuse::Input::Pointer___released,
        (uObject**)&::app::Fuse::Input::Pointer___entered,
        (uObject**)&::app::Fuse::Input::Pointer___left,
        (uObject**)&::app::Fuse::Input::Pointer___wheelMoved,
        (uObject**)&::app::Fuse::Input::Pointer___pointersDown,
        (uObject**)&::app::Fuse::Input::Pointer___softCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___hardCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___lastHitNodes,
        (uObject**)&::app::Fuse::Input::TextService___textEntered,
        (uObject**)&::app::Fuse::Internal::BlenderMap___blenders,
        (uObject**)&::app::Fuse::Internal::DefaultTextRendererImpl___bitmapFonts,
        (uObject**)&::app::Fuse::Internal::DefaultTextRendererImpl___renderer,
        (uObject**)&::app::Fuse::Internal::TextPosition__Default,
        (uObject**)&::app::Fuse::Resources::ResourceRegistry___handlers,
        (uObject**)&::app::Fuse::Resources::BundleFileImageSourceCache___cache,
        (uObject**)&::app::Fuse::Resources::DisposalManager___items,
        (uObject**)&::app::Fuse::Resources::HttpImageSourceCache___cache,
        (uObject**)&::app::Fuse::Animations::Mixer___default,
        (uObject**)&::app::Fuse::Animations::Mixer___defaultDiscrete,
        (uObject**)&::app::Fuse::Animations::Mixer__PreMasters,
        (uObject**)&::app::Fuse::Animations::Mixer__PostMasters,
        (uObject**)&::app::Fuse::Animations::MasterTransform__identity,
        (uObject**)&::app::Fuse::Drawing::BlendModeHelpers___invalidBlendMode,
        (uObject**)&::app::Fuse::Drawing::Brushes__Transparent,
        (uObject**)&::app::Fuse::Drawing::Brushes__Black,
        (uObject**)&::app::Fuse::Drawing::Brushes__Silver,
        (uObject**)&::app::Fuse::Drawing::Brushes__Gray,
        (uObject**)&::app::Fuse::Drawing::Brushes__White,
        (uObject**)&::app::Fuse::Drawing::Brushes__Maroon,
        (uObject**)&::app::Fuse::Drawing::Brushes__Red,
        (uObject**)&::app::Fuse::Drawing::Brushes__Purple,
        (uObject**)&::app::Fuse::Drawing::Brushes__Fuchsia,
        (uObject**)&::app::Fuse::Drawing::Brushes__Green,
        (uObject**)&::app::Fuse::Drawing::Brushes__Lime,
        (uObject**)&::app::Fuse::Drawing::Brushes__Olive,
        (uObject**)&::app::Fuse::Drawing::Brushes__Yellow,
        (uObject**)&::app::Fuse::Drawing::Brushes__Navy,
        (uObject**)&::app::Fuse::Drawing::Brushes__Blue,
        (uObject**)&::app::Fuse::Drawing::Brushes__Teal,
        (uObject**)&::app::Fuse::Drawing::Brushes__Aqua,
        (uObject**)&::app::Fuse::Elements::Cache__cacheHelper,
        (uObject**)&::app::Fuse::Elements::Element___minWidthHandle,
        (uObject**)&::app::Fuse::Elements::Element___minHeightHandle,
        (uObject**)&::app::Fuse::Elements::Element___maxWidthHandle,
        (uObject**)&::app::Fuse::Elements::Element___maxHeightHandle,
        (uObject**)&::app::Fuse::Entities::MeshBatchingEngine___singleton,
        (uObject**)&::app::Fuse::Gestures::Scroller___horizontalGesture,
        (uObject**)&::app::Fuse::Gestures::Scroller___verticalGesture,
        (uObject**)&::app::Fuse::Gestures::Clicker___clickerProperty,
        (uObject**)&::app::Fuse::Navigation::DirectNavigation___indexProperty,
        (uObject**)&::app::Fuse::Navigation::EdgeNavigation___edgeHandle,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationHandler,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationStateHandler,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationProgress,
        (uObject**)&::app::Fuse::Shapes::GeometryCache___instance,
        (uObject**)&::app::Fuse::Controls::Control___overlaysProperty,
        (uObject**)&::app::Fuse::Controls::EdgeNavigator___tplMain,
        (uObject**)&::app::Fuse::Controls::TextInput___baseTemplate,
        (uObject**)&::app::Fuse::Layouts::DockLayout___dockProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultRow,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultColumn,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualRowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowSpanProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualColumnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnSpanProperty,
        (uObject**)&::app::Fuse::Layouts::Layouts__Default,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme___singleton,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__ColorCodes,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Red,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Pink,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Purple,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__DeepPurple,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Indigo,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Blue,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__LightBlue,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Cyan,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Teal,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Green,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__LightGreen,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Lime,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Yellow,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Amber,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Orange,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__DeepOrange,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Brown,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__Grey,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__BlueGrey,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedBoldItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoCondensedRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoMedium,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoMediumItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoThin,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoThinItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoBlack,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoBlackItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme__RobotoBoldItalic,
        (uObject**)&::app::Experimental::Http::BinaryLoader___handler,
        (uObject**)&::app::Experimental::Http::HttpLoader___cache,
        (uObject**)&::app::Fuse::Internal::Drawing::SolidRectangle__Impl,
        (uObject**)&::app::Fuse::Triggers::Actions::GiveFocus__Singleton,
        (uObject**)&::app::Fuse::Elements::Internal::Scale9Rectangle__Impl,
        (uObject**)&::app::Fuse::Elements::Internal::ElementDraw__Impl,
        (uObject**)&::app::Fuse::Elements::Internal::ImageElementDraw__Impl,
        (uObject**)&::app::Fuse::Elements::Implementations::FallbackTextElement___textRenderers,
        (uObject**)&::app::Fuse::Entities::Designer::PreloadedResources__resources,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___leftRightSwipe,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___upDownSwipe,
        (uObject**)&::app::Fuse::Controls::Primitives::Track___horizontalGesture,
        (uObject**)&::app::Experimental::Net::Http::HttpMethodStringConverter__StringMethods,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::BundleRegistry___data,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::NumericFormatter___decimalPoint,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__Aborted,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__Error,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__Timeout,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__Done,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__StateChanged,
        (uObject**)&::app::Experimental::Net::Http::Implementation::HttpRequestCallbacks__Progress,
        (uObject**)&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall___boundAttributes,
        NULL
    };

    return refs;
}

#ifdef U_DEBUG_MEM

const char** uGetGlobalStrongNames()
{
    static const char* names[] =
    {
        "Uno.Application._Current",
        "Uno.CharPunctuationChecker.singlePunctuationChars",
        "Uno.CharPunctuationChecker.punctuationRangeList",
        "Uno.EventArgs.Empty",
        "string.Empty",
        "Uno.Time.FakeTime",
        "Fuse.DrawContext._current",
        "Fuse.DrawContext.DefaultPass",
        "Fuse.DrawContext.renderTargets",
        "Fuse.Fonts._fallback",
        "Fuse.FramebufferPool.framebufferPool",
        "Fuse.Node._isEnabledChangedHandle",
        "Fuse.Node._handleHandle",
        "Fuse.Node._resourcesHandle",
        "Fuse.Node._styleHandle",
        "Fuse.Node._addedHandle",
        "Fuse.Node._removedHandle",
        "Fuse.Node._rootedHandle",
        "Fuse.Node._unrootedHandle",
        "Fuse.Profiling._commandBuffer",
        "Fuse.Profiling._stringCache",
        "Fuse.Profiling._ProfileClient",
        "Fuse.Properties.NoValue",
        "Fuse.UpdateManager.listeners",
        "Fuse.UpdateManager.onces",
        "Fuse.UpdateManager.oncesPending",
        "Uno.Diagnostics.Debug._assertionHandler",
        "Uno.Diagnostics.Debug._indentStr",
        "Uno.Platform2.Application.Started",
        "Uno.Platform2.Application.EnteringForeground",
        "Uno.Platform2.Application.EnteringInteractive",
        "Uno.Platform2.Application.ExitedInteractive",
        "Uno.Platform2.Application.EnteringBackground",
        "Uno.Platform2.Application.Terminating",
        "Uno.Platform2.Application.ReceivedLowMemoryWarning",
        "Uno.Platform2.Application.KeyDown",
        "Uno.Platform2.Application.KeyUp",
        "Uno.Platform2.DefaultSetup._RootView",
        "Uno.Platform2.SystemUI.TopFrameWillResize",
        "Uno.Platform2.SystemUI.BottomFrameWillResize",
        "Fuse.Input.Focus._gained",
        "Fuse.Input.Focus._lost",
        "Fuse.Input.Focus._isFoucsableChanged",
        "Fuse.Input.Focus._focusedObject",
        "Fuse.Input.Focus._lastFocusedNode",
        "Fuse.Input.Focus._focusDelegatorHandle",
        "Fuse.Input.Focus._isFocusableHandle",
        "Fuse.Input.Keyboard._keyPressed",
        "Fuse.Input.Keyboard._keyReleased",
        "Fuse.Input.Keyboard._keysDown",
        "Fuse.Input.Keyboard._keyboardHandle",
        "Fuse.Input.Pointer._pressed",
        "Fuse.Input.Pointer._moved",
        "Fuse.Input.Pointer._released",
        "Fuse.Input.Pointer._entered",
        "Fuse.Input.Pointer._left",
        "Fuse.Input.Pointer._wheelMoved",
        "Fuse.Input.Pointer._pointersDown",
        "Fuse.Input.Pointer._softCapturers",
        "Fuse.Input.Pointer._hardCapturers",
        "Fuse.Input.Pointer._lastHitNodes",
        "Fuse.Input.TextService._textEntered",
        "Fuse.Internal.BlenderMap._blenders",
        "Fuse.Internal.DefaultTextRendererImpl._bitmapFonts",
        "Fuse.Internal.DefaultTextRendererImpl._renderer",
        "Fuse.Internal.TextPosition.Default",
        "Fuse.Resources.ResourceRegistry._handlers",
        "Fuse.Resources.BundleFileImageSourceCache._cache",
        "Fuse.Resources.DisposalManager._items",
        "Fuse.Resources.HttpImageSourceCache._cache",
        "Fuse.Animations.Mixer._default",
        "Fuse.Animations.Mixer._defaultDiscrete",
        "Fuse.Animations.Mixer.PreMasters",
        "Fuse.Animations.Mixer.PostMasters",
        "Fuse.Animations.MasterTransform.identity",
        "Fuse.Drawing.BlendModeHelpers._invalidBlendMode",
        "Fuse.Drawing.Brushes.Transparent",
        "Fuse.Drawing.Brushes.Black",
        "Fuse.Drawing.Brushes.Silver",
        "Fuse.Drawing.Brushes.Gray",
        "Fuse.Drawing.Brushes.White",
        "Fuse.Drawing.Brushes.Maroon",
        "Fuse.Drawing.Brushes.Red",
        "Fuse.Drawing.Brushes.Purple",
        "Fuse.Drawing.Brushes.Fuchsia",
        "Fuse.Drawing.Brushes.Green",
        "Fuse.Drawing.Brushes.Lime",
        "Fuse.Drawing.Brushes.Olive",
        "Fuse.Drawing.Brushes.Yellow",
        "Fuse.Drawing.Brushes.Navy",
        "Fuse.Drawing.Brushes.Blue",
        "Fuse.Drawing.Brushes.Teal",
        "Fuse.Drawing.Brushes.Aqua",
        "Fuse.Elements.Cache.cacheHelper",
        "Fuse.Elements.Element._minWidthHandle",
        "Fuse.Elements.Element._minHeightHandle",
        "Fuse.Elements.Element._maxWidthHandle",
        "Fuse.Elements.Element._maxHeightHandle",
        "Fuse.Entities.MeshBatchingEngine._singleton",
        "Fuse.Gestures.Scroller._horizontalGesture",
        "Fuse.Gestures.Scroller._verticalGesture",
        "Fuse.Gestures.Clicker._clickerProperty",
        "Fuse.Navigation.DirectNavigation._indexProperty",
        "Fuse.Navigation.EdgeNavigation._edgeHandle",
        "Fuse.Navigation.Navigation._navigationHandler",
        "Fuse.Navigation.Navigation._navigationStateHandler",
        "Fuse.Navigation.Navigation._navigationProgress",
        "Fuse.Shapes.GeometryCache._instance",
        "Fuse.Controls.Control._overlaysProperty",
        "Fuse.Controls.EdgeNavigator._tplMain",
        "Fuse.Controls.TextInput._baseTemplate",
        "Fuse.Layouts.DockLayout._dockProperty",
        "Fuse.Layouts.GridLayout._staticDefaultRow",
        "Fuse.Layouts.GridLayout._staticDefaultColumn",
        "Fuse.Layouts.GridLayout._rowProperty",
        "Fuse.Layouts.GridLayout._actualRowProperty",
        "Fuse.Layouts.GridLayout._rowSpanProperty",
        "Fuse.Layouts.GridLayout._columnProperty",
        "Fuse.Layouts.GridLayout._actualColumnProperty",
        "Fuse.Layouts.GridLayout._columnSpanProperty",
        "Fuse.Layouts.Layouts.Default",
        "Fuse.BasicTheme.BasicTheme._singleton",
        "Fuse.BasicTheme.BasicTheme.ColorCodes",
        "Fuse.BasicTheme.BasicTheme.Red",
        "Fuse.BasicTheme.BasicTheme.Pink",
        "Fuse.BasicTheme.BasicTheme.Purple",
        "Fuse.BasicTheme.BasicTheme.DeepPurple",
        "Fuse.BasicTheme.BasicTheme.Indigo",
        "Fuse.BasicTheme.BasicTheme.Blue",
        "Fuse.BasicTheme.BasicTheme.LightBlue",
        "Fuse.BasicTheme.BasicTheme.Cyan",
        "Fuse.BasicTheme.BasicTheme.Teal",
        "Fuse.BasicTheme.BasicTheme.Green",
        "Fuse.BasicTheme.BasicTheme.LightGreen",
        "Fuse.BasicTheme.BasicTheme.Lime",
        "Fuse.BasicTheme.BasicTheme.Yellow",
        "Fuse.BasicTheme.BasicTheme.Amber",
        "Fuse.BasicTheme.BasicTheme.Orange",
        "Fuse.BasicTheme.BasicTheme.DeepOrange",
        "Fuse.BasicTheme.BasicTheme.Brown",
        "Fuse.BasicTheme.BasicTheme.Grey",
        "Fuse.BasicTheme.BasicTheme.BlueGrey",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedBold",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedBoldItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedLight",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedLightItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoCondensedRegular",
        "Fuse.BasicTheme.BasicTheme.RobotoItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoLight",
        "Fuse.BasicTheme.BasicTheme.RobotoLightItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoMedium",
        "Fuse.BasicTheme.BasicTheme.RobotoMediumItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoRegular",
        "Fuse.BasicTheme.BasicTheme.RobotoThin",
        "Fuse.BasicTheme.BasicTheme.RobotoThinItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoBlack",
        "Fuse.BasicTheme.BasicTheme.RobotoBlackItalic",
        "Fuse.BasicTheme.BasicTheme.RobotoBold",
        "Fuse.BasicTheme.BasicTheme.RobotoBoldItalic",
        "Experimental.Http.BinaryLoader._handler",
        "Experimental.Http.HttpLoader._cache",
        "Fuse.Internal.Drawing.SolidRectangle.Impl",
        "Fuse.Triggers.Actions.GiveFocus.Singleton",
        "Fuse.Elements.Internal.Scale9Rectangle.Impl",
        "Fuse.Elements.Internal.ElementDraw.Impl",
        "Fuse.Elements.Internal.ImageElementDraw.Impl",
        "Fuse.Elements.Implementations.FallbackTextElement._textRenderers",
        "Fuse.Entities.Designer.PreloadedResources.resources",
        "Fuse.Gestures.Internal.EdgeSwiper._leftRightSwipe",
        "Fuse.Gestures.Internal.EdgeSwiper._upDownSwipe",
        "Fuse.Controls.Primitives.Track._horizontalGesture",
        "Experimental.Net.Http.HttpMethodStringConverter.StringMethods",
        "Uno.Runtime.Implementation.Internal.BundleRegistry._data",
        "Uno.Runtime.Implementation.Internal.NumericFormatter._decimalPoint",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.Aborted",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.Error",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.Timeout",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.Done",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.StateChanged",
        "Experimental.Net.Http.Implementation.HttpRequestCallbacks.Progress",
        "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall._boundAttributes",
        NULL
    };

    return names;
}

#endif

uWeakObject*** uGetGlobalWeakRefs()
{
    static uWeakObject** refs[] =
    {
        NULL
    };

    return refs;
}

#ifdef U_DEBUG_MEM

const char** uGetGlobalWeakNames()
{
    static const char* names[] =
    {
        NULL
    };

    return names;
}

#endif
