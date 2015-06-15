public partial class NavButton: Fuse.Controls.Panel
{
    static NavButton()
    {
    }
    public NavButton()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
    }
}
public partial class MainView: Fuse.App
{
    internal sealed class Fuse_Drawing_SolidColor_float4_Color_Property: Uno.UX.Property<float4>
    {
        Fuse.Drawing.SolidColor _obj;
        public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj): base(0) { _obj = obj; }
        protected override float4 OnGet() { return _obj.Color; }
        protected override void OnSet(float4 v) { _obj.Color = v; }
    }
    public partial class Template: Uno.UX.Template<Fuse.Controls.Text>
    {
        internal readonly MainView __parent;
        public Template(MainView parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Text self)
        {
            self.SetStyleAlignment(Fuse.Elements.Alignment.Center);
            self.SetStyleTextColor(float4(1f, 1f, 1f, 1f));
            self.SetStyleFontSize(20f);
            self.SetStyleFont(Fuse.BasicTheme.BasicTheme.RobotoRegular);
        }
    }
    public partial class Template1: Uno.UX.Template<NavButton>
    {
        internal readonly MainView __parent;
        public Template1(MainView parent)
        {
            __parent = parent;
        }
        Fuse_Drawing_SolidColor_float4_Color_Property _buttonColor_Color_inst;
        internal Fuse.Drawing.SolidColor _buttonColor;
        internal Fuse.Animations.Change<float4> _buttonColorPressing;
        static Template1()
        {
        }
        protected override void OnApply(NavButton self)
        {
            var _buttonColor = new Fuse.Drawing.SolidColor();
            _buttonColor_Color_inst = new Fuse_Drawing_SolidColor_float4_Color_Property(_buttonColor);
            var temp = new Fuse.Shapes.Rectangle();
            var temp1 = new Fuse.Gestures.Pressing();
            var _buttonColorPressing = new Fuse.Animations.Change<float4>(_buttonColor_Color_inst);
            temp.Fills.Add(_buttonColor);
            _buttonColor.Color = float4(0.3647059f, 0.3254902f, 0.3215686f, 1f);
            temp1.Animators.Add(_buttonColorPressing);
            _buttonColorPressing.Value = float4(0.2392157f, 0.2156863f, 0.2117647f, 1f);
            _buttonColorPressing.Duration = 0.1;
            self.SetStyleAppearance(temp);
            self.AddStyleBehavior(temp1);
        }
    }
    public partial class Template2: Uno.UX.Template<Fuse.Controls.Image>
    {
        internal readonly MainView __parent;
        public Template2(MainView parent)
        {
            __parent = parent;
        }
        static Template2()
        {
        }
        protected override void OnApply(Fuse.Controls.Image self)
        {
            self.SetStyleMargin(float4(0f, 5f, 0f, 5f));
        }
    }
    public partial class Template3: Uno.UX.Template<Fuse.Controls.Image>
    {
        internal readonly MainView __parent;
        public Template3(MainView parent)
        {
            __parent = parent;
        }
        static Template3()
        {
        }
        protected override void OnApply(Fuse.Controls.Image self)
        {
            self.SetStyleMargin(float4(0f, 5f, 0f, 5f));
        }
    }
    internal Fuse.Controls.StackPanel PhotoCol1;
    internal Fuse.Controls.StackPanel PhotoCol2;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        var temp = new Fuse.Controls.DockPanel();
        var temp1 = new Fuse.Controls.StatusBarBackground();
        var temp2 = new Fuse.Controls.Grid();
        var temp3 = new Fuse.Controls.NavigationBar();
        var temp4 = new Fuse.Layouts.GridLayout();
        var temp5 = new Fuse.Style();
        var temp6 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp7 = new Template1(this) { Cascade = false, AffectSubtypes = true };
        var temp8 = new NavButton();
        var temp9 = new Fuse.Controls.Text();
        var temp10 = new NavButton();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new NavButton();
        var temp13 = new Fuse.Controls.Text();
        var temp14 = new NavButton();
        var temp15 = new Fuse.Controls.Text();
        var temp16 = new Fuse.Controls.ScrollViewer();
        var temp17 = new Fuse.Controls.Grid();
        PhotoCol1 = new Fuse.Controls.StackPanel();
        var temp18 = new Fuse.Style();
        var temp19 = new Template2(this) { Cascade = true, AffectSubtypes = true };
        PhotoCol2 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Style();
        var temp21 = new Template3(this) { Cascade = true, AffectSubtypes = true };
        this.ClearColor = float4(0.8901961f, 0.8901961f, 0.8901961f, 1f);
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        temp.Children.Add(temp16);
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp2.RowCount = 1;
        global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.Grid.SetRow(temp2, 1);
        temp2.Children.Add(temp3);
        temp3.Layout = temp4;
        temp3.Children.Add(temp8);
        temp3.Children.Add(temp10);
        temp3.Children.Add(temp12);
        temp3.Children.Add(temp14);
        temp3.Styles.Add(temp5);
        temp4.RowCount = 1;
        temp4.ColumnCount = 4;
        temp5.Templates.Add(temp6);
        temp5.Templates.Add(temp7);
        temp8.Children.Add(temp9);
        temp9.Content = "Home";
        temp10.Children.Add(temp11);
        temp11.Content = "People";
        temp12.Children.Add(temp13);
        temp13.Content = "Dict.";
        temp14.Children.Add(temp15);
        temp15.Content = "Search";
        temp16.Content = temp17;
        temp17.ColumnCount = 2;
        temp17.Children.Add(PhotoCol1);
        temp17.Children.Add(PhotoCol2);
        PhotoCol1.Width = 100f;
        PhotoCol1.WidthUnit = Fuse.Elements.SizeUnit.Percent;
        PhotoCol1.Margin = float4(10f, 10f, 5f, 0f);
        PhotoCol1.Styles.Add(temp18);
        temp18.Templates.Add(temp19);
        PhotoCol2.Width = 100f;
        PhotoCol2.WidthUnit = Fuse.Elements.SizeUnit.Percent;
        PhotoCol2.Margin = float4(5f, 10f, 10f, 0f);
        PhotoCol2.Styles.Add(temp20);
        temp20.Templates.Add(temp21);
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.RootNode = temp;
    }
}
