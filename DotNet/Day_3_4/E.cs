using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day4
{
    enum color { Green, Orange, Red, Yellow }
    class E
    {
        static void Main(string[] args)
        {
            Fruit[] arr = new Fruit[3] {
            new Fruit { Name="apple",FruitColor=color.Red},
            new Fruit { Name="banana",FruitColor=color.Yellow},
            new Fruit { Name="grapes",FruitColor=color.Green},
            };
            foreach (var item in arr)
            {
                item.Print();
            }
        }
    }
    class Fruit {
        string name;
        color fruit_color;
        public string Name { get {
                return name;
            }set {
                name = value;
            } }
        public color FruitColor
        {
            get
            {
                return fruit_color;
            }
            set
            {
                fruit_color = value;
            }
        }
        public void Print()
        {
            Console.WriteLine("name : "+ Name);
            Console.WriteLine("fruit_color : " + FruitColor);

        }
        
    }
}
/*5.	Create enum Color. Create Fruit class {name, fruit_color}.
 * 
 *  Use enum to set fruit_color.
 *  
 *   Create array of fruit class objects and print details.*/
