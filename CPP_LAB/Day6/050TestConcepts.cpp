#include<iostream>
#include<string>
using namespace std;
//SMS is low cohessive
namespace nm050
{
class DB //interface 
{
public:
	virtual void OpenDb()=0;
	virtual void CloseDb()=0;
	operator DB*()
	{
		return this;
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
	DB *db;
	virtual void ActualJob(int accId,int amount)=0;//pure 
	virtual string SmsMsg()=0;
public:
	void SetDb(DB *db)//dependency passed
	{
		this->db=db;
	}
	void DoDebit(int accId,int amount)
	{
		db->OpenDb();
		this->ActualJob(accId,amount);
		db->CloseDb();
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
//-------------------------
class SqlDb:public DB
{
public:
	void OpenDb()
	{
		cout<<"Open DB Sql"<<endl;
	}
	void CloseDb()
	{
		cout<<"Close DB Sql"<<endl;
	}
};

class OraDb:public DB
{
public:
	void OpenDb()
	{
		cout<<"Open DB Ora"<<endl;
	}
	void CloseDb()
	{
		cout<<"Close DB Ora"<<endl;
	}
};
void main()
{
	SqlDb sqlDb;
	SavingsAccount sa;
	sa.SetDb(sqlDb);
	CurrentAccount ca;
	OraDb oraDb;
	ca.SetDb(oraDb);
	sa.DoDebit(101,30000);
	ca.DoDebit(102,20000);
}
}