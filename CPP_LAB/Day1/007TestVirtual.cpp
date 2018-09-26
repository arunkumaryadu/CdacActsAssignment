#include<iostream>
using namespace std;

class CA
{
public:
	virtual void fun1()
	{
		cout<<"\t\tCA::fun1"<<endl;
	}
	virtual void fun2()
	{
		cout<<"\t\tCA::fun2"<<endl;
	}
	void fun3()
	{
		cout<<"\t\tCA::fun3"<<endl;
	}
};
class CB :public CA
{
public:
	virtual void fun4()
	{
		cout<<"\t\tCB::fun4"<<endl;
	}
	virtual void fun2()
	{
		cout<<"\t\tCB::fun2"<<endl;
	}
};
void main()
{
	CA obj;
	CB obj1;
	long *vptr1=(long*)&obj;
	long *vptr2=(long*)&obj1;
	long *vtable1=(long*)*vptr1;
	long *vtable2=(long*)*vptr2;
	
	cout<<"CA::VFTABLE="<<vtable1<<endl;
	((void(*)())vtable1[0])();
	((void(*)())vtable1[1])();

	cout<<"CB::VFTABLE="<<vtable2<<endl;
	((void(*)())vtable2[0])();
	((void(*)())vtable2[1])();
	((void(*)())vtable2[2])();
}