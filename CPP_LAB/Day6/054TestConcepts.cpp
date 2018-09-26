#include<iostream>
#include<string>
using namespace std;
//avoid bloating
namespace nm054
{
class BaseCA
{
protected:
	int count;
public:
	BaseCA():count(-1)
	{
	}
bool IsFilled()
	{
		return count==4;
	}
	bool IsEmpty()
	{
		return count==-1;
	}
};

template<typename T>
class CA:public BaseCA
{
	T arr[5];

public:
	void FillValue(T val)
	{
		arr[++count]=val;
	}
	
	void Display()
	{
		for(int i=0;i<=count;i++)
		{
			cout<<"arr["<<i<<"]="<<arr[i]<<endl;
		}
	}
};

void main()
{
	CA<int> obj1;
	CA<double> obj;
	obj.FillValue(10.54);
	obj.FillValue(20.23);
	obj.Display();
}
}