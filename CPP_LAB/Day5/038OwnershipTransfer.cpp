#include<iostream>
using namespace std;
namespace nm038
{
class CA
{
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	
	~CA(){
		cout<<"CA Dtor"<<endl;
	}
	
	
public:
	void Fun()
	{
		cout<<"CA Fun"<<endl;
	}
	friend class Smart;
};
class Smart
{
	CA *ptr;
public:
	Smart():ptr(new CA())
	{
	}
	Smart(Smart& par):ptr(par.ptr)
	{
		par.ptr=NULL;
	}
	Smart& operator=(Smart &par)
	{
		this->ptr=par.ptr;
		par.ptr=NULL;
		return *this;
	}
	CA* operator->()
	{
		return ptr;
	}
	~Smart()
	{
		delete ptr;
	}
};

void main()
{
	Smart sm1;
	sm1->Fun();
	Smart sm2(sm1);
	sm1=sm2;
}
}
