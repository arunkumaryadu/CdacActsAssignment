using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class B
    {
        static void Main(string[] args)
        {
            try
            {
                Console.WriteLine("Absolute value of 5.597" + MyMath.GetAbsoluteValue(5.597));
                
                Console.WriteLine("5 is prime " +!( MyMath.IsPrime(5)));
                Console.WriteLine("Reverse value of 123 is" + MyMath.ReverseInteger(123));
                Console.WriteLine("Fractional value of 5.59 is" + MyMath.GetFractional(5.59));
            }
            catch (Exception)
            {

                throw;
            }
        }
    }
    static  class MyMath {
        public static double GetAbsoluteValue(double d) {
           return Math.Round(d);

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

        public static string ReverseInteger(int num) {
            string x = num.ToString();
            char[] arr=x.ToCharArray();
            Array.Reverse(arr);
            string y =String.Join("",arr);
            return y;
        }
        public static double GetFractional(double num) {
            int a = Convert.ToInt32(Math.Floor(num));
            return (num-a);
        }
    }
    

}
/*. Write a static class with following methods.
	. Write a static class with following methods.
	Get Absolute value of a number;
	Check whether the number is prime
	Reverse integer (for eg. Input = 198 output = 891)
	Get the fractional part of decimal number
 of a number;
	Check whether the number is prime
	Reverse integer (for eg. Input = 198 output = 891)
	Get the fractional part of decimal number
*/