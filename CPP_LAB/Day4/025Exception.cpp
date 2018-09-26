#include<iostream>
using namespace std;



void main025_1()
{
	try
	{
		try
		{
			throw 100.87;
		}
		catch(int exp)
		{
			cout<<"inner int exp="<<exp<<endl;
		}
		catch(...)//catch any or catch all or general catch
		{
			cout<<"Inner Catch General"<<endl;
			throw 400;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer int exp="<<exp<<endl;
	}
	catch(...)//catch any or catch all or general catch
	{
		cout<<"Outer Catch General"<<endl;
	}
	cout<<"Apple"<<endl;
}




void main025_2()
{
	try
	{
		try
		{
			throw 100.87;
		}
		catch(int exp)
		{
			cout<<"inner int exp="<<exp<<endl;
		}
		catch(...)//catch any or catch all or general catch
		{
			cout<<"Inner Catch General"<<endl;
			throw;
		}
		cout<<"Jack"<<endl;
	}
	catch(int exp)
	{
		cout<<"outer int exp="<<exp<<endl;
	}
	catch(...)//catch any or catch all or general catch
	{
		cout<<"Outer Catch General"<<endl;
	}
	cout<<"Apple"<<endl;
}

