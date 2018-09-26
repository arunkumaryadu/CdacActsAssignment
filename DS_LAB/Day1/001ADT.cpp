#include<iostream>
using namespace std;
namespace nm01
{
class StackException:public exception
{
public:
	StackException(char *expMsg):exception(expMsg)
	{
	}
};
//ADT
class Stack
{
	int data[5];
	int top;
public:
	Stack():top(-1)
	{
	}
	void Push(int val)
	{
		if(!IsFull())
		{
			data[++top]=val;
		}
		else
		{
			throw StackException("Stack Overflow");
		}

	}
	int Pop()
	{
		if(!IsEmpty())
		{
			return data[top--];
		}
		else
		{
			throw StackException("Stack UnderFlow");
		}
	}
	int Peek()
	{
		if(!IsEmpty())
		{
			return data[top];
		}
		else
		{
			throw StackException("Stack is Empty");
		}
	}
	bool IsEmpty()
	{
		return top==-1;
	}
	bool IsFull()
	{
		return top==4;
	}
	void List()
	{
		for(int i=top;i>=0;i--)
		{
			cout<<data[i]<<endl;
		}
	}
};


void Menu()
{
	cout<<"P->Push\nO->Pop\nE->Peek\nL->List\nX->Exit\nPlz enter your choice : ";
	
}
void main()
{
	Menu();
	char ch;
	int val;
	Stack stk;
	while((ch=getchar())!='x')
	{
		fflush(stdin);
		try
		{
		switch(ch)
		{
		case 'P':
		case 'p':
			cout<<"Enter the value to be pushed ";
			cin>>val;
			fflush(stdin);
			stk.Push(val);
			break;
		case 'O':
		case 'o':
			val=stk.Pop();
			cout<<"The poped element is "<<val<<endl;
			break;
		case 'E':
		case 'e':
			val=stk.Peek();
			cout<<"The top element is "<<val<<endl;
			break;
		case 'L':
		case 'l':
			stk.List();
			break;
		default:
			throw StackException("Invalid Key");
		};
		}
		catch(StackException & exp)
		{
			cout<<exp.what()<<endl;
		}
		Menu();
	}
}
}