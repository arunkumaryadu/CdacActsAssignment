#include<iostream>
using namespace std;
class CA
{
	int x;
	int y;
public:
	CA(int x,int y):x(x),y(y)
	{
	}
	void India()
	{
		cout<<"India x="<<x<<endl;
	}
	void Bharath()
	{
		cout<<"Bharath y="<<y<<endl;
	}
};

typedef void (CA::*FPTR)();
void VendorBusiness(FPTR fp,CA& par)
{
	cout<<"Vendor Business started 123"<<endl;
	(par.*fp)();//callback
	cout<<"Vendor Business completed 123"<<endl;
}


void VendorBusinessNew(FPTR fp,CA* par)
{
	cout<<"Vendor Business started 123456"<<endl;
	(par->*fp)();//callback
	cout<<"Vendor Business completed 123456"<<endl;
}
//------------------------

class Smart
{
	CA *ptr;
	FPTR fptr;
public:
	Smart(int x,int y):ptr(new CA(x,y))
	{
	}
	CA* operator->()
	{
		return ptr;
	}
	Smart& operator->*(FPTR fp)
	{
		fptr=fp;
		return *this;
	}
	void operator()()
	{
		(ptr->*fptr)();
	}
	~Smart()
	{
		delete ptr;
	}
};

void ClientFlow(Smart & sm,FPTR fp)
{
	cout<<"Client Business started 123456"<<endl;
	(sm->*fp)();//callback
	cout<<"Client Business completed 123456"<<endl;
}


int main()
{
    CA obj1(111,222);
	FPTR fp=&CA::Bharath;
	//VendorBusiness(fp,obj1);
	//VendorBusinessNew(fp,&obj1);
	Smart sm1(11,22);
	ClientFlow(sm1,fp);
    return 0;
}