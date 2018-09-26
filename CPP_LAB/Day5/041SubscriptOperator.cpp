#include<iostream>
using namespace std;
namespace nm041
{
class CArray
{
	int arr[5];
public:
	CArray()
	{
		arr[0]=11;
		arr[1]=22;
		arr[2]=33;
		arr[3]=44;
		arr[4]=55;
	}

	int & operator[](int index)
	{
		return arr[index];
	}

	friend ostream& operator<<(ostream& os,CArray & cArr)
	{
		for(int i=0;i<5;i++)
		{
			os<<"arr["<<i<<"]="<<cArr.arr[i]<<endl;
		}
		return os;
	}
};

void main()
{
	CArray arr;

	
	int x=arr[2];//reading //arr.operator[](2);
	arr[3]=999;//writing
	arr[1]=arr[2];//read/write

	cout<<arr;
	cout<<"x="<<x<<endl;
}
}