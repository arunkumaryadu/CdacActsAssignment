using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class E
    {
        static void Main(string[] args)
        {
            Student[] arr = new Student[4];
            arr[0] = new Student(1,"Arun",999);
            arr[2] = new Student(2, "ujjwal", 101);
            arr[3] = new Student(3, "Manish", 201);
            arr[1] = new Student(4, "anand", 301);

            foreach (var item in arr)
            {
                Console.WriteLine("====================================");
                item.Print();

            }
            Console.WriteLine("====================================");
        }
    }
    public class Student {
        int rollno, marks;
        string name;
        public Student(int _rollno,string _name,int _marks) {
            this.rollno = _rollno;
            this.name = _name;
            this.marks = _marks;
        }

        internal void Print()
        {
            Console.WriteLine("Roll Number is : "+rollno);
            Console.WriteLine("Name is : " + name);
            Console.WriteLine("Marks is : " + marks);
        }
    }
}
/*
 
     . Create a Student class [roolno, name, marks]. Create array of students. And print the details.
     */
