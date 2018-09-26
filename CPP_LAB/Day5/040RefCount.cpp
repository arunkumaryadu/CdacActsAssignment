#include<iostream>
using namespace std;
namespace nm040
{
class CA{
	CA(){	}	
	~CA(){  }
public:
	friend class Smart;
};
class Smart
{
	CA *ptr; int *count;
public:

	Smart():ptr(new CA()),count(new int(1))
	{
	}
	Smart(Smart& par):ptr(par.ptr),count(par.count)
	{
		++(*count);
	}
	Smart& operator=(Smart &par)
	{
		this->Smart::~Smart();
		this->Smart::Smart(par);
		return *this;
	}
	~Smart(){
		--(*count);
		if((*count)==0)
		{
			delete ptr;
			delete count;
		}
	}
};


void main()
{
	Smart sm1;
	Smart sm2(sm1);
	Smart sm3;
	Smart sm4(sm3);
	Smart sm5(sm3);
	sm3=sm1;
}
}
