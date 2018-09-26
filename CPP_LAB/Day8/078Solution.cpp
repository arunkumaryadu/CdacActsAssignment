#include<iostream>
using namespace std;

class CA
{
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
	static CA* head;
public:
	
	void Display()
	{
		cout<<"CA Display"<<endl;
	}
	static CA* CreateCA()
	{
		if(head==NULL)
		{
			head=new CA();
		}
		return head;
	}
	static void ReleaseCA()
	{
		delete head;
		head=NULL;
	}
};
CA* CA::head=NULL;
class Smart
{
	CA* ptr;
	static int count;
	static void* operator new(size_t size)
	{
		return NULL;
	}
	static void* operator new[](size_t size)
	{
		return NULL;
	}
	static void operator delete(void *pv)
	{
	}
	static void operator delete[](void *pv)
	{
	}
public:
	Smart():ptr(CA::CreateCA())
	{
		count++;
	}
	CA*operator->()
	{
		return ptr;
	}
	Smart& operator=(Smart& par)
	{
		return *this;
	}
	~Smart()
	{
		if((--count)==0)
		{
			CA::ReleaseCA();
		}
	}
};
int Smart::count=0;
void main()//never change main
{
	Smart sm1;
	Smart sm2;
	Smart sm3;
	sm2->Display();
	sm2=sm3;
}
