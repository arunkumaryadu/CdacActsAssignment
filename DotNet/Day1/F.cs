using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class F
    {
        static void Main()
        {
            Console.WriteLine("Enter a number");
            int num = 0;
            try
            {
                num = int.Parse(Console.ReadLine());
            }
            catch (Exception)
            {

                Console.WriteLine("Please Enter An integer value ");
                F.Main();
            }
            int sumEven=0, sumOdd=0, sumPrime=0;
            for (int i = 1; i <= num; i++)
            {
                if (!F.IsPrime(i)) {
                    sumPrime += i;
                }
                if (i % 2 == 0)
                {
                    sumEven += i;
                }
                if (i % 2 != 0)
                {
                    sumOdd += i;
                }
               

            }
            Console.WriteLine("Sum of Prime Number is ="+(sumPrime-1));
            Console.WriteLine("Sum of Even Number is =" + sumEven);
            Console.WriteLine("Sum of Odd Number is =" + sumOdd);

        }
        public static bool IsPrime(int num)
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    return true;
                }

            }
            return false;
        }
       
    }
}
/*Read Integer n from console.Print sum of odd numbers, sum of even numbers, sum of prime numbers up to n.*/
