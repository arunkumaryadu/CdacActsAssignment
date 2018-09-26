#include<iostream>
using namespace std;
namespace nm058
{
class CA
{
	int x;
public:
	CA(int x):x(x)//1
	{
	}
	friend ostream& operator<<(ostream & os,CA & ob)
	{
		os<<"x="<<ob.x<<endl;
		return os;
	}
	operator int*(){ // 5
		cout<<"Apple"<<endl;
	    return &x;
	}

	operator CA*() //3 
	{
		cout<<"Orange"<<endl;
		return this;
	}

};

void DoJob(CA *pt)  // 2
{
	cout<<"Pine"<<endl;  // 4
	int *p=(*pt);  //5
	*p=888;  // 6
}

void main58_1()
{
	CA obj(100);


	int *pt=obj;
	*pt=999;
	//operator<<(cout,obj);


	CA *ptr1=obj;

	cout<<obj;
}

void main()
{
	CA obj(1000);

	DoJob(obj);

	cout<<obj;
}
/* 
 Orange
 pine
 Apple
 x=888
*/
}