using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day4
{
    class C
    {        static void Main(string[] args)
        {
            double P, T, R;
            Principle:
            Console.WriteLine("Enter principle amount");
            bool X = double.TryParse(Console.ReadLine(), out P);
            if (!X) {
                goto Principle;
            }
            Rate:
            Console.WriteLine("Enter Rate");
            X = double.TryParse(Console.ReadLine(), out R);
             if (!X)
            {
                goto Rate;
            }
          Time:
            Console.WriteLine("Enter time");
            X = double.TryParse(Console.ReadLine(), out T);
            if (!X)
            {
                goto Time;
            }
            double SI;
            System.Func < double ,double ,double ,double > d1 = cal;
            SI =d1(P, T, R);
            Console.WriteLine("Simple Intrest is {0}",SI);

        }

        private static double cal(double P, double R, double T)
        {
            return (P * R * T) / 100;
        }
    }
}
/*3.	Use Func<> delegate to calculate simple interest. Calculate P,T,R from the console. 
 * Use TryParse to validate inputs.*/
