#include<iostream>
using namespace std;
/*
1. mutator
2. Inspector
3. Mutable member
4. const member
5. static const

*/

class CA
{
public:
	int i;
	const int c;
	mutable int m;
	static int s;
	static const int sc;
	CA(int i,int c,int m):i(i),c(c),m(m)
	{
		
	}
	CA(int k):c(k)
	{
	}
	void Fun() //mutator
	{
			i+=999;
			
			m+=333;
			cout<<"i  ="<<i<<endl;
			cout<<"c  ="<<c<<endl;
			cout<<"m  ="<<m<<endl;
			cout<<"s  ="<<s<<endl;
			cout<<"sc ="<<sc<<endl;

			cout<<"________________________"<<endl;
	}
	void Display() const //inspector
	{
			m+=333;
			cout<<"i  ="<<i<<endl;
			cout<<"c  ="<<c<<endl;
			cout<<"m  ="<<m<<endl;
			cout<<"s  ="<<s<<endl;
			cout<<"sc ="<<sc<<endl;

			cout<<"________________________"<<endl;
	}
	static void DisplayStatic()
	{
		cout<<"******************************"<<endl;
			cout<<"s  ="<<s<<endl;
			cout<<"sc ="<<sc<<endl;
		cout<<"******************************"<<endl;
	}
};
int CA::s=10;
const int CA::sc=20;
void main()
{
	CA obj1(10,20,30);
	const CA obj2(11,22,33);
	obj1.Fun();
	obj1.Display();
	obj2.Display();
	//obj2.Fun();
	obj1.DisplayStatic();
	CA::DisplayStatic();



}