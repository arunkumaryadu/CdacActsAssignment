#include<iostream>
using namespace std;

class CA{
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
		delete this;
	}
};


void main()
{
	CA *ptr=new CA();
	delete ptr;
}