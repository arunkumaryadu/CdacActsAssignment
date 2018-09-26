#include<iostream>
using namespace std;
namespace nm035
{
//problem shallow copy
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
	CA* operator->()
	{
		return ptr;
	}
	~Smart()
	{
		delete ptr;
	}
};
//-----------------------
void ClientFun(Smart sm)
{
	cout<<"Apple Pie"<<endl;
	sm->Fun();
	cout<<"American Chopsy"<<endl;
}

void main35_1()
{
	Smart sm;
	sm->Fun();
	ClientFun(sm);
}

void main()
{
	Smart sm1;
	Smart sm2(sm1);
}
}