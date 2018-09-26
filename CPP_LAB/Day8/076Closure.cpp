#include<iostream>
using namespace std;
namespace nm076
{
template<typename T>
void DoBusiness(T obj)
{
	cout<<"Business Started "<<endl;
	obj();//callback
	cout<<"Business Completed "<<endl;
}

//-------------------
void ClientFun()
{
	cout<<"Client fun called "<<endl;
}
void main76_1()
{
	DoBusiness(&ClientFun);
}

class FUNCTOR//FUNCTOR or FUNCTION OBJECTS
{
	int k;
	int j;
public:
	FUNCTOR(int k,int j):k(k),j(j)
	{
	}
	void operator()()
	{
		cout<<"Client fun called through functor k="<<k<<endl;
	}
};

void main()
{
	int k=100;
	int j=456;
	FUNCTOR fnc(k,j);
	DoBusiness(fnc);

}
}