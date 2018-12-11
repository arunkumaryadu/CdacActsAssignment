using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Day_5_Form
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form1 ff = new Form1();
            ff.Show();
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            lstb1.Items.Add(txt1.Text);
            txt1.Text = "";

            progressBar1.Value++;

        }

        private void Form2_Load(object sender, EventArgs e)
        {
            progressBar1.Maximum = 10;
            progressBar1.Minimum = 0;
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            listView1.View = View.Details;

            listView1.Columns.Add("RollNo", 50);
            listView1.Columns.Add("Name", 70);
            ListViewItem itm;
            string[] arr = new string[3];

            arr[0] = "19";
            arr[1] = "Arun";
            itm = new ListViewItem(arr);
            listView1.Items.Add(itm);
            arr[0] = "106";
            arr[1] = "Ujjwal";
            itm = new ListViewItem(arr);

            listView1.Items.Add(itm);

        }

        private void btn4_Click(object sender, EventArgs e)
        {
            StreamReader sr = new StreamReader(@"D:\DAC47\Arun19\DotNetFramework\Day_5_Form\test.txt", false);
          label1.Text = sr.ReadToEnd();

        }
    }
}
