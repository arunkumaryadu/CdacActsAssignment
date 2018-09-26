#include<iostream>
using namespace std;

namespace nm071
{
class CA
{
public:
	CA()
	{
		cout<<"CA Ctor   at "<<this<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor for "<<this<<endl;
	}
};


void main71_1()//normal new (technical Error)
{
	CA *ptr=new CA();

	delete ptr;
}

void main71_2() //actual way of using new normal
{
	CA *ptr=NULL;
	try
	{
		ptr=new CA();

	}
	catch(bad_alloc & exp)
	{
		cout<<exp.what()<<endl;
	}
	

		if(ptr!=NULL)//if(ptr)
		{
			delete ptr;
		}
}


void main71_3() //nothrow return NULL
{
	CA *ptr=new(nothrow) CA();
	
	if(ptr!=NULL)
		delete ptr;
}



void main71_4()//placement new
{
	int *buffer=new int[1000];
	cout<<"buffer="<<buffer<<endl;
	//CA *ptr=new CA();
	CA *ptr=new(buffer) CA();
	CA *ptr1=new(buffer+1) CA();
	CA *ptr2=new(buffer+2) CA();
	CA *ptr3=new(buffer+3) CA();

	cout<<"__________________________"<<endl;
	ptr->CA::~CA();
	ptr1->CA::~CA();
	ptr2->CA::~CA();
	ptr3->CA::~CA();
	delete [] buffer;
}



class CB
{
public:
	CB()
	{
		cout<<"CB Ctor   at "<<this<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor for "<<this<<endl;
	}
	static void* operator new(size_t size)
	{
		cout<<"operator new()"<<endl;
		return malloc(size);
	}

	static void* operator new(size_t size,int x,int y)
	{
		cout<<"operator new(x,y)"<<endl;
		return malloc(size);
	}
};

void main()//custom new
{
	CB *ptr=new CB();
	CB *ptr1=new(10,20) CB();


	delete ptr;
	delete ptr1;
}
}