#include<iostream>
using namespace std;
namespace nm017
{
class CA
{
	int x;
	int y;
	int z;
public:
	/*CA():x(10),y(20),z(30)
	{
		cout<<"CA Default ctor"<<endl;
	}*/
	 CA(int par):x(par),y(par),z(par)
	{
		cout<<"CA One Param ctor"<<endl;
	}
	
	CA(CA & par):x(par.x),y(par.y),z(par.z)
	{
		cout<<"CA Copy ctor "<<endl;
	}
	
	void DisplayState()
	{
		cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<"\n____________________________________________________"<<endl;
	}
};

class CB:public CA{
public:
	CB(int par):CA(par)
	{
		cout<<"CB par ctor"<<endl;
	}
	CB(CB& par):CA(par)
	{
		cout<<"CB copy ctor"<<endl;
	}
};
}





void main17()
{
	using namespace nm017;
	CB obj1(100);
	CB obj2(obj1);
}
