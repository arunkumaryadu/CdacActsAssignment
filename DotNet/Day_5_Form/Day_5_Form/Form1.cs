using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Day_5_Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            MessageBox.Show("Your Form Is Loaded !!!!");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            label1.Text = txt1.Text;
            txt1.Text = "";
            label1.Font = new Font("Arial", 25);
            label1.ForeColor = System.Drawing.Color.Blue;
            label1.BackColor = System.Drawing.Color.Red;
        }
    }
}
