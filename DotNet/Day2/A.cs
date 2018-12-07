using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    using AD =SalesProject.Team_A;
    using BD =SalesProject.Team_B;
    class A
    {
        static void Main(string[] args)
        {
            AD.S s1 = new AD.S();
            s1.print();
            BD.S s2 = new BD.S();
            s2.print();


        }
    }
}
namespace SalesProject
{
    namespace Team_A{
        class S {
            public void print() {
                Console.WriteLine("SalesProject / Team_A/s");
            }
        }
}
    namespace Team_B{
        class S
        {
            public void print()
            {
                Console.WriteLine("SalesProject / Team_B/s");
            }
        }
    }
}
/*Team-A and Team-B are working under SalesProject. Create SalesProject namespace.Team-A and 
 * TeamB namespace in SalesProject. Create classes with same name in both namespace and use
 *  namespace aliasing to call the methods in both namespaces.
*/
