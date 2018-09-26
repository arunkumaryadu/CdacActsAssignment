#include<iostream>
using namespace std;
namespace nm028
{
class CA
{
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	void fun()
	{
		cout<<"CA fun"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};
void main028_1()
{
	CA *ptr=(CA*)malloc(sizeof(CA));
	ptr->CA::CA();

	ptr->fun();

	ptr->CA::~CA();
	free(ptr);
}


void main028_2()
{
	CA *ptr=new CA();
	/*
	
	push	1
	call	??2@YAPAXI@Z				; operator new
	add	esp, 4
	
	call	??0CA@@QAE@XZ				; CA::CA
	
	*/

	ptr->fun();

	delete ptr;
}



class CB
{
public:
	static void* operator new(size_t size)
	{
		cout<<"CB::operator New"<<endl;
		return malloc(size);;
	}
	static void operator delete(void* pv)
	{
		cout<<"CB::operator delete"<<endl;
		free(pv);
	}
	CB()
	{
		cout<<"CB Ctor"<<endl;
	}
	void fun()
	{
		cout<<"CB fun"<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor"<<endl;
	}
};

void main()
{
	CB *obj=new CB();
	cout<<"_________________"<<endl;
	delete obj;
}
}