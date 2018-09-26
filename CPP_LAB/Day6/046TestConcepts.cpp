#include<iostream>
using namespace std;
//voilates dry principle (SRP)
namespace nm046
{
class SavingsAccount
{
public:
	void DoDebit(int accId,int amount)
	{
		cout<<"Open DB"<<endl;
		cout<<"Doing Debit operation for Savings Account"<<endl;
		cout<<"Close Db"<<endl;
		cout<<"Sent SMS"<<endl;
		cout<<"______________________________"<<endl;
	}
};

class CurrentAccount
{
public:
	void DoDebit(int accId,int amount)
	{
		cout<<"Open DB"<<endl;
		
			cout<<"Doing Debit operation for Current Account"<<endl;
		cout<<"Close Db"<<endl;
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