#include<iostream>
using namespace std;

class StackException:public exception
{
public:
	StackException(char *expMsg):exception(expMsg)
	{
	}
};
template<int size>
class StackBase
{
protected:
int top;
	StackBase():top(-1)
	{

	}
	bool IsEmpty()
	{
		return top==-1;
	}
	bool IsFull()
	{
		return top==size-1;
	}
};

template<typename T,int size>
class Stack:public StackBase<size>
{
	T data[size];
	
public:
	Stack()
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
	
	void List()
	{
		for(int i=top;i>=0;i--)
		{
			cout<<data[i]<<endl;
		}
	}
};



void main()
{
	Stack<int,10> stk;

	try
	{
		stk.Pop();
	}
	catch(StackException & exp)
	{
		cout<<exp.what()<<endl;
	}

}
