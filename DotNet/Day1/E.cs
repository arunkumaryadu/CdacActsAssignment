using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class E
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
                E.Main();
            }
            if (num < 2)
            {
                Console.WriteLine("Fales");
            }
            else {
                Console.WriteLine(!IsPrime(num));
            }
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
/*Write a method to check number is prime number or not. Return true if number is   
 *  prime numbr, else return false.*/
