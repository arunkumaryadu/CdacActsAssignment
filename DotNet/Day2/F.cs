using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Day2
{
    class F
    {
       
        static void Main(string[] args)
        {
            Customer c1 = new Customer(1, "Arun", 9999);
            Console.WriteLine("Name is : "+c1.Name);
            //c1.Name="ujjwal";
            c1.ID = 55;
            //    Console.WriteLine("bfgbh"+c1.ID);
            Console.WriteLine("Contact is "+c1.Contact);
            c1.Contact = 666;
            Console.WriteLine("Contact is " + c1.Contact);
        }
    }
    public class Customer
    {
        private int custid, contact;
        private string custname;
        public Customer(int custid, string custname, int contact) {
            this.custid = custid;
            this.custname = custname;
            this.contact = contact;
        }
        public int ID
        {
           set
            {
                custid = value;
            }
        }
        public int Contact
        {
            set
            {
                contact = value;
            }
            get {
              return contact;
            }
        }
        public string Name
        {
            get
            {
                return custname;
            }            
        }
    }
}
/*
 . Create a class Customer [ custid, custname, contact] with private members. 
 Write properties to access the private members  and print Customer details.
     */
