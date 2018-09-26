#include<iostream>
#include<string>
using namespace std;
//violating low coupling (DB)
namespace nm049
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

class SMS
{
public:
	static void SendSms(string msg)
	{
		cout<<"SMS sent ("<<msg<<")"<<endl;
	}
};

class Account//abstract class
{
protected:
	DB db;
	virtual void ActualJob(int accId,int amount)=0;//pure 
	virtual string SmsMsg()=0;
public:
	void DoDebit(int accId,int amount)
	{
		db.OpenDb();
		this->ActualJob(accId,amount);
		db.CloseDb();
		SMS::SendSms(SmsMsg());
		cout<<"______________________________"<<endl;
	}
};

class SavingsAccount:public Account
{
protected:
	string SmsMsg()
	{
		return "Savings Debit done ";
	}
	void ActualJob(int accId,int amount)
	{
		cout<<"Doing Debit operation for Savings Account"<<endl;

	}
};

class CurrentAccount:public Account
{
public:
	string SmsMsg()
	{
		return "Current Debit done ";
	}
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