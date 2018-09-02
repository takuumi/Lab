using System;
using System.Windows.Forms;

namespace WebBrowzer
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            webBrowserTest.Navigate(System.IO.Directory.GetCurrentDirectory() + "\\htmlTest\\HTML\\LD_LDP.html#LD");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            webBrowserTest.Navigate(System.IO.Directory.GetCurrentDirectory() + "\\htmlTest\\HTML\\LD_LDP.html#LDP");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            webBrowserTest.Navigate(System.IO.Directory.GetCurrentDirectory() + "\\htmlTest\\ThreeJs\\study6_Parallel\\index7.html");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            webBrowserTest.Navigate(System.IO.Directory.GetCurrentDirectory() + "\\htmlTest\\ThreeJs\\study5_physijs\\index1.html");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            webBrowserTest.Navigate(System.IO.Directory.GetCurrentDirectory() + "\\htmlTest\\ThreeJs\\study7_JQuery\\index.html");
        }



    }
}
