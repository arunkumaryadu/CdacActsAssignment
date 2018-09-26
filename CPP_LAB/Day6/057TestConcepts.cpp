#include<iostream>
using namespace std;

class CA
{
	public:
		CA()
		{
			fun();
		}
		virtual void fun()
		{
			cout<<"Apple"<<endl;
		}
		void MyFun()
		{
			fun();
		}
		~CA()
		{
			fun();
		}
};

class CB:public CA
{
public:
	CB()
	{
		fun();
	}
	void fun()
	{
		cout<<"Orange"<<endl;
	}
	~CB()
	{
		fun();
	}
};

void main()
{
	CB obj;
	obj.MyFun();
}