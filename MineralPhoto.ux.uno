using Uno;
using Fuse;
using Fuse.Triggers;
using Fuse.Controls;
using Fuse.Gestures;
using Fuse.Resources;

public partial class MineralPhoto
{
	public ImageSource Cover
	{
		get {return MineralImage.Source;}
		set {MineralImage.Source = value;}
	}
}
