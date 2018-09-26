#include<iostream>
using namespace std;
namespace nm045
{
//not follwoing SRP or High cohession (Cyclomatic complexity)
class Bank
{
public:
	void DoDebit(int accId,int amount,int AccType)
	{
		cout<<"Open DB"<<endl;
		if(AccType==1)
		{
			cout<<"Doing Debit operation for Savings Account"<<endl;
		}
		else
		{
			cout<<"Doing Debit operation for Current Account"<<endl;
		}
		cout<<"Close Db"<<endl;
		cout<<"Sent SMS"<<endl;
		cout<<"______________________________"<<endl;
	}
};

void main()
{
	Bank bnk;

	bnk.DoDebit(101,30000,1);

	bnk.DoDebit(102,20000,2);

}
}