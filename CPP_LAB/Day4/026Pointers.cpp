#include<iostream>
using namespace std;


void main026_1()
{
	int x=10;
	int y=20;

	//int *ptr=&x;//normal pointer
	//const int *ptr=&x;//pointer to a constant
	//int const *ptr=&x;//pointer to a constant
	//int  * const ptr=&x;//constant pointer
	int const * const  ptr  =&x;//constant pointer to a constant

	//ptr=&y; //line 1
	//*ptr=999; //line 2
	
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;

}