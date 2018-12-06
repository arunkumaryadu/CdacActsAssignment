using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day1_Assignment
{
    class D
    {
        static void Main(string[] args)
        {
            Student st = new Student(1, "arun", "Dac");
            st.Print();
        }  
       
    }

    internal class Student
    {
        private int rollno;
        private string name;
        private string course;
        

        public Student(int v1, string v2, string v3)
        {
            this.rollno = v1;
            this.name = v2;
            this.course = v3;
        }

        public void Print() {
            Console.WriteLine("rollno :"+this.rollno);
            Console.WriteLine("name :" + this.name);
            Console.WriteLine("course :" + this.course);
        }
    }
}
/*Create a class Student {roolno, name, course} Write print method. Write constructors.
*/