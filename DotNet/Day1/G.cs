using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class G
    {
        static void Main(string[] args)
        {
            int[] arr = { 9, 8, 7, 6, 6, 5, 1 };
            int temp;
            for (int i = 0; i < arr.Length; i++)
            {

                for (int j = 0; j <= i; j++)
                {
                    if (arr[j] > arr[i])
                    {
                        temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }

                }



            }
            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine(arr[i]);

            }
        }
    }
}
/*Create an array of integers.Write metthod to sort the array and print the result.*/