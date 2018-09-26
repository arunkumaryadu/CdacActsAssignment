#include<iostream>
using namespace std;
//james coplein
class CA
{
	int x;
protected:
	int y;
public:
	int z;
	CA():x(10),y(20),z(30)
	{
	}
	void DisplayCa()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
};

class CB:public CA
//class CB:protected CA
//class CB:private CA
{
private:
	CA::y;
protected:
	using CA::z;
public:
	void DisplayCB()
	{
		//cout<<"x="<<x<<endl;//private not inherited
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
};
class CC:public CB
{
public:
	void DisplayCC()
	{
		//cout<<"x="<<x<<endl;//private not inherited
		//cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
};
void main()
{
	CA obj1;
	CB obj2;
	CC obj3;

	obj1.z=999;
//	obj2.z=555;
	//obj3.z=777;
	cout<<"___________________________"<<endl;
	obj1.DisplayCa();
	cout<<"___________________________"<<endl;
	obj2.DisplayCB();
}
