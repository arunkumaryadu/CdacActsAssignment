using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day4
{
    class B
    {
        public delegate int mydelegate(string str);
        static void Main(string[] args)
        {
            string str = "hi hello india is great";
            int i = CountWords(str);
            Console.WriteLine(  " no.of words="+(i));
            mydelegate md = CountWords;
       int j=     md(str);
            Console.WriteLine("print no.of words using delegates {0}",j);
           

            mydelegate md1 = delegate (string str1)
            {
                string[] arr = str1.Split(' ');
                return arr.Length;
            };
            int k = md1(str);
            Console.WriteLine("print no.of words using anonimous {0}", k);


            mydelegate md2 =  (str1) =>
            {
                string[] arr = str1.Split(' ');
                return arr.Length;
            };
            int l = md2(str);
            Console.WriteLine("print no.of words using lambda expression {0}", l);

        }
        

        private static int CountWords(string str)
        {
            string []arr = str.Split(' ');
            return arr.Length;
        }
    }
}
/*2.	Write a method to find number of words in string. Method should return number of words. 
 * Write delegate to access this function. Write anonymous method and lambda expressions also.*/
