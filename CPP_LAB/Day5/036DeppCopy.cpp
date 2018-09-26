#include<iostream>
using namespace std;
namespace nm036
{
//deep copy
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
	//Smart(const Smart& par):ptr(par.ptr)//shallow copy
	Smart(const Smart& par):ptr(new CA(*par.ptr))//Deep copy
	{
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

void ClientFun(Smart sm)
{
	cout<<"Apple Pie"<<endl;
	sm->Fun();
	cout<<"American Chopsy"<<endl;
}
//ClientFun(sm1);
void main()
{
	Smart sm1;
	Smart sm2(sm1);
	
}
}