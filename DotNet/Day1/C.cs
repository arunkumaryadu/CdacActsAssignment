using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class C
    {
        static void Main()
        {
            Console.WriteLine("Enter a number");
            Double P = 0, R = 0,T=0;
            try
            {
                Console.WriteLine("Enter Principle");
                P = Double.Parse(Console.ReadLine());
                Console.WriteLine("Enter Rate");
                R = Double.Parse(Console.ReadLine());
                Console.WriteLine("Enter Time");
                T = Double.Parse(Console.ReadLine());
            }
            catch (Exception)
            {

                Console.WriteLine("Please Enter An integer value ");
                C.Main();
            }

            Console.WriteLine((P*R*T)/100);
        }
    }
}
/*
 * .    Write a program to calculate simple interest. Read P,T.R from console.
              I = (Principle * Time * Rate of interest )/ 100
*/