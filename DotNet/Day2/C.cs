using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class C
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 4, 5, 6 };
            Console.WriteLine("Before Calling the Method ");
            foreach (var item in arr)
            {
                Console.WriteLine(item);
            }
            PassingArray(arr);
            Console.WriteLine("After Calling the Method ");
            foreach (var item in arr)
            {
                Console.WriteLine(item);
            }
        }
        public static void PassingArray(int[] data) {
            for (int i = 0; i < data.Length; i++)
            {
                data[i] = data[i] * data[i];
            }
        }
      
    }
}
/*. Write a method with array of int as method parameter and calculate 
 * square of each element of the array and return. Print input array and output array.
*/