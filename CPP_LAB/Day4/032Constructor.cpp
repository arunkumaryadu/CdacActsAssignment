#include<iostream>
using namespace std;
namespace nm032{
class CA{
public:
	static void* operator new(size_t size)
	{
		cout<<"CA::operator New"<<endl;
		return malloc(size);;
	}
	static void operator delete(void* pv)
	{
		cout<<"CA::operator delete"<<endl;
		free(pv);
	}
	CA()
	{
		cout<<"CA Ctor"<<endl;
		throw 400;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};

void main()
{
	CA *obj=NULL;

	try
	{
		obj=new CA();	
		/*
		CA *temp=operator new()
		{
		}
		try
		{
			temp->CA::CA();
		}
		catch(...)
		{
			CA::operator delete(temp);
			throw
		}
		obj=temp;
		*/
	}
	catch(int exp)
	{
		cout<<"int exp="<<exp<<endl;
	}
	if(obj==NULL)
	{
		cout<<"Apple"<<endl;
	}
	else
	{
		cout<<"Orange"<<endl;
		delete obj;
	}
}
}