#include<iostream>
using namespace std;
namespace nm024
{
	
		class CA
		{
		public:
			CA()
			{
				cout<<"CA Ctor"<<endl;
			}
			~CA()
			{
				cout<<"CA D-tor"<<endl;
				throw 500;
			}
	};
}

void main()
{
	using namespace nm024;
	try
	{
		try
		{
			CA obj;
			throw 100;
		}
		catch(int exp)
		{
			cout<<"inner exp="<<exp<<endl;
		}
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
}