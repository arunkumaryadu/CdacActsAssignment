using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace For_D
{
    public class Class1
    {
        public double GetFractional(double num)
        {
            int a = Convert.ToInt32(Math.Floor(num));
            return (num - a);
        }
        public double GetAbsoluteValue(double d)
        {
            return Math.Round(d);

        }

        public bool IsPrime(int num)
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
        public bool IsEven(int num)
        {
            if (num % 2 == 0) {
                return true;
            }
            return false;
        }
       }
}
/*4.	Create a class library. Library should contain functions to fine
1.	Get absolute value
2.	Get Factorial
3.	Check whether number is prime
4.	Check integer is odd or even.
*/