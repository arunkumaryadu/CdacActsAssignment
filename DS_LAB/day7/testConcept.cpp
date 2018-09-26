#include<iostream>
#include<stack>
using namespace std;
namespace nmCommand
{
class Account
{
	int amount;
public:
	Account(int amount):amount(amount)
	{
	}

	void Debit(int amount)
	{
		this->amount-=amount;
	}
	void Credit(int amount)
	{
		this->amount+=amount;
	}
	int GetBalance()
	{
		return this->amount;
	}
};

class Command
{
public:
	virtual void Execute()=0;
	virtual void UnExecute()=0;
};

class AccountCommand:public Command
{
protected:
	Account & acc;
	int amount;
	AccountCommand(Account & acc,int amount):acc(acc),amount(amount)
	{
	}
	
};

class WithdrawCmd:public AccountCommand
{
public:
	WithdrawCmd(Account & acc,int amount):AccountCommand(acc,amount)
	{
	}
	void Execute()
	{
		acc.Debit(this->amount);
	}
	void UnExecute()
	{
		acc.Credit(this->amount);
	}
};


class DepositCmd:public AccountCommand
{
public:
	DepositCmd(Account & acc,int amount):AccountCommand(acc,amount)
	{
	}
	void Execute()
	{
		acc.Credit(this->amount);
	}
	void UnExecute()
	{
		acc.Debit(this->amount);
	}
	
};



class TransHelper
{
	Account & acc;
	stack<Command*> stk;
public:
	TransHelper(Account & acc):acc(acc)
	{
	}
	void Withdrawal(int amount)
	{
		Command *cmd=new WithdrawCmd(acc,amount);
		stk.push(cmd);
		cmd->Execute();
		//acc.Debit(amount);
	}
	void Deposit(int amount)
	{
		Command *cmd=new DepositCmd(acc,amount);
		stk.push(cmd);
		cmd->Execute();
		//acc.Credit(amount);
	}
	void Undo()
	{
		Command *cmd=stk.top();
		cmd->UnExecute();
		ReleaseTop();
	}
	void ReleaseTop()
	{
			Command *cmd=stk.top();
			stk.pop();
			delete cmd;
	}
	~TransHelper()
	{
		while(!stk.empty())
		{
			ReleaseTop();
		}
	}
};

void main()
{
  Account acc(5000);

  TransHelper trans(acc);

  trans.Withdrawal(1000);
  trans.Withdrawal(500);

  trans.Deposit(2000);
  trans.Deposit(3000);

  trans.Undo();
  trans.Undo();
  trans.Undo();

  cout<<"Balance is "<<acc.GetBalance()<<endl;

}
}