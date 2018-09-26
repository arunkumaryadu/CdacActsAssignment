#include<iostream>
using namespace std;
namespace nm14
{
class CA
{
public:
	CA()
	{
	}
	virtual void fun()
	{
		cout<<"\t\CA::fun"<<endl;
	}
	void DoJob()
	{
		cout<<"\t\CA::DoJob"<<endl;
	}
};
class CB:public CA
{
	public:
	CB()
	{
	}
	virtual void fun()
	{
		cout<<"\t\CB::fun"<<endl;
	}
	void DoJob()
	{
		cout<<"\t\CB::DoJob"<<endl;
	}
};


void main()
{
	CB obj1;
	obj1.DoJob();
	obj1.fun();
	cout<<"_____________________"<<endl;
	CA obj2=obj1;
	obj2.DoJob();
	obj2.fun();
}
}