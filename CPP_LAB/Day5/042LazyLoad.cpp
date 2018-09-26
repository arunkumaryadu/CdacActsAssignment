#include<iostream>
using namespace std;
namespace nm042
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
		class	Helper
		{
			CArray *ptr;
			int index;
		public:
			Helper(CArray *ptr,int index):ptr(ptr),index(index)
			{
			}
			operator int()
			{
				cout<<"Reading Business"<<endl;
				return ptr->arr[index];
			}
			Helper& operator=(int val)
			{
				cout<<"Writing Business"<<endl;
				ptr->arr[index]=val;
				return *this;
			}
			Helper& operator=(Helper par)
			{
				cout<<"Reading/Writing Business"<<endl;
				ptr->arr[index]=par.ptr->arr[par.index];
				return *this;
			}
		};

		Helper operator[](int index)
		{
			return Helper(this ,index);
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