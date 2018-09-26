#include<iostream>
using namespace std;


class Aprover
{
	
protected:
	Aprover *successor;
	bool SucessorPresent()
	{
		return successor!=NULL;
	}
public:
	Aprover():successor(NULL){}
	void SetSucessor(Aprover *successor)
	{
		this->successor=successor;
	}
	operator Aprover*()
	{
		return this;
	}
	virtual void ProcessLoan(int amount)=0;
};

class Cashier:public Aprover
{
public:
	void ProcessLoan(int amount)
	{
		if(amount<100000)
			cout<<"Cashier processed loan of "<<amount<<endl;
		else
		{
			cout<<"Cashier Cannot processed loan of "<<amount<<endl;
			if(SucessorPresent())
			{
				this->successor->ProcessLoan(amount);
			}
		}
	}
};

class Manager:public Aprover
{
public:
	void ProcessLoan(int amount)
	{
		if(amount<200000)
			cout<<"Manager processed loan of "<<amount<<endl;
		else
		{
			cout<<"Manager Cannot processed loan of "<<amount<<endl;
			if(SucessorPresent())
			{
				this->successor->ProcessLoan(amount);
			}
		}
	}
};

class Director:public Aprover
{
public:
	void ProcessLoan(int amount)
	{
		if(amount<300000)
			cout<<"Director processed loan of "<<amount<<endl;
		else
		{
			cout<<"Director Cannot processed loan of "<<amount<<endl;
			if(SucessorPresent())
			{
				this->successor->ProcessLoan(amount);
			}
		}
	}
};

void main()
{
	Cashier shivam;
	Manager akshay;
	Director suraj;
	shivam.SetSucessor(akshay);
	akshay.SetSucessor(suraj);


	shivam.ProcessLoan(350000);
}