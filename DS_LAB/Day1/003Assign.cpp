#include<iostream>
#include<string>
using namespace std;

namespace nm03
{
template<int size>
class StackBase
{
protected:
int top;
	StackBase():top(-1)
	{

	}
public:
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
		
			data[++top]=val;
		

	}
	int Pop()
	{
		
			return data[top--];
		
	}
	int Peek()
	{
		return data[top];
	}
};


bool IsToBePushed(int i,char c)
{
	return i>-1 && c!=' ';
}

void main()
{
	string str="England Won India";
	int length=str.length();
	char *revStr=new char[length+1];
	int count=0;
	char ch=' ';
	Stack<char,20> stk;
	for(int i=length-1;i>=-1;i--)
	{
		ch=(i!=-1)?str[i]:'\0';
		if(IsToBePushed(i,ch))
		{
			stk.Push(ch);
		}
		else
		{
			while(!stk.IsEmpty())
			{
				*(revStr + count++)=stk.Pop();
			}
			*(revStr + count++)=ch;
		}
	}
	cout<<revStr<<endl;

	delete [] revStr;
}
}