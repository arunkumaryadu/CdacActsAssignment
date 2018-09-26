#include<iostream>
using namespace std;
namespace nm023
{
		void VendorFun(int x)
		{
			cout<<"apple"<<endl;
			if(10==x)
			{
				throw 100;
			}
			cout<<"orange"<<endl;
		}
}


void main023_1()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	try
	{
		VendorFun(20);
	}
	catch(int exp)
	{
		cout<<"Exception caught "<<exp<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}


void main023_2()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	try
	{
		VendorFun(10);
	}
	catch(int exp)
	{
		cout<<"Exception caught "<<exp<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}



class CA
{
public:
	CA()
	{
		cout<<"CA Ctor"<<endl;
	}
	CA(const CA& par)
	{
		cout<<"CA Copy"<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor"<<endl;
	}
};

void main23_3()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	CA obj;
	try
	{
		VendorFun(10);
	}
	catch(int exp)
	{
		cout<<"Exception caught "<<exp<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}

void main23_4()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	
	try
	{
		CA obj;//change
		VendorFun(10);
	}
	catch(int exp)
	{
		cout<<"Exception caught "<<exp<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}

void main23_5()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	
	try
	{
		
		CA obj;//change
		cout<<"apple"<<endl;
		throw obj;
		cout<<"orange"<<endl;
	}
	catch(CA exp)
	{
		cout<<"Exception caught CA"<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}



class CB
{
	static int count;
	int x;
public:
	CB()
	{
		count++;
		x=count;
		cout<<"CB Ctor"<<endl;
	}
	CB(const CB& par)
	{
		count++;
		x=count;
		cout<<"CB Copy"<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor x="<<x<<endl;
	}
};
int CB::count=0;
void main23_6()
{
	using namespace nm023;
	cout<<"Resources alloted in main"<<endl;
	try
	{
		
		CB obj;//change
		cout<<"apple"<<endl;
		throw obj;
		cout<<"orange"<<endl;
	}
	catch(CB exp)
	{
		cout<<"Exception caught CB"<<endl;
	}
	cout<<"Resources Released in main"<<endl;
}


void main23_7()
{
	cout<<"apple"<<endl;
	try
	{
		cout<<"Orange"<<endl;
		try
		{
			cout<<"Pine"<<endl;
			throw 100;
		}
		catch(int exp)
		{
			cout<<"inner exp="<<exp<<endl;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
	cout<<"Mango"<<endl;
}


void main23_8()
{

	try
	{

		try
		{

			throw 100;
		}
		catch(int exp)
		{
			cout<<"inner exp="<<exp<<endl;
			throw 300;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
	cout<<"Mango"<<endl;
}

void main23_9()
{
	try
	{
		try
		{
			throw 100;
		}
		catch(int exp)
		{
			cout<<"inner exp="<<exp<<endl;
			throw;//change rethrow
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
	cout<<"Mango"<<endl;
}



void main23_10()
{
	try
	{
		try
		{
			throw 100;
		}
		catch(int exp)
		{
			exp+=99;//change
			cout<<"inner exp="<<exp<<endl;
			throw;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
	cout<<"Mango"<<endl;
}



void main23_11()
{
	try
	{
		try
		{
			throw 100;
		}
		catch(int & exp)//change a;;ways catch by refrence
		{
			exp+=99;
			cout<<"inner exp="<<exp<<endl;
			throw;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer exp="<<exp<<endl;
	}
	cout<<"Mango"<<endl;
}