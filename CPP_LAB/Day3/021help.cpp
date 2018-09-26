#include<iostream>
using namespace std;

namespace nm021
{
	class CA
	{
		int x;
	public:
		CA():x(100)
		{
		}
		operator int()
		{
			return x;
		}
		operator CA*()
		{
			return this;
		}
		CA& operator=(int par)
		{
			this->x=par;
			return *this;
		}
	};
}

void main()
{
	using namespace nm021;
	CA obj;
	int k=obj;
	CA *ptr=obj;
	cout<<"k="<<k<<endl;
	cout<<ptr<<","<<&obj<<endl;
	obj=678;

}
