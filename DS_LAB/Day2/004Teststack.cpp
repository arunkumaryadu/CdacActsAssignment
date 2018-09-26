#include<iostream>
using namespace std;

//self referential
struct MyStruct
{
	int data;
	MyStruct *next;
};

class Stack
{
	MyStruct *head;
	MyStruct *CreateNode(int val)
	{
		MyStruct *temp=new MyStruct();
		temp->data=val;
		temp->next=NULL;
		return temp;
	}
public:
	Stack():head(NULL)
	{
	}
	void Push(int val)
	{
		MyStruct *tem=CreateNode(val);
		tem->next=head;
		head=tem;
	}
	int Pop()
	{
		int val=-1;
		if(!IsEmpty())
		{
			MyStruct *temp=head;
			head=head->next;
			val=temp->data;
			cout<<"Releasing node with value : "<<val<<endl;
			delete temp;
		}
		return val;
	}
	int Peek()
	{
		int val=-1;
		if(!IsEmpty())
		{
			val=head->data;
		}
		return val;
	}
	bool IsEmpty()
	{
		return head==NULL;
	}
	~Stack()
	{
		while(!IsEmpty())
			Pop();
	}
	void List()
	{
		cout<<"________________________"<<endl;
		for(MyStruct *temp=head;temp!=NULL;temp=temp->next)
		{
			cout<<temp->data<<endl;
		}
		cout<<"________________________"<<endl;
	}
};


void main()
{
	Stack st;
	st.Push(100);
	st.Push(200);
	st.Push(300);
	st.Push(400);
	st.List();
	st.Pop();
	st.List();
	cout<<"_________________________"<<endl;
}
