#include<iostream>
using namespace std;

class CA
{
	static bool globalHeap;
	bool IsOnHeap;
public:
	static void* operator new(size_t size)
	{
		globalHeap=true;
		return malloc(size);
	}
	CA():IsOnHeap(globalHeap)
	{
		globalHeap=false;
	}
	void ObjectLocation()
	{
		if(IsOnHeap==true)
		{
			cout<<"Is On Heap "<<endl;
		}
		else
		{
			cout<<"Is (Not) on heap"<<endl;
		}
	}
};
bool CA::globalHeap=false;

void main()
{
	CA obj1;
	CA *ptr1=new CA();
	CA obj2;
	CA *ptr2=new CA();

	obj1.ObjectLocation();
	obj2.ObjectLocation();
	cout<<"________________________"<<endl;
	ptr1->ObjectLocation();
	ptr2->ObjectLocation();

}