using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day4
{
    class A
    {
        static void Main(string[] args)
        {
            Student st = new Student();
            st.Name = "Arun";
            st.RollNo = 19;
            st.Marks = 100;
            double m=st.Marks;
        }
    }

    internal class Student
    {
        int rollno;
        string name;
        double marks;
        public double Marks { get {
                return marks;
            }  set {
                marks = value;
            } }
        public string Name { get {
                return name;
            } internal set {
                name = value;
            } }
        public int RollNo { get {
                return rollno;
            } set {
                rollno = value;
            } }
    }
}
/*1.	Create a class Student {int roolno, string name, double marks}. 
 * Write properties for roolno, name,  marks. Write method to calculate average score.
 *  Use reflection to print property details, Constructor, Fields, method details and
 *   also parameters etc.
*/