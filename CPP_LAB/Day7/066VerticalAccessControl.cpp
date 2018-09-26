#include<iostream>
using namespace std;
namespace nm066
{
class Math
{
public:
	void AddFun(int x)
	{
		cout<<"Math::AddFun(int)"<<endl;
	}
	void AddFun(int x,int y)
	{
		cout<<"Math::AddFun(int,int)"<<endl;
	}
	void AddFun(double x)
	{
		cout<<"Math::AddFun(double)"<<endl;
	}
};

class MathEx:public Math
{
public:
	//vertical access control
	using Math::AddFun;
	/*void AddFun(int x)
	{
		Math::AddFun(x);
	}*/
	void AddFun(int x,int y,int z)
	{
		cout<<"MathEx::AddFun(int,int,int)"<<endl;
	}
};
void main()
{
	MathEx math;
	math.AddFun(10);
	math.AddFun(11,22);
	math.AddFun(45.67);
	math.AddFun(1,2,3);
}
}