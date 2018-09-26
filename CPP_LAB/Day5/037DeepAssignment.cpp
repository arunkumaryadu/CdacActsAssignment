#include<iostream>
using namespace std;
namespace nm037
{
//deep Assignment
class CA
{
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	CA(const CA& par)
	{
		cout<<"CA Copy"<<endl; 
	}
	~CA(){
		cout<<"CA Dtor"<<endl;
	}
	CA& operator=(const CA& par)
	{
		return *this;
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
	
	Smart(const Smart& par):ptr(new CA(*par.ptr))
	{
	}
	CA* operator->()
	{
		return ptr;
	}
	Smart& operator=(const Smart& par)
	{
		*ptr=*par.ptr;
		return *this;
	}
	~Smart()
	{
		delete ptr;
	}
};

void main()
{
	Smart sm1;
	Smart sm2(sm1);
	

	sm1=sm2;
}
}