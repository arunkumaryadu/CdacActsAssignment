#include<iostream>
using namespace std;
namespace nm039
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
	static int count;//not accepted (Zaid Solution)
public:
	Smart():ptr(new CA())
	{
		count++;
	}
	Smart(Smart& par):ptr(par.ptr)
	{
		count++;
	}
	Smart& operator=(Smart &par)
	{
		return *this;
	}
	CA* operator->()
	{
		return ptr;
	}
	~Smart()
	{
		count--;
		if(count==0)
		{
			delete ptr;
		}
	}
};
int Smart::count=0;

void main()
{
	Smart sm1;
	sm1->Fun();
	Smart sm2(sm1);


	Smart sm3;
	Smart sm4(sm3);
	Smart sm5(sm3);
	
	sm3=sm1;
}
}