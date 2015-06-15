public partial class MineralPhotos: Fuse.Controls.DockPanel
{
    internal Fuse.Controls.Image MineralImage;
    static MineralPhotos()
    {
    }
    public MineralPhotos()
    {
        InitializeUX();
    }
    internal void InitializeUX()
    {
        MineralImage = new Fuse.Controls.Image();
        MineralImage.StretchSizing = Fuse.Elements.StretchSizing.Zero;
        MineralImage.Margin = float4(0f, 0f, 0f, 0f);
        global::Fuse.Controls.DockPanel.SetDock(MineralImage, Fuse.Layouts.Dock.Left);
        this.Children.Add(MineralImage);
    }
}
