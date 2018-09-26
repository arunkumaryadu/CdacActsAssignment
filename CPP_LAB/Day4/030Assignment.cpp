#include<iostream>
using namespace std;
namespace nm030
{
class CA
{
	static void* operator new(size_t size)
	{
		
		return NULL;
	}
	static void* operator new[](size_t size)
	{
		return NULL;
	}
	static void operator delete(void* pv)
	{
		//do nothing
	}
	static void operator delete[](void* pv)
	{
		//do nothing
	}
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	void fun()
	{
		cout<<"CA Fun"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};

void main()
{
	CA obj1;

	/*CA *ptr=new CA();
	CA *ptr1=new CA[5];

	delete ptr;

	delete [] ptr1;*/
}
}