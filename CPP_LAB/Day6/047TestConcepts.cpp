#include<iostream>
using namespace std;
//violating dry
namespace nm047
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

class SavingsAccount
{
	DB db;
public:
	void DoDebit(int accId,int amount)
	{
		db.OpenDb();
		cout<<"Doing Debit operation for Savings Account"<<endl;
		db.CloseDb();
		cout<<"Sent SMS"<<endl;
		cout<<"______________________________"<<endl;
	}
};

class CurrentAccount
{
	DB db;
public:
	void DoDebit(int accId,int amount)
	{
		db.OpenDb();
		cout<<"Doing Debit operation for Current Account"<<endl;
		db.CloseDb();
		cout<<"Sent SMS"<<endl;
		cout<<"______________________________"<<endl;
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