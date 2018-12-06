using System;

namespace Day1_Assignment
{
    class A
    {
        static void Main() {
            Console.WriteLine("Enter a number");
            int num=0;
            try
            {
                 num = int.Parse(Console.ReadLine());
            }
            catch (Exception)
            {

                Console.WriteLine("Please Enter An integer value ");
                 A.Main();
            }
           
            for (int j = 2; j < num; j++)
            {
                 if (!IsPrime(j)) {
                     Console.WriteLine(j);
                 }

            }
            
        }
        public static bool IsPrime(int num) {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0) {
                    return true;
                }

            }
            return false;
        }
    }
}
/*Read a number from console and print all prime numbers up to that number.
*/