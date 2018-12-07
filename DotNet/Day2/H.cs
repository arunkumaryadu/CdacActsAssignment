using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    static class H
    {
        static void Main(string[] args)
        {
            double d = 100;
            Console.WriteLine("Reciprocal of "+d+" is "+ GetReciprocal(d));
        }
        static double GetReciprocal(this double d) {
            return 1.0 / d;
        }
    }
}
/*Write extension method to find reciprocal, absolute value
*/