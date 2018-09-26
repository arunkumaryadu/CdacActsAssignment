#include<iostream>
using namespace std;
namespace nm065
{
	//lippman
class CA
{
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	virtual ~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};

class CB:public CA 
{
public:
	CB()//CA::CA()
	{
		cout<<"CB Ctor"<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor"<<endl;
	}//CA::~CA()
};

void main()
{
	CA *ptr=new CB();


	delete ptr;
};
}