===============================================================================================
Need Of Constructors : 
===============================================================================================
To initialize an object (data member).
To call super class constructors.

===============================================================================================
===============================================================================================
Mutator Function 
========================================================================================================
Mutator is a member function which allows manipulating the contents of private or protected data member of a class outside 
the class. It is also called Setter.

Does not return any value.

It receives one argument and data member gets that value.

Its name should start with “Set” prefix.

class MyClass
{
     private:
          int id;
     public:          
          // creating mutator/setter for data member id. 
          int SetId(int x) // data type is int as for id it is int.
          {
               id=x;
          }
};

============================================================================================================
============================================================================================================
Mutable Keyword :
==========================================

Sometimes there is requirement to modify one or more data members of class / struct through const 
function even though you don’t want the function to update other members of class / struct. This 
task can be easily performed by using mutable keyword.

The keyword mutable is mainly used to allow a particular data member of const object to be modified. 

Adding mutable to a variable allows a const pointer to change members.

mutable is particularly useful if most of the members should be constant but a few need to be updateable.

Data members declared as mutable can be modified even though they are the part of object declared as const. 

You cannot use the mutable specifier with names declared as static or const, or reference.

#include <iostream>
using std::cout;
 
class Test {
public:
  int x;
  mutable int y;
  Test() { x = 4; y = 10; }
};
int main()
{
    const Test t1;
    t1.y = 20;
    cout << t1.y;     // print 20
    return 0;
}

=========================================================
Suppose you go to hotel and you give the order to waiter to bring some food dish. After giving order, 
you suddenly decide to change the order of food. Assume that hotel provides facility to change the 
ordered food and again take the order of new food within 10 minutes after giving the 1st order.
After 10 minutes order can’t be cancelled and old order can’t be replaced by new order. 
See the following code for details.

class Customer
{
    char name[25];
    mutable char placedorder[50];
    int tableno;
    mutable int bill;
public:
    Customer(char* s, char* m, int a, int p)
    {
        strcpy(name, s);
        strcpy(placedorder, m);
        tableno = a;
        bill = p;
    }
    void changePlacedOrder(char* p) const
    {
        strcpy(placedorder, p);
    }
    void changeBill(int s) const
    {
        bill = s;
    }
    void display() const
    {
        cout << "Customer name is: " << name << endl;
        cout << "Food ordered by customer is: " << placedorder << endl;
        cout << "table no is: " << tableno << endl;
        cout << "Total payable amount: " << bill << endl;
    }
};
 
int main()
{
    const Customer c1("Pravasi Meet", "Ice Cream", 3, 100);
    c1.display();
    c1.changePlacedOrder("GulabJammuns");
    c1.changeBill(150);
    c1.display();
    return 0;
}

Output:

Customer name is: Pravasi Meet
Food ordered by customer is: Ice Cream
table no is: 3
Total payable amount: 100
Customer name is: Pravasi Meet
Food ordered by customer is: GulabJammuns
table no is: 3
Total payable amount: 150 

==================================================================================================
==================================================================================================

Const member function (Inspector) :
=============================================
A function becomes const when const keyword is used in function’s declaration.
The idea of const functions is not allow them to modify the object on which they are called. 

class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
     
    // We get compiler error if we add a line like "value = 100;"
    // in this function.
    int getValue() const {return value;}  
};
 
int main() {
    Test t(20);
    cout<<t.getValue();
    return 0;
}

When a function is declared as const, it can be called on any type of object. 
Non-const functions can only be called by non-const objects.

class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
    int getValue() {return value;}
};
 
int main() {
    const Test t;
    cout << t.getValue();
    return 0;
}

Output:
 passing 'const Test' as 'this' argument of 'int 
Test::getValue()' discards qualifiers


==============================================================================================
==============================================================================================
Initialize Object :
=============================================

// default constructor
complx() : re(0), im(0) { }

// copy constructor
  complx(const complx& c) { re = c.re; im = c.im; }


// constructor with default  trailing argument
  complx( double r, double i = 0.0) { re = r; im = i; }

// By function call
