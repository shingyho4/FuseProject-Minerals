using Uno;
using Uno.Data.Json;
using Fuse;
using Fuse.Triggers;
using Fuse.Controls;
using Fuse.Gestures;
using Fuse.Resources;
using System;
using System.IO;

class Photo
{
	public BundleFile URL;
	public string Description;
	public string Ext_Caption;

	public Photo(BundleFile url, string desc, string ext_cap)
	{
		URL = url;
		Description = desc;
		Ext_Caption = ext_cap;
	}
}

public partial class MainView
{
	
	Photo[] _photos = new[] 
	{
		new Photo(import BundleFile("images/02.jpg"), "hoho", "ext hoho"),
	};

	public MainView()
	{
		InitializeUX();

		foreach (var photo in _photos)
		{
			var ui = new MineralPhoto
			{
				Cover = new BundleFileImageSource(photo.URL),
			};

			PhotoCol1.AddChild(ui);
		}
	}
	
}
