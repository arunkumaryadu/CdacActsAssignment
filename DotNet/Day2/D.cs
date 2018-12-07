using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class D
    {
        static void Main()
        {
            Console.WriteLine("Please Enter a number...");
            int num=0,sq,cube;
            try
            {
                num = int.Parse(Console.ReadLine());
            }
            catch (Exception)
            {
                Console.WriteLine("Please Enter a number");
                D.Main();
            }
            getSqureCube(num,out sq,out cube);
            Console.WriteLine("Number is : "+num);
            Console.WriteLine("Squre of Number is : " + sq);
            Console.WriteLine("Cube of Number is : " + cube);
        }

        public static void getSqureCube(int num, out int sq, out int cube)
        {
            sq = num * num;
            cube = sq * num;
        }
    }
}
/*. Read a number from the console. Pass it to a function. Find the square and cube of the number
 *  and return square and cube of the number. Use out parameters.
*/