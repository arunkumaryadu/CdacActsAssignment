using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class G
    {
        static void Main(string[] args)
        {
            string str = "Hello ujjwal how are you?";
           int wc= CountWord(str);
            Console.WriteLine("total number of word in "+str+" is "+wc);
        }

        private static int CountWord(string str)
        {
            string[] arr = str.Split(' ');
            return arr.Length;
        }
    }
}
