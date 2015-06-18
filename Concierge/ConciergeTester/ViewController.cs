using System;
using System.Drawing;
using UIKit;
using Concierge.iOS;

namespace ConciergeTester
{
    public partial class ViewController : UIViewController
    {
        UIButton buttonCall;

        public ViewController (IntPtr handle) : base (handle)
        {
        }

        public override void ViewDidLoad ()
        {
            base.ViewDidLoad ();
            // Perform any additional setup after loading the view, typically from a nib.
            buttonCall = new UIButton (UIButtonType.RoundedRect);
            buttonCall.SetTitle ("Call", UIControlState.Normal);
            buttonCall.SetTitleColor (UIColor.Black, UIControlState.Normal);
            buttonCall.BackgroundColor = UIColor.Red;
            buttonCall.AutosizesSubviews = true;
            var frame = new RectangleF ();
            frame.Size = new SizeF (100, 20);
            buttonCall.Frame = frame;
            buttonCall.Center = View.Center;
            buttonCall.TouchUpInside += (object sender, EventArgs e) => {
                Console.WriteLine (">>>> CLICKED");
                Concierge.iOS.Concierge.StartConiergeSession ();
            };
            View.AddSubview (buttonCall);
        }

        public override void ViewWillAppear (bool animated)
        {
            base.ViewWillAppear (animated);
            View.LayoutSubviews ();
        }

        public override void DidReceiveMemoryWarning ()
        {
            base.DidReceiveMemoryWarning ();
            // Release any cached data, images, etc that aren't in use.
        }
    }
}

