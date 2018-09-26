#include<iostream>
using namespace std;
namespace nm069
{
int i=10;

int & getI()
{
	return  i;
}


void main69_1()
{
	getI()=999;

	cout<<"i="<<i<<endl;
}

void main69_2()
{
	int i=20;

	cout<<"i="<<i<<endl;
	//cout<<"::i="<<::i<<endl;
}

void main69_3()
{
	int i=20;
	getI()=888;
	cout<<"i="<<i<<endl;
	//cout<<"::i="<<::i<<endl;
}

void fun1(int y)
{
	cout<<"&y="<<&y<<" and y="<<y<<endl;
}
void fun2(int & y)
{
	cout<<"&y="<<&y<<" and y="<<y<<endl;
}
void fun(int *ptr)
{
		cout<<"&ptr="<<&ptr<<" and ptr="<<ptr<<" and *ptr="<<*ptr<<endl;
}
void main()
{
	int x=10;
	cout<<"&x="<<&x<<" and x="<<x<<endl;
	//fun1(x);
	//fun2(x);
	fun(&x);
}
}