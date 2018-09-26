#include<iostream>
using namespace std;
namespace nm075
{
class ArrayWrapper
{
	int arr[3][3];
public:
	ArrayWrapper()
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				arr[i][j]=0;
			}
		}
	}

	class Helper
	{
		int index;
		ArrayWrapper * ptr;
	public:
		Helper(ArrayWrapper * ptr,int index):ptr(ptr),index(index)
		{
		}
		int & operator[](int index)
		{
			return ptr->arr[this->index][index];
		}
	};


	Helper operator[](int index)
	{

		return Helper(this,index);
	}
	friend ostream& operator<<(ostream& os,ArrayWrapper & par)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				os<<par.arr[i][j]<<"\t";
			}
			os<<endl;
		}
		return os;
	}
};

void main()
{
	ArrayWrapper smArr;
	smArr[1][1]=100;
	smArr[1][2]=999;
	int x=smArr[1][2];
	cout<<smArr<<endl;
	cout<<"x="<<x<<endl;
}
}