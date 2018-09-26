#include<iostream>
using namespace std;
/*
class CA
{
public:
	virtual void fun1()
	{
		cout<<"CA::fun1"<<endl;
	}
	virtual void fun2()
	{
		cout<<"CA::fun2"<<endl;
	}
	void fun3()
	{
		cout<<"CA::fun3"<<endl;
	}
};

void main()
{
	CA obj;
	//cout<<sizeof(obj)<<endl;
	//((void(*)())*(long*)*(long*)&obj)();
	//step 1 Reach the vptr
	long* vptr=(long*)&obj;
	//step 2 reach the vtable
	long * vtable=(long*)*vptr;
	//step 3 reach the function
	typedef void (*FPTR)();
	FPTR fp=(FPTR)vtable[0];
	//step 4 call back
	fp();
	((FPTR)vtable[1])();
}
*/