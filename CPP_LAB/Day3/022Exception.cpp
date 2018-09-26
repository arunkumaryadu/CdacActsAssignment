#include<iostream>
using namespace std;
namespace nm022
{
void VendorFun(int x)
{
	cout<<"apple"<<endl;
	if(10==x)
	{
		throw 100;
	}
	cout<<"orange"<<endl;
}
}
//------------------------

void main022_1()
{
	using namespace nm022;
	cout<<"Resources alloted in main"<<endl;
	VendorFun(20);
	cout<<"Resources Released in main"<<endl;
}

void main022_2()//process crash
{
	using namespace nm022;
	cout<<"Resources alloted in main"<<endl;
	VendorFun(10);
	cout<<"Resources Released in main"<<endl;
}


void MyTerminate()
{
	cout<<"Resources Released in MyTerminate"<<endl;
	exit(0);//gracefull exit always
}
void main022_3()
{
	using namespace nm022;
	set_terminate(MyTerminate);
	cout<<"Resources alloted in main"<<endl;
	VendorFun(10);
	cout<<"Resources Released in main"<<endl;
}