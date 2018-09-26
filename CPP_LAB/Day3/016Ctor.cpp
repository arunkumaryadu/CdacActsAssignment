#include<iostream>
using namespace std;
namespace nm016
{
class CA
{
	int x;
	int y;
	int z;
public:
	CA():x(10),y(20),z(30)
	{
		cout<<"CA Default ctor"<<endl;
	}
	/*explicit*/  CA(int par):x(par),y(par),z(par)
	{
		cout<<"CA One Param ctor"<<endl;
	}
	
	CA(int par1,int par2):x(par1),y(par2),z(par1+par2)
	{
		cout<<"CA Two Param ctor"<<endl;
	}

	CA(int par1,int par2,int par3):x(par1),y(par2),z(par3)
	{
		
		cout<<"CA Three Param ctor (expensive)"<<endl;
	}
	/*explicit*/ CA(CA & par):x(par.x),y(par.y),z(par.z)
	{
		cout<<"CA Copy ctor "<<endl;
	}
	
	void DisplayState()
	{
		cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<"\n____________________________________________________"<<endl;
	}
};
}

void main16_1()
{
	using namespace nm016;
	CA obj1;
	CA obj2(100);//construction
	//CA obj3=500;//casting

	obj1.DisplayState();
	obj2.DisplayState();
	//obj3.DisplayState();
	//obj2=444;
	obj2.DisplayState();
	
}



void main16_2()
{
	using namespace nm016;
	CA obj1(10,20,30);
	obj1.DisplayState();
	CA obj2(obj1);
	obj2.DisplayState();
	//CA obj3=obj2;
	//obj3.DisplayState();
}
