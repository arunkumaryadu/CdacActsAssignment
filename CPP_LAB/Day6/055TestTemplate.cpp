#include<iostream>
#include<string>
using namespace std;
namespace nm55
{
class CA
{
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	void Fun()
	{
		cout<<"CA Fun"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};

class CB
{
public:
	CB()
	{
		cout<<"CB Ctor"<<endl;
	}
	void DoJob()
	{
		cout<<"CB DoJob"<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor"<<endl;
	}
};


template<typename T>
class Smart
{
	T *ptr;
public:
	Smart():ptr(new T())
	{
	}
	T* operator->()
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
	Smart<CA> sm1;
	sm1->Fun();
	cout<<"_____________________"<<endl;
	Smart<CB> sm2;
	sm2->DoJob();
}
}