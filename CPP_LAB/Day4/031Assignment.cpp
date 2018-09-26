#include<iostream>
using namespace std;
namespace nm031
{
class CA{
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
	static void Release(CA *ptr)
	{
		//business (log)
		delete ptr;
	}
	static CA* CreateCA()
	{
		//additional business
		return new CA();
	}
public:
	void fun()
	{
		cout<<"CA Fun"<<endl;
	}
	friend class SmartPointer;
};
void main031_1()
{
	//CA obj1;
	//CA *ptr=new CA();
	//delete ptr;
	//ptr->Release();
	//CA::Release(ptr);
}

void main031_2()
{
	//CA *ptr=CA::CreateCA();

	//ptr->fun();

	//CA::Release(ptr);
}

class SmartPointer//heap prohibited
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
	}
	static void operator delete[](void* pv)
	{
	}
	CA *ptr;
public:
	SmartPointer():ptr(CA::CreateCA())
	{
	}
	CA* operator->()
	{
		return ptr;
	}
	~SmartPointer()
	{
		delete ptr;
	}
};

void main()
{
	SmartPointer wrap;
	//wrap.operator->()->fun();
	wrap->fun();
}
}