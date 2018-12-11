using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day4
{
    class J
    {
        static void Main(string[] args)
        {
            ThreeDim a = new ThreeDim(40, 50, 60);
            ThreeDim b = new ThreeDim(10, 20, 30);
            ThreeDim c = a + b;
            Console.WriteLine("Sum of ");
            a.print();
            Console.WriteLine("And ");
            b.print();
            Console.WriteLine("Is");
            c.print();
            Console.WriteLine("=================================================");
            Console.WriteLine("Subtraction of ");
            a.print();
            Console.WriteLine("And ");
            b.print();
            Console.WriteLine("Is");
            c = a - b;
            c.print();
            Console.WriteLine("=================================================");
            Console.WriteLine("After Pre Increment of ");
            a.print();
            Console.WriteLine("Is");
             ++a;
            a.print();
            Console.WriteLine("=================================================");
            Console.WriteLine("After Post Increment of ");
            a.print();
            Console.WriteLine("Is");
            c=a++;
            c.print();
            a.print();
            Console.WriteLine("=================================================");

            Console.WriteLine("Check < ");
            a.print();
            Console.WriteLine("Is less than");
            b.print();
            Console.WriteLine(a<b);
            Console.WriteLine("=================================================");
            Console.WriteLine("Check > ");
            a.print();
            Console.WriteLine("Is greater than");
            b.print();
            Console.WriteLine(a > b);
            Console.WriteLine("=================================================");


        }
    }
    class ThreeDim {
        
       private int x, y, z;

        public ThreeDim(int v1, int v2, int v3)
        {
            x = v1;
            y = v2;
            z = v3;
        }

        internal void print()
        {
            Console.WriteLine("x = " + x+ " y = " + y+ " z = " + z);
           
        }

        public static ThreeDim operator +(ThreeDim a, ThreeDim b) {
            return new ThreeDim(a.x+b.x,a.y+b.y,a.z+b.z);
        }
        public static ThreeDim operator -(ThreeDim a, ThreeDim b)
        {
            return new ThreeDim(a.x - b.x, a.y - b.y, a.z - b.z);
        }
        public static ThreeDim operator ++(ThreeDim a)
        {
            return new ThreeDim(a.x +1, a.y +1, a.z +1);
        }
        public static bool operator <(ThreeDim a,ThreeDim b)
        {
             if(a.x<b.x && a.y<b.y && a.z < b.z)
            {
                return true;
            }
            return false;
        }
        public static bool operator >(ThreeDim a, ThreeDim b)
        {
            if (a.x > b.x && a.y > b.y && a.z > b.z)
            {
                return true;
            }
            return false;
        }
    }
}
/*10.	Create a class ThreeDim{int x, int y, int z}.
 *      Use operator overloading to overload operators + -,  ++, <
 
     */
