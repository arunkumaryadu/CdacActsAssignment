#include<iostream>
using namespace std;
//template method used (still violates SRP (SMS))
namespace nm048
{
class DB
{
public:
	void OpenDb()
	{
		cout<<"Open DB"<<endl;
	}
	void CloseDb()
	{
		cout<<"Close DB"<<endl;
	}
};

class Account//abstract class
{
protected:
	DB db;
	virtual void ActualJob(int accId,int amount)=0;//pure 
	
public:
	void DoDebit(int accId,int amount)
	{
		db.OpenDb();
		this->ActualJob(accId,amount);
		db.CloseDb();
		cout<<"Sent SMS"<<endl;
		cout<<"______________________________"<<endl;
	}
};

class SavingsAccount:public Account
{
protected:
	void ActualJob(int accId,int amount)
	{
		cout<<"Doing Debit operation for Savings Account"<<endl;
	}
};

class CurrentAccount:public Account
{
public:
	void ActualJob(int accId,int amount)
	{
		cout<<"Doing Debit operation for Current Account"<<endl;
	}
};
void main()
{
	SavingsAccount sa;
	CurrentAccount ca;
	sa.DoDebit(101,30000);
	ca.DoDebit(102,20000);
}
}