using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class B
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
                B.Main();
            }
            int high = B.highestDivisible(num);
            int low = B.LowestDivisible(num);
            if (high == 0)
            {
                Console.WriteLine("You Enter A prime Number!!!");
            }
            else {
                Console.WriteLine("Highest Divisible is "+high);
                Console.WriteLine("Lowest Divisible is " + low);
            }
        }
        public static int highestDivisible(int num) {
            for (int i = num-1; i > 1; i--)
            {
                if (num%i==0)
                {
                    return i;
                }
            }
            return 0;
        }
        public static int LowestDivisible(int num)
        {
            for (int i =2; i <num; i++)
            {
                if (num % i == 0)
                {
                    return i;
                }
            }
            return 0;
        }
    }
}/*
Read an integer from the console.
Find the lowest and highest divisible of a number.
e.g  3 is lowest divisible number for 9
e.g  7 is highest divisible number for 14
*/