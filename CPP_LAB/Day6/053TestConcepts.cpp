#include<iostream>
#include<string>
using namespace std;
namespace nm53
{
//template bloating
template<typename T>
class CA
{
	T arr[5];
	int count;
public:
	CA():count(-1)
	{
	}
	void FillValue(T val)
	{
		arr[++count]=val;
	}
	bool IsFilled()
	{
		return count==4;
	}
	bool IsEmpty()
	{
		return count==-1;
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