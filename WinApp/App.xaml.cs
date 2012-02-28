using System;
using System.Threading.Tasks;
using Windows.ApplicationModel.Activation;
using Windows.UI.Xaml;
using FFMpeg;

namespace WinApp
{
    partial class App
    {
        public App()
        {
            InitializeComponent();
            LangSample ls = new LangSample();
        }

        protected override void OnLaunched(LaunchActivatedEventArgs args)
        {
            Window.Current.Content = new MainPage();
            Window.Current.Activate();
        }
    }
}
